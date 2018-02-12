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
	pushq %RBP
	pushq %RDI
	pushq %RSI
	movq $scan_str, %RDI
	movq $a, %RSI
	call scanf
	popq %RSI
	popq %RDI
	popq %RBP
	movq a, %RBX

	pushq %RBP
	pushq %RDI
	pushq %RSI
	movq $scan_str, %RDI
	movq $b, %RSI
	call scanf
	popq %RSI
	popq %RDI
	popq %RBP
	movq b, %RCX

	movq $0, %RSI
	movq %RSI, c

	pushq %RAX
	pushq %RDX
	movq a, %RAX
	movq b, %RSI
	imulq %RSI
	movq %RAX, %RSI
	movq %RSI, c
	popq %RDX
	popq %RAX

	movq %RBX, a
	movq %RCX, b
	movq %RSI, c

	call label5

label1:
	movq a, %RBX
	addq b, %RBX
	movq %RBX, c

	movq %RBX, c

	call label5

label2:
	pushq %RAX
	pushq %RDX
	movq a, %RAX
	movq b, %RBX
	movq $0, %RDX
	idivq %RBX
	movq %RAX, %RBX
	movq %RBX, c
	popq %RDX
	popq %RAX

	movq %RBX, c

	call label5

label3:
	movq a, %RBX
	subq b, %RBX
	movq %RBX, c

	movq %RBX, c

	call label5

label4:

	ret
label5:
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
	ret
