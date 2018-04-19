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
	movq $3, %RBX
	movq %RBX, a

	movq $7787, %RCX
	movq %RCX, b

	movq %RCX, b
	movq $arr, %RCX
	push %RAX
	movq a, %RAX
	shl $3, %RAX
	add %RAX, %RCX
	push b
	pop (%RCX)
	pop %RAX
	movq $arr, %RSI
	add $24, %RSI
	push (%RSI)
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
	movq %RCX, arr
	movq %RSI, t45

	ret
	ret
