.data
	d:	.quad 0
	b:	.quad 0
	a:	.quad 0
	c:	.quad 0
	str:	.string "%d\n"
.text
.globl main
main:
label0:
	movq $2, %RAX
	movq %RAX, a

label1:
	movq $7, %RBX
	movq %RBX, b

	movq $10, %RCX
	movq %RCX, c

	movq $9, %RDX
	movq %RDX, d

	movq a, %RAX
	addq b, %RAX
	movq %RAX, a

	movq a, %RCX
	addq d, %RCX
	movq %RCX, c

	pushq %RDI
	pushq %RSI
	pushq %RAX
	movq $str, %RDI
	movq a, %RSI
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

	cmp $50, %RAX
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
	movq a, %RSI
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
