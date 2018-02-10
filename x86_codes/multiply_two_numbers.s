.data
x:
		.quad 12
y: 		.quad 13


str: 	.string "%d\n"


.text
.globl main

main:
		PUSH %rbp
		MOVQ (y), %rax
		MOVQ (x), %rbx
		imul %rbx
		pop %rbp
		RET
