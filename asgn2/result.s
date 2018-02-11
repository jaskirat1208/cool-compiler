.data
	a:	.quad 0
	b:	.quad 0
	str:	.string "%d\n"
.text
.globl main
main:
label0:
	movq $2, %R8

label1:
	movq $7, %R12

	movq %R8, %R8
	addq %R12, %R8

	cmp $50, %R8
	jle label1

label2:
	call label4

label3:
	ret
label4:
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

	ret
	ret
