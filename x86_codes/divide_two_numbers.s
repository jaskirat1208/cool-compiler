.data
x:
		.quad 12
y: 		.quad 3


str: 	.string "%d\n"


.text
.globl main

main:
		PUSH %rbp
		MOVQ $0, %rdx
		MOVQ (x), %rax
		MOVQ (y), %rbx
		idiv %rbx
		pop %rbp
		ret
