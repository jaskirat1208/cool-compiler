.data
	b:	.quad 0
	c:	.quad 10
	a:	.quad 0
	str:	.string "%d\n"
.text
.globl main
main:
label0:
	movq $2, %R8

	movq $8, %R9

	movq $7, %R12

	movq %R8, %R8
	addq %R12, c

	pushq %RDI
	pushq %RSI
	pushq %RAX
	movq $str, %RDI
	movq %R8, %RSI
	movq $0, %RAX
	pushq %R10
	pushq %R11
	call printf
	popq %R11
	popq %R10
	popq %RAX
	popq %RSI
	popq %RDI

	pushq %RDI
	pushq %RSI
	pushq %RAX
	movq $str, %RDI
	movq c, %RSI
	movq $0, %RAX
	pushq %R10
	pushq %R11
	call printf
	popq %R11
	popq %R10
	popq %RAX
	popq %RSI
	popq %RDI

	ret
