.data
	t3:	.quad 0
	t2:	.quad 0
	t4:	.quad 0
	b:	.quad 0
	a:	.quad 0
	str:	.string "%d\n"
	scan_str:	.string "%d"
.text
.globl main
main:
label0:
	movq $0, %RBX
	movq %RBX, b

	movq %RBX, b

	pushq %R11
	call label2
	movq %RAX, t4
	popq %R11
	pushq %R11
	popq %R11

label1:

	movq $0, %RAX
	ret
label2:
	movq $5, %RBX
	movq %RBX, a

	cmp $0, %RBX
	movq %RBX, a

	jl label4

label3:

	jmp label5

label4:
	movq a, %RBX
	subq $1, %RBX
	movq %RBX, t2

	movq %RBX, t2
	movq t2, %RBX
	movq %RBX, a

	movq %RBX, a

	jmp label6

label5:
	movq a, %RBX
	addq $1, %RBX
	movq %RBX, t3

	movq %RBX, t3
	movq t3, %RBX
	movq %RBX, a

label6:
	movq %RBX, a

	movq $0, %RAX
	ret
	ret
