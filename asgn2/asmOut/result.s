.data
	a:	.quad 0
	b:	.quad 0
	str:	.string "%d\n"
	scan_str:	.string "%d"
.text
.globl main
main:
label0:
	movq $2, %RBX
	movq %RBX, a

label1:
	movq $7, %RCX
	movq %RCX, b

	movq $45, %RBX
	addq $53, %RBX
	movq %RBX, a

	cmp $50, %RBX
	movq %RBX, a
	movq %RCX, b

	jle label1

label2:

	call label4

label3:

	ret
label4:
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


	ret
	ret
