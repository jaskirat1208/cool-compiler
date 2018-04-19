.data
	t45:	.quad 0
	barr: 
		.quad	3
		.quad	4
		.quad	5
	b:	.quad 0
	arr: 
		.quad	0
		.quad	0
		.quad	0
		.quad	0
		.quad	0
	a:	.quad 0
	str:	.string "%d\n"
	scan_str:	.string "%d"
.text
.globl main
main:
label0:

	call label2

label1:

	ret
label2:
	movq $1, %RBX
	movq %RBX, a

	movq $7787, %RCX
	movq %RCX, b

	movq $arr, %RSI
	add $16, %RSI
	push 98
	pop (%RSI)
	movq $arr, %RDI
	add $16, %RDI
	push (%RDI)
	pop t45
	pushq %RDI
	pushq %RSI
	pushq %RAX
	movq $str, %RDI
	movq t45, %RSI
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

	movq %RBX, a
	movq %RCX, b
	movq %RSI, arr
	movq %RDI, t45

	ret
	ret
