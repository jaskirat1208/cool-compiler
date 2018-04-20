.data
	t4:	.quad 0
	arr: 
		.quad	7
		.quad	2
		.quad	4
		.quad	5
		.quad	8
	barr: 
		.quad	0
		.quad	0
		.quad	0
	b:	.quad 0
	a:	.quad 0
	t5:	.quad 0
	c:	.quad 0
	t7:	.quad 0
	t1:	.quad 0
	t2:	.quad 0
	t3:	.quad 0
	str:	.string "%d\n"
	scan_str:	.string "%d"
.text
.globl main
main:
label0:
	movq $2, %RBX
	movq %RBX, a

	movq $9, %RCX
	movq %RCX, b

	movq %RBX, a
	movq %RCX, b

	pushq %R11
	call label2
	movq %RAX, t7
	popq %R11
	pushq %R11
	popq %R11

label1:

	movq $0, %RAX
	ret
label2:
	movq $7, %RBX
	movq %RBX, b

	movq a, %RCX
	addq b, %RCX
	movq %RCX, t1

	movq %RCX, t1
	movq t1, %RCX
	movq %RCX, c

	movq $arr, %RSI
	add $0, %RSI
	push (%RSI)
	pop t2
	pushq %RAX
	pushq %RDX
	movq $4, %RAX
	movq t2, %RDI
	imulq %RDI
	movq %RAX, %RDI
	movq %RDI, t3
	popq %RDX
	popq %RAX

	movq %RCX, c
	movq c, %RCX
	addq t3, %RCX
	movq %RCX, t4

	movq %RCX, t4
	movq t4, %RCX
	movq %RCX, c

	movq %RCX, c
	pushq %RAX
	pushq %RDX
	movq c, %RAX
	movq $4, %RCX
	imulq %RCX
	movq %RAX, %RCX
	movq %RCX, t5
	popq %RDX
	popq %RAX

	movq %RCX, t5
	movq t5, %RCX
	movq %RCX, c

	pushq %RBX
	pushq %RCX
	pushq %RDX
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
	popq %RDX
	popq %RCX
	popq %RBX

	movq %RBX, b
	movq %RCX, c
	movq %RSI, t2
	movq %RDI, t3

	movq $0, %RAX
	ret
	ret
