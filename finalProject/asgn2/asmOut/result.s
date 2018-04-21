.data
	t2:	.quad 0
	t1:	.quad 0
	c:	.quad 0
	a:	.quad 0
	arr: 
		.quad	7
		.quad	2
		.quad	4
		.quad	5
		.quad	8
	b:	.quad 0
	t4:	.quad 0
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
	movq %RAX, t4
	popq %R11
	pushq %R11
	popq %R11

label1:

	movq $0, %RAX
	ret
label2:
	movq $arr, %RBX
	add $0, %RBX
	push (%RBX)
	pop t1
	movq (%RBX), t1
	pushq %RAX
	pushq %RDX
	movq t1, %RAX
	movq $4, %RBX
	imulq %RBX
	movq %RAX, %RBX
	movq %RBX, t2
	popq %RDX
	popq %RAX

	movq %RBX, t2
	movq t2, %RBX
	movq %RBX, c

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

	movq %RBX, c

	movq $0, %RAX
	ret
	ret
