.section _DATA, _data
str:
 .asciz "Hello world!\n"
 
.section _TEXT, _text
.globl _main
_main:
	pushq %rbp
	movq %rsp, %rbp
	movq str@GOTPCREL(%rip),%rdi
	movb $0, %al
	callq _printf
	popq %rbp
	movl $0x2000001, %eax
	syscall