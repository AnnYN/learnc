.section _TEXT ,_text
.global _main
_main:
	pushq %rbp
	movq %rsp, %rbp
	movl $5,%edi
	callq _exit
	