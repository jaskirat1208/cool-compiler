.data
	d:	.quad 0
	n:	.quad 0
	m:	.quad 0
	t1:	.quad 0
	PREVm:	.quad 0
	PREVn:	.quad 0
	b:	.quad 0
	a:	.quad 0
	c:	.quad 0
	str:	.string "%d\n"
	scan_str:	.string "%d"
.text
.globl main
main:
label0:
	movq $2, %RBX
	movq %RBX, m

	movq $4, %RCX
	movq %RCX, n

	movq m, %RBX
	addq n, %RBX
	movq %RBX, m

	movq %RBX, m
	movq m, %RBX
	subq $1, %RBX
	movq %RBX, t1

	pushq %R11
	movq m, %R11
	movq %R11, PREVm
	popq %R11
	pushq %R11
	movq t1, %R11
	movq %R11, m
	popq %R11
	pushq %R11
	movq n, %R11
	movq %R11, PREVn
	popq %R11
	pushq %R11
	movq $3, %R11
	movq %R11, n
	popq %R11
	movq %RBX, t1

	pushq %R11
	call label2
	movq %RAX, t1
	popq %R11
	pushq %R11
	movq PREVn, %R11
	movq %R11, n
	movq PREVm, %R11
	movq %R11, m
	popq %R11

label1:
	pushq %RDI
	pushq %RSI
	pushq %RAX
	movq $str, %RDI
	movq t1, %RSI
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
	movq m, %RSI
	movq $0, %RAX
	pushq %R10
	pushq %R11
	call printf
	popq %R11
	popq %R10
	popq %RAX
	popq %RSI
	popq %RDI


	movq $0, %RAX
	ret
label2:
	pushq %RDI
	pushq %RSI
	pushq %RAX
	movq $str, %RDI
	movq m, %RSI
	movq $0, %RAX
	pushq %R10
	pushq %R11
	call printf
	popq %R11
	popq %R10
	popq %RAX
	popq %RSI
	popq %RDI

	movq $5, %RBX
	movq %RBX, a

	movq $10, %RCX
	movq %RCX, c

	movq %RCX, c
	movq c, %RCX
	addq a, %RCX
	movq %RCX, t1

	movq %RCX, t1
	movq t1, %RCX
	movq %RCX, d

	pushq %RBP
	pushq %RDI
	pushq %RSI
	movq $scan_str, %RDI
	movq $b, %RSI
	call scanf
	popq %RSI
	popq %RDI
	popq %RBP
	movq b, %RSI

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

	pushq %RDI
	pushq %RSI
	pushq %RAX
	movq $str, %RDI
	movq m, %RSI
	movq $0, %RAX
	pushq %R10
	pushq %R11
	call printf
	popq %R11
	popq %R10
	popq %RAX
	popq %RSI
	popq %RDI

	movq %RBX, a
	movq %RCX, d
	movq %RSI, b

	movq m, %RAX
	ret
	ret
