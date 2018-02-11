.data
	b:	.quad 0
	a:	.quad 0
	str:	.string "%d\n"
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
	movq $0, %RDX
	idivq %RCX
	movq %RDX, %RCX
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

	ret
	ret
