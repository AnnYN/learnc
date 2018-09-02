.section _DATA,_data
str:
 .asciz "Hello world!\n"
 
 
.section _TEXT,_text
.globl _main
_main:
	movl $0x2000004,%eax //prepare sys call 4
	movl $1,%edi      //STDOUT file descriptor is 1
	movq str@GOTPCREL(%rip), %rsi //the value to print
	movq $100, %rdx
	syscall
	
	movl $0, %ebx
	movl $0x2000001, %eax
	syscall
	
