movl $0x5561dca8,%eax
movq $0x6166373939623935,%rcx
movq %rcx,(%rax)
movl $0,8(%rax)
movl %eax,%edi
pushq $0x4018fa
retq
