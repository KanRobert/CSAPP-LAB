/* 
 * CS:APP Data Lab 
 * 
 * <Please put your name and userid here>
 * 
 * bits.c - Source file with your solutions to the Lab.
 *          This is the file you will hand in to your instructor.
 *
 * WARNING: Do not include the <stdio.h> header; it confuses the dlc
 * compiler. You can still use printf for debugging without including
 * <stdio.h>, although you might get a compiler warning. In general,
 * it's not good practice to ignore compiler warnings, but in this
 * case it's OK.  
 */

#if 0
/*
 * Instructions to Students:
 *
 * STEP 1: Read the following instructions carefully.
 */

You will provide your solution to the Data Lab by
editing the collection of functions in this source file.

INTEGER CODING RULES:
 
  Replace the "return" statement in each function with one
  or more lines of C code that implements the function. Your code 
  must conform to the following style:
 
  int Funct(arg1, arg2, ...) {
      /* brief description of how your implementation works */
      int var1 = Expr1;
      ...
      int varM = ExprM;

      varJ = ExprJ;
      ...
      varN = ExprN;
      return ExprR;
  }

  Each "Expr" is an expression using ONLY the following:
  1. Integer constants 0 through 255 (0xFF), inclusive. You are
      not allowed to use big constants such as 0xffffffff.
  2. Function arguments and local variables (no global variables).
  3. Unary integer operations ! ~
  4. Binary integer operations & ^ | + << >>
    
  Some of the problems restrict the set of allowed operators even further.
  Each "Expr" may consist of multiple operators. You are not restricted to
  one operator per line.

  You are expressly forbidden to:
  1. Use any control constructs such as if, do, while, for, switch, etc.
  2. Define or use any macros.
  3. Define any additional functions in this file.
  4. Call any functions.
  5. Use any other operations, such as &&, ||, -, or ?:
  6. Use any form of casting.
  7. Use any data type other than int.  This implies that you
     cannot use arrays, structs, or unions.

 
  You may assume that your machine:
  1. Uses 2s complement, 32-bit representations of integers.
  2. Performs right shifts arithmetically.
  3. Has unpredictable behavior when shifting an integer by more
     than the word size.

EXAMPLES OF ACCEPTABLE CODING STYLE:
  /*
   * pow2plus1 - returns 2^x + 1, where 0 <= x <= 31
   */
  int pow2plus1(int x) {
     /* exploit ability of shifts to compute powers of 2 */
     return (1 << x) + 1;
  }

  /*
   * pow2plus4 - returns 2^x + 4, where 0 <= x <= 31
   */
  int pow2plus4(int x) {
     /* exploit ability of shifts to compute powers of 2 */
     int result = (1 << x);
     result += 4;
     return result;
  }

FLOATING POINT CODING RULES

For the problems that require you to implent floating-point operations,
the coding rules are less strict.  You are allowed to use looping and
conditional control.  You are allowed to use both ints and unsigneds.
You can use arbitrary integer and unsigned constants.

You are expressly forbidden to:
  1. Define or use any macros.
  2. Define any additional functions in this file.
  3. Call any functions.
  4. Use any form of casting.
  5. Use any data type other than int or unsigned.  This means that you
     cannot use arrays, structs, or unions.
  6. Use any floating point data types, operations, or constants.


NOTES:
  1. Use the dlc (data lab checker) compiler (described in the handout) to 
     check the legality of your solutions.
  2. Each function has a maximum number of operators (! ~ & ^ | + << >>)
     that you are allowed to use for your implementation of the function. 
     The max operator count is checked by dlc. Note that '=' is not 
     counted; you may use as many of these as you want without penalty.
  3. Use the btest test harness to check your functions for correctness.
  4. Use the BDD checker to formally verify your functions
  5. The maximum number of ops for each function is given in the
     header comment for each function. If there are any inconsistencies 
     between the maximum ops in the writeup and in this file, consider
     this file the authoritative source.

/*
 * STEP 2: Modify the following functions according the coding rules.
 * 
 *   IMPORTANT. TO AVOID GRADING SURPRISES:
 *   1. Use the dlc compiler to check that your solutions conform
 *      to the coding rules.
 *   2. Use the BDD checker to formally verify that your solutions produce 
 *      the correct answers.
 */


#endif
/* 
 * bitAnd - x&y using only ~ and | 
 *   Example: bitAnd(6, 5) = 4
 *   Legal ops: ~ |
 *   Max ops: 8
 *   Rating: 1
 */
int bitAnd(int x, int y) {
  /* De Morgan's Law */
  return ~(~x|~y);
}
/* 
 * getByte - Extract byte n from word x
 *   Bytes numbered from 0 (LSB) to 3 (MSB)
 *   Examples: getByte(0x12345678,1) = 0x56
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 6
 *   Rating: 2
 */
int getByte(int x, int n) {
  /*move the nth bytes to the least significant position
  , then bitwise-and 0xFF*/
  int movebits=n<<3;
  x=x>>movebits;
  x=x&0xFF;
  return x;

}
/* 
 * logicalShift - shift x to the right by n, using a logical shift
 *   Can assume that 0 <= n <= 31
 *   Examples: logicalShift(0x87654321,4) = 0x08765432
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 20
 *   Rating: 3 
 */
int logicalShift(int x, int n) {
  /*first do arithematic rightshift,then bitwise-and a number 
  whose the most n siginificant bits are 0,the rest are 1*/
  int mask;
  x=x>>n;
  n=(~n+1)+31; 
  mask=~(((~0)<<n)<<1);
  x=x&mask;
  return x;
}
/*
 * bitCount - returns count of number of 1's in word
 *   Examples: bitCount(5) = 2, bitCount(7) = 3
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 40
 *   Rating: 4
 */
int bitCount(int x) {
  /*divide and conquer*/
  int mask1,mask2,mask3,mask4,mask5;
  int count;
  //mask 01010101...01010101  
  mask1=0x55|(0x55<<8);
  mask1=mask1|(mask1<<16); 
  //mask 00110011...00110011
  mask2=0x33|(0x33<<8);
  mask2=mask2|(mask2<<16);
  //mask 00001111...00001111
  mask3=0x0f|(0x0f<<8);
  mask3=mask3|(mask3<<16);
  //mask 0000 0000 1111 1111  0000 0000 1111 1111
  mask4=0xff|(0xff<<16);
  //mask 0000 0000 0000 0000  1111 1111 1111 1111
  mask5=0xff|(0xff<<8);

  //groups of 2
  count=(x&mask1)+((x>>1)&mask1);
  //groups of 4
  count=(count&mask2)+((count>>2)&mask2);
  //groups of 8
  count=(count&mask3)+((count>>4)&mask3);
  //groups of 16
  count=(count&mask4)+((count>>8)&mask4);
  //groups of 32
  count=(count&mask5)+((count>>16)&mask5);
  return count;
}
/* 
 * bang - Compute !x without using !
 *   Examples: bang(3) = 0, bang(0) = 1
 *   Legal ops: ~ & ^ | + << >>
 *   Max ops: 12
 *   Rating: 4 
 */
int bang(int x) {
  /*x's MSB and (-x)'s MSB are all not 0 if and only if x equals 0*/
  return ((~(x|(~x+1)))>>31)&1;
}
/* 
 * tmin - return minimum two's complement integer 
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 4
 *   Rating: 1
 */
int tmin(void) {
  /*Tmin is 0xE0000000*/
  return 1<<31;
}
/* 
 * fitsBits - return 1 if x can be represented as an 
 *  n-bit, two's complement integer.
 *   1 <= n <= 32
 *   Examples: fitsBits(5,3) = 0, fitsBits(-4,3) = 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 15
 *   Rating: 2
 */
int fitsBits(int x, int n) {
  /*think about sign extension, x can be represented as an n-bit if and 
  only if the rest bits in its expanding are all equal to its sign bit.
  so we shift x right by n-1, then judge wheather all bits are same*/
  int movebits=n+((~0x1)+1);
  x=x>>movebits;
  x=!((x+1)>>1);
  return x;
}
/* 
 * divpwr2 - Compute x/(2^n), for 0 <= n <= 30
 *  Round toward zero
 *   Examples: divpwr2(15,1) = 7, divpwr2(-33,4) = -2
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 15
 *   Rating: 2
 */
int divpwr2(int x, int n) {
    /*arithematic right shift for
    postive numbers: div by 2^k round to zero
    negative numbers: dive by 2^k round away from zero
    (add 2^k - 1 to fix)*/
    int signbit=(x>>31)&1;
    int add=(signbit<<n)+(~signbit+1);
    int ret=(x+add)>>n;
    return ret;
}
/* 
 * negate - return -x 
 *   Example: negate(1) = -1.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 5
 *   Rating: 2
 */
int negate(int x) {
  /*x+ (~x)=-1; x+(-x)=0
  so -x=~x+1*/
  return ~x+1;
}
/* 
 * isPositive - return 1 if x > 0, return 0 otherwise 
 *   Example: isPositive(-1) = 0.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 8
 *   Rating: 3
 */
int isPositive(int x) {
  /*first method(exceed max ops):the MSB is 0 and the number itself is not self(implicitly use bang)*/
   int signbit=x>>31;
   int bang=!x;
   return ~signbit & !bang;

}
/* 
 * isLessOrEqual - if x <= y  then return 1, else return 0 
 *   Example: isLessOrEqual(4,5) = 1.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 24
 *   Rating: 3
 */
int isLessOrEqual(int x, int y) {
  /*if the first number is negtive ,the second is positive or 0, then true
  if the second number is positive or 0,the second is negative, then false
  else we can judge wheter y-x>=0*/
  int signx=(x>>31)&1;
  int signy=(y>>31)&1;
  int signCondition=signx&(!signy);
  int sameSign=!(signx^signy);
  int diff=y+(~x+1);
  int diffSign=(diff>>31)&1;
  return signCondition | (sameSign &!diffSign);
}
/*
 * ilog2 - return floor(log base 2 of x), where x > 0
 *   Example: ilog2(16) = 4
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 90
 *   Rating: 4
 */
int ilog2(int x) {
  //bisection method
  int moveBits=0;
  moveBits = moveBits + ((!!(x>>(16 + moveBits)))<<4);
  moveBits = moveBits + ((!!(x>>(8 + moveBits)))<<3);
  moveBits = moveBits + ((!!(x>>(4 + moveBits)))<<2);
  moveBits = moveBits + ((!!(x>>(2 + moveBits)))<<1);
  moveBits = moveBits + ((!!(x>>(1 + moveBits)))<<0);

  return moveBits;
}
/* 
 * float_neg - Return bit-level equivalent of expression -f for
 *   floating point argument f.
 *   Both the argument and result are passed as unsigned int's, but
 *   they are to be interpreted as the bit-level representations of
 *   single-precision floating point values.
 *   When argument is NaN, return argument.
 *   Legal ops: Any integer/unsigned operations incl. ||, &&. also if, while
 *   Max ops: 10
 *   Rating: 2
 */
unsigned float_neg(unsigned uf) {
  /*flip the sign bit, judge wheather it is NaN*/
  unsigned ret=uf^(0x80000000);
  unsigned tmp=uf&(0x7fffffff);
  if(tmp>0x7f800000) ret=uf;
  return ret;
}
/* 
 * float_i2f - Return bit-level equivalent of expression (float) x
 *   Result is returned as unsigned int, but
 *   it is to be interpreted as the bit-level representation of a
 *   single-precision floating point values.
 *   Legal ops: Any integer/unsigned operations incl. ||, &&. also if, while
 *   Max ops: 30
 *   Rating: 4
 */
unsigned float_i2f(int x) {
  int sign,i,exponent,fraction_mask,fraction,error,delta;
  if(x==0) return 0;//float 0.0's bits are all 0
  if(x==0x80000000) return 0xCF000000; //x=-2^31 avoid underflow when negative
  sign=(x>>31) &1;
  if(sign) x=-x;
  i=30;
  while(!(x>>i)) --i;//see the highest bits of x;
  exponent=i+127;// 127 is bias
  x=x<<(31-i);//clean all those zeros of high bits
  fraction_mask=0x7fffff;//(1<<23)-1
  fraction=(x>>8)&fraction_mask;//right shift 8 bits to become the fraction
  error=x & 0xff;//the lowest 8 bit of x
  //if the error in fraction part is greater than a half, add 1 on the LSB of fraction part
  //if the error in fraction part is equal to a half and LSB is odd,add 1 on the LSB of fraction part
  //namely round to even
  delta= error>128 || ((error==128)&(fraction &1));
  fraction=fraction+delta;
  if(fraction>>23){//if after rounding fraction is longer than 23bits
    fraction=fraction&fraction_mask;
    exponent=exponent+1;
  }
  return (sign<<31)|(exponent<<23)|fraction;
}
/* 
 * float_twice - Return bit-level equivalent of expression 2*f for
 *   floating point argument f.
 *   Both the argument and result are passed as unsigned int's, but
 *   they are to be interpreted as the bit-level representation of
 *   single-precision floating point values.
 *   When argument is NaN, return argument
 *   Legal ops: Any integer/unsigned operations incl. ||, &&. also if, while
 *   Max ops: 30
 *   Rating: 4
 */
unsigned float_twice(unsigned uf) {
  int signbit=0x80000000&uf;
  int ret;
   /*denormalized, shift sigificand left by one bit(keep sign unchanged) */
  if((uf&0x7f800000)==0) {
    ret=(uf<<1)|(signbit); 
    return ret;
  }
  /*Infinity or NaN, do nothing*/
  if((uf&0x7f800000)==0x7f800000) return uf;
  /*normalized, add exponent by 1,if overflow return inifinity*/
  ret=uf+(1<<23);
  if((ret&0x7f800000)==0x7f800000) ret=(ret>>23)<<23;
  return ret;
}
