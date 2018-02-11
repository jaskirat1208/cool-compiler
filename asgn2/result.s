.data
	b:	.quad 0
	a:	.quad 0
	str:	.string "%d\n"
.text
.globl main
main:
label0:
	movq $2, %R8

	movq $7, %R9

	movq %R8, %R8
	addq %R9, %R8

	mov %R8, a
	cmp $50, 
	jle label1

label1:
	pushq %RDI
	pushq %RSI
	pushq %RAX
	movq $str, %RDI
	movq , %RSI
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
	movq %R9, %RSI
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
	ret
