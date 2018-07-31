
./hex2raw:     file format elf64-x86-64


Disassembly of section .init:

0000000000400728 <_init>:
  400728:	48 83 ec 08          	sub    $0x8,%rsp
  40072c:	e8 0b 01 00 00       	callq  40083c <call_gmon_start>
  400731:	48 83 c4 08          	add    $0x8,%rsp
  400735:	c3                   	retq   

Disassembly of section .plt:

0000000000400740 <.plt>:
  400740:	ff 35 aa 18 20 00    	pushq  0x2018aa(%rip)        # 601ff0 <_GLOBAL_OFFSET_TABLE_+0x8>
  400746:	ff 25 ac 18 20 00    	jmpq   *0x2018ac(%rip)        # 601ff8 <_GLOBAL_OFFSET_TABLE_+0x10>
  40074c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000400750 <free@plt>:
  400750:	ff 25 aa 18 20 00    	jmpq   *0x2018aa(%rip)        # 602000 <free@GLIBC_2.2.5>
  400756:	68 00 00 00 00       	pushq  $0x0
  40075b:	e9 e0 ff ff ff       	jmpq   400740 <.plt>

0000000000400760 <__isoc99_fscanf@plt>:
  400760:	ff 25 a2 18 20 00    	jmpq   *0x2018a2(%rip)        # 602008 <__isoc99_fscanf@GLIBC_2.7>
  400766:	68 01 00 00 00       	pushq  $0x1
  40076b:	e9 d0 ff ff ff       	jmpq   400740 <.plt>

0000000000400770 <write@plt>:
  400770:	ff 25 9a 18 20 00    	jmpq   *0x20189a(%rip)        # 602010 <write@GLIBC_2.2.5>
  400776:	68 02 00 00 00       	pushq  $0x2
  40077b:	e9 c0 ff ff ff       	jmpq   400740 <.plt>

0000000000400780 <__libc_start_main@plt>:
  400780:	ff 25 92 18 20 00    	jmpq   *0x201892(%rip)        # 602018 <__libc_start_main@GLIBC_2.2.5>
  400786:	68 03 00 00 00       	pushq  $0x3
  40078b:	e9 b0 ff ff ff       	jmpq   400740 <.plt>

0000000000400790 <malloc@plt>:
  400790:	ff 25 8a 18 20 00    	jmpq   *0x20188a(%rip)        # 602020 <malloc@GLIBC_2.2.5>
  400796:	68 04 00 00 00       	pushq  $0x4
  40079b:	e9 a0 ff ff ff       	jmpq   400740 <.plt>

00000000004007a0 <__isoc99_sscanf@plt>:
  4007a0:	ff 25 82 18 20 00    	jmpq   *0x201882(%rip)        # 602028 <__isoc99_sscanf@GLIBC_2.7>
  4007a6:	68 05 00 00 00       	pushq  $0x5
  4007ab:	e9 90 ff ff ff       	jmpq   400740 <.plt>

00000000004007b0 <realloc@plt>:
  4007b0:	ff 25 7a 18 20 00    	jmpq   *0x20187a(%rip)        # 602030 <realloc@GLIBC_2.2.5>
  4007b6:	68 06 00 00 00       	pushq  $0x6
  4007bb:	e9 80 ff ff ff       	jmpq   400740 <.plt>

00000000004007c0 <fopen@plt>:
  4007c0:	ff 25 72 18 20 00    	jmpq   *0x201872(%rip)        # 602038 <fopen@GLIBC_2.2.5>
  4007c6:	68 07 00 00 00       	pushq  $0x7
  4007cb:	e9 70 ff ff ff       	jmpq   400740 <.plt>

00000000004007d0 <getopt@plt>:
  4007d0:	ff 25 6a 18 20 00    	jmpq   *0x20186a(%rip)        # 602040 <getopt@GLIBC_2.2.5>
  4007d6:	68 08 00 00 00       	pushq  $0x8
  4007db:	e9 60 ff ff ff       	jmpq   400740 <.plt>

00000000004007e0 <fwrite@plt>:
  4007e0:	ff 25 62 18 20 00    	jmpq   *0x201862(%rip)        # 602048 <fwrite@GLIBC_2.2.5>
  4007e6:	68 09 00 00 00       	pushq  $0x9
  4007eb:	e9 50 ff ff ff       	jmpq   400740 <.plt>

00000000004007f0 <__fprintf_chk@plt>:
  4007f0:	ff 25 5a 18 20 00    	jmpq   *0x20185a(%rip)        # 602050 <__fprintf_chk@GLIBC_2.3.4>
  4007f6:	68 0a 00 00 00       	pushq  $0xa
  4007fb:	e9 40 ff ff ff       	jmpq   400740 <.plt>

0000000000400800 <__ctype_b_loc@plt>:
  400800:	ff 25 52 18 20 00    	jmpq   *0x201852(%rip)        # 602058 <__ctype_b_loc@GLIBC_2.3>
  400806:	68 0b 00 00 00       	pushq  $0xb
  40080b:	e9 30 ff ff ff       	jmpq   400740 <.plt>

Disassembly of section .text:

0000000000400810 <_start>:
  400810:	31 ed                	xor    %ebp,%ebp
  400812:	49 89 d1             	mov    %rdx,%r9
  400815:	5e                   	pop    %rsi
  400816:	48 89 e2             	mov    %rsp,%rdx
  400819:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
  40081d:	50                   	push   %rax
  40081e:	54                   	push   %rsp
  40081f:	49 c7 c0 30 0d 40 00 	mov    $0x400d30,%r8
  400826:	48 c7 c1 a0 0c 40 00 	mov    $0x400ca0,%rcx
  40082d:	48 c7 c7 61 0b 40 00 	mov    $0x400b61,%rdi
  400834:	e8 47 ff ff ff       	callq  400780 <__libc_start_main@plt>
  400839:	f4                   	hlt    
  40083a:	90                   	nop
  40083b:	90                   	nop

000000000040083c <call_gmon_start>:
  40083c:	48 83 ec 08          	sub    $0x8,%rsp
  400840:	48 8b 05 99 17 20 00 	mov    0x201799(%rip),%rax        # 601fe0 <__gmon_start__>
  400847:	48 85 c0             	test   %rax,%rax
  40084a:	74 02                	je     40084e <call_gmon_start+0x12>
  40084c:	ff d0                	callq  *%rax
  40084e:	48 83 c4 08          	add    $0x8,%rsp
  400852:	c3                   	retq   
  400853:	90                   	nop
  400854:	90                   	nop
  400855:	90                   	nop
  400856:	90                   	nop
  400857:	90                   	nop
  400858:	90                   	nop
  400859:	90                   	nop
  40085a:	90                   	nop
  40085b:	90                   	nop
  40085c:	90                   	nop
  40085d:	90                   	nop
  40085e:	90                   	nop
  40085f:	90                   	nop

0000000000400860 <deregister_tm_clones>:
  400860:	b8 77 20 60 00       	mov    $0x602077,%eax
  400865:	55                   	push   %rbp
  400866:	48 2d 70 20 60 00    	sub    $0x602070,%rax
  40086c:	48 83 f8 0e          	cmp    $0xe,%rax
  400870:	48 89 e5             	mov    %rsp,%rbp
  400873:	77 02                	ja     400877 <deregister_tm_clones+0x17>
  400875:	5d                   	pop    %rbp
  400876:	c3                   	retq   
  400877:	b8 00 00 00 00       	mov    $0x0,%eax
  40087c:	48 85 c0             	test   %rax,%rax
  40087f:	74 f4                	je     400875 <deregister_tm_clones+0x15>
  400881:	5d                   	pop    %rbp
  400882:	bf 70 20 60 00       	mov    $0x602070,%edi
  400887:	ff e0                	jmpq   *%rax
  400889:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000400890 <register_tm_clones>:
  400890:	b8 70 20 60 00       	mov    $0x602070,%eax
  400895:	55                   	push   %rbp
  400896:	48 2d 70 20 60 00    	sub    $0x602070,%rax
  40089c:	48 c1 f8 03          	sar    $0x3,%rax
  4008a0:	48 89 e5             	mov    %rsp,%rbp
  4008a3:	48 89 c2             	mov    %rax,%rdx
  4008a6:	48 c1 ea 3f          	shr    $0x3f,%rdx
  4008aa:	48 01 d0             	add    %rdx,%rax
  4008ad:	48 d1 f8             	sar    %rax
  4008b0:	75 02                	jne    4008b4 <register_tm_clones+0x24>
  4008b2:	5d                   	pop    %rbp
  4008b3:	c3                   	retq   
  4008b4:	ba 00 00 00 00       	mov    $0x0,%edx
  4008b9:	48 85 d2             	test   %rdx,%rdx
  4008bc:	74 f4                	je     4008b2 <register_tm_clones+0x22>
  4008be:	5d                   	pop    %rbp
  4008bf:	48 89 c6             	mov    %rax,%rsi
  4008c2:	bf 70 20 60 00       	mov    $0x602070,%edi
  4008c7:	ff e2                	jmpq   *%rdx
  4008c9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

00000000004008d0 <__do_global_dtors_aux>:
  4008d0:	80 3d b1 17 20 00 00 	cmpb   $0x0,0x2017b1(%rip)        # 602088 <completed.6976>
  4008d7:	75 11                	jne    4008ea <__do_global_dtors_aux+0x1a>
  4008d9:	55                   	push   %rbp
  4008da:	48 89 e5             	mov    %rsp,%rbp
  4008dd:	e8 7e ff ff ff       	callq  400860 <deregister_tm_clones>
  4008e2:	5d                   	pop    %rbp
  4008e3:	c6 05 9e 17 20 00 01 	movb   $0x1,0x20179e(%rip)        # 602088 <completed.6976>
  4008ea:	f3 c3                	repz retq 
  4008ec:	0f 1f 40 00          	nopl   0x0(%rax)

00000000004008f0 <frame_dummy>:
  4008f0:	48 83 3d 10 15 20 00 	cmpq   $0x0,0x201510(%rip)        # 601e08 <__JCR_END__>
  4008f7:	00 
  4008f8:	74 1e                	je     400918 <frame_dummy+0x28>
  4008fa:	b8 00 00 00 00       	mov    $0x0,%eax
  4008ff:	48 85 c0             	test   %rax,%rax
  400902:	74 14                	je     400918 <frame_dummy+0x28>
  400904:	55                   	push   %rbp
  400905:	bf 08 1e 60 00       	mov    $0x601e08,%edi
  40090a:	48 89 e5             	mov    %rsp,%rbp
  40090d:	ff d0                	callq  *%rax
  40090f:	5d                   	pop    %rbp
  400910:	e9 7b ff ff ff       	jmpq   400890 <register_tm_clones>
  400915:	0f 1f 00             	nopl   (%rax)
  400918:	e9 73 ff ff ff       	jmpq   400890 <register_tm_clones>
  40091d:	90                   	nop
  40091e:	90                   	nop
  40091f:	90                   	nop

0000000000400920 <usage>:
  400920:	48 83 ec 08          	sub    $0x8,%rsp
  400924:	48 89 f9             	mov    %rdi,%rcx
  400927:	ba 48 0d 40 00       	mov    $0x400d48,%edx
  40092c:	be 01 00 00 00       	mov    $0x1,%esi
  400931:	48 8b 3d 48 17 20 00 	mov    0x201748(%rip),%rdi        # 602080 <stderr@@GLIBC_2.2.5>
  400938:	b8 00 00 00 00       	mov    $0x0,%eax
  40093d:	e8 ae fe ff ff       	callq  4007f0 <__fprintf_chk@plt>
  400942:	48 8b 0d 37 17 20 00 	mov    0x201737(%rip),%rcx        # 602080 <stderr@@GLIBC_2.2.5>
  400949:	ba 1c 00 00 00       	mov    $0x1c,%edx
  40094e:	be 01 00 00 00       	mov    $0x1,%esi
  400953:	bf 30 0e 40 00       	mov    $0x400e30,%edi
  400958:	e8 83 fe ff ff       	callq  4007e0 <fwrite@plt>
  40095d:	48 8b 0d 1c 17 20 00 	mov    0x20171c(%rip),%rcx        # 602080 <stderr@@GLIBC_2.2.5>
  400964:	ba 1f 00 00 00       	mov    $0x1f,%edx
  400969:	be 01 00 00 00       	mov    $0x1,%esi
  40096e:	bf 68 0d 40 00       	mov    $0x400d68,%edi
  400973:	e8 68 fe ff ff       	callq  4007e0 <fwrite@plt>
  400978:	48 8b 0d 01 17 20 00 	mov    0x201701(%rip),%rcx        # 602080 <stderr@@GLIBC_2.2.5>
  40097f:	ba 21 00 00 00       	mov    $0x21,%edx
  400984:	be 01 00 00 00       	mov    $0x1,%esi
  400989:	bf 88 0d 40 00       	mov    $0x400d88,%edi
  40098e:	e8 4d fe ff ff       	callq  4007e0 <fwrite@plt>
  400993:	48 83 c4 08          	add    $0x8,%rsp
  400997:	c3                   	retq   

0000000000400998 <convert_to_hex_value>:
  400998:	48 83 ec 18          	sub    $0x18,%rsp
  40099c:	48 8d 54 24 0c       	lea    0xc(%rsp),%rdx
  4009a1:	be 4d 0e 40 00       	mov    $0x400e4d,%esi
  4009a6:	b8 00 00 00 00       	mov    $0x0,%eax
  4009ab:	e8 f0 fd ff ff       	callq  4007a0 <__isoc99_sscanf@plt>
  4009b0:	0f b6 44 24 0c       	movzbl 0xc(%rsp),%eax
  4009b5:	48 83 c4 18          	add    $0x18,%rsp
  4009b9:	c3                   	retq   

00000000004009ba <convert_to_byte_string>:
  4009ba:	55                   	push   %rbp
  4009bb:	48 89 e5             	mov    %rsp,%rbp
  4009be:	41 57                	push   %r15
  4009c0:	41 56                	push   %r14
  4009c2:	41 55                	push   %r13
  4009c4:	41 54                	push   %r12
  4009c6:	53                   	push   %rbx
  4009c7:	48 83 ec 28          	sub    $0x28,%rsp
  4009cb:	49 89 fe             	mov    %rdi,%r14
  4009ce:	48 89 75 b8          	mov    %rsi,-0x48(%rbp)
  4009d2:	48 81 ec 00 10 00 00 	sub    $0x1000,%rsp
  4009d9:	bf 00 04 00 00       	mov    $0x400,%edi
  4009de:	e8 ad fd ff ff       	callq  400790 <malloc@plt>
  4009e3:	48 89 45 c8          	mov    %rax,-0x38(%rbp)
  4009e7:	48 85 c0             	test   %rax,%rax
  4009ea:	0f 84 56 01 00 00    	je     400b46 <convert_to_byte_string+0x18c>
  4009f0:	48 89 e3             	mov    %rsp,%rbx
  4009f3:	41 bf 00 00 00 00    	mov    $0x0,%r15d
  4009f9:	c7 45 c4 00 04 00 00 	movl   $0x400,-0x3c(%rbp)
  400a00:	41 bd 00 00 00 00    	mov    $0x0,%r13d
  400a06:	e9 11 01 00 00       	jmpq   400b1c <convert_to_byte_string+0x162>
  400a0b:	44 0f b6 23          	movzbl (%rbx),%r12d
  400a0f:	41 0f b6 c4          	movzbl %r12b,%eax
  400a13:	89 c2                	mov    %eax,%edx
  400a15:	83 ea 2f             	sub    $0x2f,%edx
  400a18:	75 0d                	jne    400a27 <convert_to_byte_string+0x6d>
  400a1a:	0f b6 53 01          	movzbl 0x1(%rbx),%edx
  400a1e:	83 ea 2a             	sub    $0x2a,%edx
  400a21:	75 04                	jne    400a27 <convert_to_byte_string+0x6d>
  400a23:	0f b6 53 02          	movzbl 0x2(%rbx),%edx
  400a27:	85 d2                	test   %edx,%edx
  400a29:	75 09                	jne    400a34 <convert_to_byte_string+0x7a>
  400a2b:	41 83 c5 01          	add    $0x1,%r13d
  400a2f:	e9 e8 00 00 00       	jmpq   400b1c <convert_to_byte_string+0x162>
  400a34:	83 e8 2a             	sub    $0x2a,%eax
  400a37:	75 0d                	jne    400a46 <convert_to_byte_string+0x8c>
  400a39:	0f b6 43 01          	movzbl 0x1(%rbx),%eax
  400a3d:	83 e8 2f             	sub    $0x2f,%eax
  400a40:	75 04                	jne    400a46 <convert_to_byte_string+0x8c>
  400a42:	0f b6 43 02          	movzbl 0x2(%rbx),%eax
  400a46:	85 c0                	test   %eax,%eax
  400a48:	75 3c                	jne    400a86 <convert_to_byte_string+0xcc>
  400a4a:	45 85 ed             	test   %r13d,%r13d
  400a4d:	7f 2e                	jg     400a7d <convert_to_byte_string+0xc3>
  400a4f:	b9 50 0e 40 00       	mov    $0x400e50,%ecx
  400a54:	ba 53 0e 40 00       	mov    $0x400e53,%edx
  400a59:	be 01 00 00 00       	mov    $0x1,%esi
  400a5e:	48 8b 3d 1b 16 20 00 	mov    0x20161b(%rip),%rdi        # 602080 <stderr@@GLIBC_2.2.5>
  400a65:	e8 86 fd ff ff       	callq  4007f0 <__fprintf_chk@plt>
  400a6a:	48 8b 7d c8          	mov    -0x38(%rbp),%rdi
  400a6e:	e8 dd fc ff ff       	callq  400750 <free@plt>
  400a73:	b8 00 00 00 00       	mov    $0x0,%eax
  400a78:	e9 d5 00 00 00       	jmpq   400b52 <convert_to_byte_string+0x198>
  400a7d:	41 83 ed 01          	sub    $0x1,%r13d
  400a81:	e9 96 00 00 00       	jmpq   400b1c <convert_to_byte_string+0x162>
  400a86:	45 85 ed             	test   %r13d,%r13d
  400a89:	0f 85 8d 00 00 00    	jne    400b1c <convert_to_byte_string+0x162>
  400a8f:	e8 6c fd ff ff       	callq  400800 <__ctype_b_loc@plt>
  400a94:	48 8b 00             	mov    (%rax),%rax
  400a97:	4d 0f be e4          	movsbq %r12b,%r12
  400a9b:	42 f6 44 60 01 10    	testb  $0x10,0x1(%rax,%r12,2)
  400aa1:	74 12                	je     400ab5 <convert_to_byte_string+0xfb>
  400aa3:	48 0f be 53 01       	movsbq 0x1(%rbx),%rdx
  400aa8:	f6 44 50 01 10       	testb  $0x10,0x1(%rax,%rdx,2)
  400aad:	74 06                	je     400ab5 <convert_to_byte_string+0xfb>
  400aaf:	80 7b 02 00          	cmpb   $0x0,0x2(%rbx)
  400ab3:	74 2e                	je     400ae3 <convert_to_byte_string+0x129>
  400ab5:	48 89 d9             	mov    %rbx,%rcx
  400ab8:	ba b0 0d 40 00       	mov    $0x400db0,%edx
  400abd:	be 01 00 00 00       	mov    $0x1,%esi
  400ac2:	48 8b 3d b7 15 20 00 	mov    0x2015b7(%rip),%rdi        # 602080 <stderr@@GLIBC_2.2.5>
  400ac9:	b8 00 00 00 00       	mov    $0x0,%eax
  400ace:	e8 1d fd ff ff       	callq  4007f0 <__fprintf_chk@plt>
  400ad3:	48 8b 7d c8          	mov    -0x38(%rbp),%rdi
  400ad7:	e8 74 fc ff ff       	callq  400750 <free@plt>
  400adc:	b8 00 00 00 00       	mov    $0x0,%eax
  400ae1:	eb 6f                	jmp    400b52 <convert_to_byte_string+0x198>
  400ae3:	48 89 df             	mov    %rbx,%rdi
  400ae6:	e8 ad fe ff ff       	callq  400998 <convert_to_hex_value>
  400aeb:	41 89 c4             	mov    %eax,%r12d
  400aee:	44 3b 7d c4          	cmp    -0x3c(%rbp),%r15d
  400af2:	75 19                	jne    400b0d <convert_to_byte_string+0x153>
  400af4:	d1 65 c4             	shll   -0x3c(%rbp)
  400af7:	48 63 75 c4          	movslq -0x3c(%rbp),%rsi
  400afb:	48 8b 7d c8          	mov    -0x38(%rbp),%rdi
  400aff:	e8 ac fc ff ff       	callq  4007b0 <realloc@plt>
  400b04:	48 89 45 c8          	mov    %rax,-0x38(%rbp)
  400b08:	48 85 c0             	test   %rax,%rax
  400b0b:	74 40                	je     400b4d <convert_to_byte_string+0x193>
  400b0d:	49 63 c7             	movslq %r15d,%rax
  400b10:	48 8b 4d c8          	mov    -0x38(%rbp),%rcx
  400b14:	44 88 24 01          	mov    %r12b,(%rcx,%rax,1)
  400b18:	45 8d 7f 01          	lea    0x1(%r15),%r15d
  400b1c:	48 89 da             	mov    %rbx,%rdx
  400b1f:	be 6b 0e 40 00       	mov    $0x400e6b,%esi
  400b24:	4c 89 f7             	mov    %r14,%rdi
  400b27:	b8 00 00 00 00       	mov    $0x0,%eax
  400b2c:	e8 2f fc ff ff       	callq  400760 <__isoc99_fscanf@plt>
  400b31:	85 c0                	test   %eax,%eax
  400b33:	0f 8f d2 fe ff ff    	jg     400a0b <convert_to_byte_string+0x51>
  400b39:	48 8b 45 b8          	mov    -0x48(%rbp),%rax
  400b3d:	44 89 38             	mov    %r15d,(%rax)
  400b40:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  400b44:	eb 0c                	jmp    400b52 <convert_to_byte_string+0x198>
  400b46:	b8 00 00 00 00       	mov    $0x0,%eax
  400b4b:	eb 05                	jmp    400b52 <convert_to_byte_string+0x198>
  400b4d:	b8 00 00 00 00       	mov    $0x0,%eax
  400b52:	48 8d 65 d8          	lea    -0x28(%rbp),%rsp
  400b56:	5b                   	pop    %rbx
  400b57:	41 5c                	pop    %r12
  400b59:	41 5d                	pop    %r13
  400b5b:	41 5e                	pop    %r14
  400b5d:	41 5f                	pop    %r15
  400b5f:	5d                   	pop    %rbp
  400b60:	c3                   	retq   

0000000000400b61 <main>:
  400b61:	41 54                	push   %r12
  400b63:	55                   	push   %rbp
  400b64:	53                   	push   %rbx
  400b65:	48 83 ec 10          	sub    $0x10,%rsp
  400b69:	89 fd                	mov    %edi,%ebp
  400b6b:	48 89 f3             	mov    %rsi,%rbx
  400b6e:	4c 8b 25 fb 14 20 00 	mov    0x2014fb(%rip),%r12        # 602070 <__bss_start>
  400b75:	eb 74                	jmp    400beb <main+0x8a>
  400b77:	3c 68                	cmp    $0x68,%al
  400b79:	74 07                	je     400b82 <main+0x21>
  400b7b:	3c 69                	cmp    $0x69,%al
  400b7d:	74 15                	je     400b94 <main+0x33>
  400b7f:	90                   	nop
  400b80:	eb 57                	jmp    400bd9 <main+0x78>
  400b82:	48 8b 3b             	mov    (%rbx),%rdi
  400b85:	e8 96 fd ff ff       	callq  400920 <usage>
  400b8a:	b8 00 00 00 00       	mov    $0x0,%eax
  400b8f:	e9 ff 00 00 00       	jmpq   400c93 <main+0x132>
  400b94:	be 6e 0e 40 00       	mov    $0x400e6e,%esi
  400b99:	48 8b 3d d8 14 20 00 	mov    0x2014d8(%rip),%rdi        # 602078 <optarg@@GLIBC_2.2.5>
  400ba0:	e8 1b fc ff ff       	callq  4007c0 <fopen@plt>
  400ba5:	49 89 c4             	mov    %rax,%r12
  400ba8:	48 85 c0             	test   %rax,%rax
  400bab:	75 3e                	jne    400beb <main+0x8a>
  400bad:	48 8b 0d c4 14 20 00 	mov    0x2014c4(%rip),%rcx        # 602078 <optarg@@GLIBC_2.2.5>
  400bb4:	ba 10 0e 40 00       	mov    $0x400e10,%edx
  400bb9:	be 01 00 00 00       	mov    $0x1,%esi
  400bbe:	48 8b 3d bb 14 20 00 	mov    0x2014bb(%rip),%rdi        # 602080 <stderr@@GLIBC_2.2.5>
  400bc5:	b8 00 00 00 00       	mov    $0x0,%eax
  400bca:	e8 21 fc ff ff       	callq  4007f0 <__fprintf_chk@plt>
  400bcf:	b8 01 00 00 00       	mov    $0x1,%eax
  400bd4:	e9 ba 00 00 00       	jmpq   400c93 <main+0x132>
  400bd9:	48 8b 3b             	mov    (%rbx),%rdi
  400bdc:	e8 3f fd ff ff       	callq  400920 <usage>
  400be1:	b8 01 00 00 00       	mov    $0x1,%eax
  400be6:	e9 a8 00 00 00       	jmpq   400c93 <main+0x132>
  400beb:	ba 70 0e 40 00       	mov    $0x400e70,%edx
  400bf0:	48 89 de             	mov    %rbx,%rsi
  400bf3:	89 ef                	mov    %ebp,%edi
  400bf5:	e8 d6 fb ff ff       	callq  4007d0 <getopt@plt>
  400bfa:	3c ff                	cmp    $0xff,%al
  400bfc:	0f 85 75 ff ff ff    	jne    400b77 <main+0x16>
  400c02:	48 8d 74 24 0c       	lea    0xc(%rsp),%rsi
  400c07:	4c 89 e7             	mov    %r12,%rdi
  400c0a:	e8 ab fd ff ff       	callq  4009ba <convert_to_byte_string>
  400c0f:	48 85 c0             	test   %rax,%rax
  400c12:	74 7a                	je     400c8e <main+0x12d>
  400c14:	c6 44 24 0b 0a       	movb   $0xa,0xb(%rsp)
  400c19:	48 63 54 24 0c       	movslq 0xc(%rsp),%rdx
  400c1e:	48 89 c6             	mov    %rax,%rsi
  400c21:	bf 01 00 00 00       	mov    $0x1,%edi
  400c26:	e8 45 fb ff ff       	callq  400770 <write@plt>
  400c2b:	48 85 c0             	test   %rax,%rax
  400c2e:	79 1b                	jns    400c4b <main+0xea>
  400c30:	48 8b 0d 49 14 20 00 	mov    0x201449(%rip),%rcx        # 602080 <stderr@@GLIBC_2.2.5>
  400c37:	ba 0d 00 00 00       	mov    $0xd,%edx
  400c3c:	be 01 00 00 00       	mov    $0x1,%esi
  400c41:	bf 76 0e 40 00       	mov    $0x400e76,%edi
  400c46:	e8 95 fb ff ff       	callq  4007e0 <fwrite@plt>
  400c4b:	ba 01 00 00 00       	mov    $0x1,%edx
  400c50:	48 8d 74 24 0b       	lea    0xb(%rsp),%rsi
  400c55:	bf 01 00 00 00       	mov    $0x1,%edi
  400c5a:	e8 11 fb ff ff       	callq  400770 <write@plt>
  400c5f:	48 89 c2             	mov    %rax,%rdx
  400c62:	b8 00 00 00 00       	mov    $0x0,%eax
  400c67:	48 85 d2             	test   %rdx,%rdx
  400c6a:	79 27                	jns    400c93 <main+0x132>
  400c6c:	48 8b 0d 0d 14 20 00 	mov    0x20140d(%rip),%rcx        # 602080 <stderr@@GLIBC_2.2.5>
  400c73:	ba 0d 00 00 00       	mov    $0xd,%edx
  400c78:	be 01 00 00 00       	mov    $0x1,%esi
  400c7d:	bf 76 0e 40 00       	mov    $0x400e76,%edi
  400c82:	e8 59 fb ff ff       	callq  4007e0 <fwrite@plt>
  400c87:	b8 00 00 00 00       	mov    $0x0,%eax
  400c8c:	eb 05                	jmp    400c93 <main+0x132>
  400c8e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  400c93:	48 83 c4 10          	add    $0x10,%rsp
  400c97:	5b                   	pop    %rbx
  400c98:	5d                   	pop    %rbp
  400c99:	41 5c                	pop    %r12
  400c9b:	c3                   	retq   
  400c9c:	90                   	nop
  400c9d:	90                   	nop
  400c9e:	90                   	nop
  400c9f:	90                   	nop

0000000000400ca0 <__libc_csu_init>:
  400ca0:	48 89 6c 24 d8       	mov    %rbp,-0x28(%rsp)
  400ca5:	4c 89 64 24 e0       	mov    %r12,-0x20(%rsp)
  400caa:	48 8d 2d 4f 11 20 00 	lea    0x20114f(%rip),%rbp        # 601e00 <__init_array_end>
  400cb1:	4c 8d 25 40 11 20 00 	lea    0x201140(%rip),%r12        # 601df8 <__frame_dummy_init_array_entry>
  400cb8:	4c 89 6c 24 e8       	mov    %r13,-0x18(%rsp)
  400cbd:	4c 89 74 24 f0       	mov    %r14,-0x10(%rsp)
  400cc2:	4c 89 7c 24 f8       	mov    %r15,-0x8(%rsp)
  400cc7:	48 89 5c 24 d0       	mov    %rbx,-0x30(%rsp)
  400ccc:	48 83 ec 38          	sub    $0x38,%rsp
  400cd0:	4c 29 e5             	sub    %r12,%rbp
  400cd3:	41 89 fd             	mov    %edi,%r13d
  400cd6:	49 89 f6             	mov    %rsi,%r14
  400cd9:	48 c1 fd 03          	sar    $0x3,%rbp
  400cdd:	49 89 d7             	mov    %rdx,%r15
  400ce0:	e8 43 fa ff ff       	callq  400728 <_init>
  400ce5:	48 85 ed             	test   %rbp,%rbp
  400ce8:	74 1c                	je     400d06 <__libc_csu_init+0x66>
  400cea:	31 db                	xor    %ebx,%ebx
  400cec:	0f 1f 40 00          	nopl   0x0(%rax)
  400cf0:	4c 89 fa             	mov    %r15,%rdx
  400cf3:	4c 89 f6             	mov    %r14,%rsi
  400cf6:	44 89 ef             	mov    %r13d,%edi
  400cf9:	41 ff 14 dc          	callq  *(%r12,%rbx,8)
  400cfd:	48 83 c3 01          	add    $0x1,%rbx
  400d01:	48 39 eb             	cmp    %rbp,%rbx
  400d04:	75 ea                	jne    400cf0 <__libc_csu_init+0x50>
  400d06:	48 8b 5c 24 08       	mov    0x8(%rsp),%rbx
  400d0b:	48 8b 6c 24 10       	mov    0x10(%rsp),%rbp
  400d10:	4c 8b 64 24 18       	mov    0x18(%rsp),%r12
  400d15:	4c 8b 6c 24 20       	mov    0x20(%rsp),%r13
  400d1a:	4c 8b 74 24 28       	mov    0x28(%rsp),%r14
  400d1f:	4c 8b 7c 24 30       	mov    0x30(%rsp),%r15
  400d24:	48 83 c4 38          	add    $0x38,%rsp
  400d28:	c3                   	retq   
  400d29:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000400d30 <__libc_csu_fini>:
  400d30:	f3 c3                	repz retq 
  400d32:	90                   	nop
  400d33:	90                   	nop

Disassembly of section .fini:

0000000000400d34 <_fini>:
  400d34:	48 83 ec 08          	sub    $0x8,%rsp
  400d38:	48 83 c4 08          	add    $0x8,%rsp
  400d3c:	c3                   	retq   
