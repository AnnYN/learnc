.section _TEXT, _text
.globl _main
_main:
	movl $0x2000001, %eax
	movl $0, %ebx
	syscall
	
