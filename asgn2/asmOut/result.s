.data
	t3:	.quad 0
	t2:	.quad 0
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
	movq $arr, %RBX
	add $16, %RBX
	push (%RBX)
	pop t2
	movq $1, %RCX
	movq %RCX, b

	movq %RCX, b
	movq $arr, %RCX
	add $8, %RCX
	push b
	pop (%RCX)
	movq $arr, %RSI
	add $8, %RSI
	push (%RSI)
	pop t4
	movq $5, %RDI
	movq %RDI, t3

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

	pushq %RDI
	pushq %RSI
	pushq %RAX
	movq $str, %RDI
	movq t4, %RSI
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
