#include "cachelab.h"
#include<stdio.h>
#include <getopt.h>
#include <stdlib.h>
#include <unistd.h>
#include<limits.h>
#include<ctype.h>
#include<string.h>

typedef struct CacheLine{
    char valid;
    int tag;
    int timestamp;
}CacheLine;

typedef struct CacheSet{
    CacheLine *lines;
}CacheSet;

int getBlock(CacheSet set,int nlines,int tag){
    for(int i=0;i<nlines;++i){
        if(set.lines[i].valid && set.lines[i].tag==tag)
            return i;
    }
    return -1;
}

void updateStamp(CacheSet set,int hitline,int tick){
    set.lines[hitline].timestamp=tick;
}

int getEmptyLine(CacheSet set,int nlines){
    for(int i=0;i<nlines;++i){
        if(!set.lines[i].valid) return i;
    }
    return -1;
}

void addToLFU(int tag,CacheSet set,int nlines,int tick){
    int minindex;
    int mintime;
    mintime=INT_MAX;
    for(int i=0;i<nlines;++i){
        if(set.lines[i].timestamp<mintime){
            mintime=set.lines[i].timestamp;
            minindex=i;
        }
    }
    set.lines[minindex].tag=tag;
    set.lines[minindex].timestamp=tick;
}

void addToEmpty(int tag,CacheSet set,int emptyline,int tick){
    set.lines[emptyline].valid=1;
    set.lines[emptyline].tag=tag;
    set.lines[emptyline].timestamp=tick;
}

int main(int argc,char *argv[])
{
    char verbose;
    int nsetbits;
    int nlines;
    int nblockbits;
    char *filename;

    int nsets;
    FILE *tracefile;

    char operation;
    int address;
    int size;
    int hits,misses,evictions;
    int setnumbermask;
    int tick;

    int c;
    while((c=getopt(argc,argv,"vs:E:b:t:"))!=-1){
        switch(c){
            case 'v':
                verbose=1;
                break;
            case 's':
                nsetbits=atoi(optarg);
                break;
            case 'E':
                nlines=atoi(optarg);
                break;
            case 'b':
                nblockbits=atoi(optarg);
                break;
            case 't':
                filename=optarg;
                break;
            case '?':
                if(optopt=='s'|| optopt=='E'||optopt=='b'||optopt=='t')
                    fprintf (stderr, "Option -%c requires an argument.\n", optopt);
                else if(isprint(optopt))
                    fprintf (stderr, "Unknown option `-%c'.\n", optopt);
                else
                    fprintf (stderr,"Unknown option character `\\x%x'.\n",optopt);
                 return 1;
            default:
                abort();
        }
    }

    nsets=1<<nsetbits;
    CacheSet *sets=malloc(nsets*sizeof(CacheSet));
    for(int i=0;i!=nsets;++i){
        sets[i].lines=calloc(nlines,sizeof(CacheLine));
    }
    
    hits=0;
    misses=0;
    evictions=0;
    tick=0;
    tracefile=fopen(filename,"r");
    setnumbermask=(1<<nsetbits) -1;
    if(tracefile){
        while(fscanf(tracefile," %c %x,%u",&operation,&address,&size)!=-1){           
            if(operation=='I') continue;
            int setnumber;
            int tag;
            int hitline;
            int emptyline;
            setnumber=(address>>nblockbits)&setnumbermask;
            tag=address>>(nsetbits+nblockbits);
            hitline=getBlock(sets[setnumber],nlines,tag);
            if(hitline!=-1){
                ++hits;        
                updateStamp(sets[setnumber],hitline,tick);
            }
            else{
                ++misses;
                emptyline=getEmptyLine(sets[setnumber],nlines);
                if(emptyline==-1){
                    addToLFU(tag,sets[setnumber],nlines,tick);
                }
                else{
                    addToEmpty(tag,sets[setnumber],emptyline,tick);
                }
            }
            ++tick;
            char verboseinfo[50];
            sprintf(verboseinfo,"%c %x,%u",operation,address,size);
            if(hitline==-1){
                strcat(verboseinfo," miss");
                if(emptyline==-1){
                    ++evictions;
                    strcat(verboseinfo," eviction");
                }
                if(operation=='M'){
                    ++hits;
                    strcat(verboseinfo," hit");
                }
            }
            else{
                strcat(verboseinfo," hit");
                if(operation=='M'){
                    ++hits;
                    strcat(verboseinfo," hit");
                }
            }
            strcat(verboseinfo," \n");
            //printf("\n");
            if(verbose) printf("%s",verboseinfo);
        }
        fclose(tracefile);
    }


    for(int i=0;i<nsets;++i){
        free(sets[i].lines);
    }
    free(sets);
    

    printSummary(hits, misses, evictions);
    return 0;
}
