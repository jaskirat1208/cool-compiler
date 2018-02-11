.data
	c:	.quad 0
	b:	.quad 0
	a:	.quad 0
	str:	.string "%d\n"
	scan_str:	.string "%d"
.text
.globl main
main:
label0:
	movq $5, %RAX
	movq %RAX, a

	movq $21, %RBX
	movq %RBX, b

	movq %RAX, %RCX
	pushq %RAX
	pushq %RDX
	movq a, %RAX
	movq b, %RCX
	imulq %RCX
	movq %RAX, %RCX
	movq %RCX, a
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

	pushq %RBP
	pushq %RDI
	pushq %RSI
	movq $scan_str, %RDI
	movq $c, %RSI
	call scanf
	popq %RSI
	popq %RDI
	popq %RBP

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

	movq a, %RDX
	addq c, %RDX
	movq %RDX, c

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
