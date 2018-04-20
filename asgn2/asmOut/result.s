.data
	d:	.quad 0
	PREVm:	.quad 0
	n:	.quad 0
	m:	.quad 0
	PREVn:	.quad 0
	t1:	.quad 0
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

	pushq %R11
	movq m, %R11
	movq %R11, PREVm
	popq %R11
	pushq %R11
	movq $4, %RAX
	movq %RAX, m
popq %R11
	pushq %R11
	movq n, %R11
	movq %R11, PREVn
	popq %R11
	pushq %R11
	movq $3, %RAX
	movq %RAX, n
popq %R11
	movq %RBX, m
	movq %RCX, n

	pushq %rax
	call label2
	movq %RAX, t1
	popq %rax
	pushq %RAX
	movq PREVn, %RAX
	movq %RAX, n
	movq PREVm, %RAX
	movq %RAX, m
	popq %RAX

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
	movq $4, %RBX
	movq %RBX, m

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

	movq $5, %RCX
	movq %RCX, a

	movq $10, %RSI
	movq %RSI, c

	movq %RSI, c
	movq c, %RSI
	addq a, %RSI
	movq %RSI, t1

	movq %RSI, t1
	movq t1, %RSI
	movq %RSI, d

	pushq %RBP
	pushq %RDI
	pushq %RSI
	movq $scan_str, %RDI
	movq $b, %RSI
	call scanf
	popq %RSI
	popq %RDI
	popq %RBP
	movq b, %RDI

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

	movq %RBX, m
	movq %RCX, a
	movq %RSI, d
	movq %RDI, b

	movq $1, %RAX
	ret
	ret
