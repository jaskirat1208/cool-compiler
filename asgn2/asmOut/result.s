.data
	t3:	.quad 0
	arr: 
		.quad	7
		.quad	2
		.quad	4
		.quad	5
		.quad	8
	t2:	.quad 0
	str:	.string "%d\n"
	scan_str:	.string "%d"
.text
.globl main
main:
label0:
	movq $arr, %RBX
	add $16, %RBX
	movq $5, %RCX
	movq %RCX, t3

	pushq %RDI
	pushq %RSI
	pushq %RAX
	movq $str, %RDI
	movq t3, %RSI
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
	movq t2, %RSI
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
