.data
	t5:	.quad 0
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
	push %RAX
	movq a, %RAX
	shl $3, %RAX
	add %RAX, %RSI
	push (%RSI)
	pop (t5)
	pop %RAX
	pushq %RDI
	pushq %RSI
	pushq %RAX
	movq $str, %RDI
	movq t5, %RSI
	movq $0, %RAX
	pushq %R10
	pushq %R11
	call printf
	popq %R11
	popq %R10
	popq %RAX
	popq %RSI
	popq %RDI

	movq $arr, %RCX
	add $0, %RCX
	push $5
	pop (%RCX)
	movq $arr, %RSI
	add $0, %RSI
	push (%RSI)
	pop t5
	pushq %RDI
	pushq %RSI
	pushq %RAX
	movq $str, %RDI
	movq t5, %RSI
	movq $0, %RAX
	pushq %R10
	pushq %R11
	call printf
	popq %R11
	popq %R10
	popq %RAX
	popq %RSI
	popq %RDI

	movq $arr, %RCX
	push %RAX
	movq a, %RAX
	shl $3, %RAX
	add %RAX, %RCX
	push $7
	pop (%RCX)
	pop %RAX
	movq $arr, %RSI
	push %RAX
	movq a, %RAX
	shl $3, %RAX
	add %RAX, %RSI
	push (%RSI)
	pop (t5)
	pop %RAX
	pushq %RDI
	pushq %RSI
	pushq %RAX
	movq $str, %RDI
	movq t5, %RSI
	movq $0, %RAX
	pushq %R10
	pushq %R11
	call printf
	popq %R11
	popq %R10
	popq %RAX
	popq %RSI
	popq %RDI

	movq $arr, %RCX
	add $32, %RCX
	push a
	pop (%RCX)
	movq $arr, %RSI
	add $32, %RSI
	push (%RSI)
	pop t5
	pushq %RDI
	pushq %RSI
	pushq %RAX
	movq $str, %RDI
	movq t5, %RSI
	movq $0, %RAX
	pushq %R10
	pushq %R11
	call printf
	popq %R11
	popq %R10
	popq %RAX
	popq %RSI
	popq %RDI

	movq $arr, %RSI
	push %RAX
	movq a, %RAX
	shl $3, %RAX
	add %RAX, %RSI
	push (%RSI)
	pop (t5)
	pop %RAX
	pushq %RDI
	pushq %RSI
	pushq %RAX
	movq $str, %RDI
	movq t5, %RSI
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
	movq %RSI, t5

	ret
	ret
