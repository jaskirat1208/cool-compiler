.data
	t1:	.quad 0
	m:	.quad 3
	n:	.quad 3
	d:	.quad 0
	c:	.quad 0
	a:	.quad 0
	b:	.quad 0
	str:	.string "%d\n"
	scan_str:	.string "%d"
.text
.globl main
main:
label0:
	pushq m
	pushq %R11
	movq $4, %R11
	movq %R11, m
	popq %R11

	call label2
	popq m

label1:

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

	movq %RBX, m
	movq %RCX, a
	movq %RSI, d
	movq %RDI, b

	ret
	ret
