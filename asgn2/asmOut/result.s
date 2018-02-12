.data
	c:	.quad 0
	a:	.quad 0
	b:	.quad 0
	str:	.string "%d\n"
	scan_str:	.string "%d"
.text
.globl main
main:
label0:
	movq $1, %RAX
	movq %RAX, a

	movq %RAX, a

label1:
	movq $9, %RBX
	movq %RBX, b

	movq a, %RCX
	addq b, %RCX
	movq %RCX, a

	cmp $50, %RCX
	jle label1

	movq %RAX, a
	movq %RBX, b
	movq %RCX, a

label2:
	call label4

	movq %RAX, a
	movq %RBX, b
	movq %RCX, a

label3:
	ret
	movq %RAX, a
	movq %RBX, b
	movq %RCX, a

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

	movq $7, %RSI
	movq %RSI, c

	pushq %RAX
	pushq %RDX
	movq b, %RAX
	movq c, %RDI
	movq $0, %RDX
	idivq %RDI
	movq %RAX, %RDI
	movq %RDI, a
	popq %RDX
	popq %RAX

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
	movq b, %RSI
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
	movq %RAX, a
	movq %RBX, b
	movq %RCX, a
	movq %RSI, c
	movq %RDI, a

	ret
