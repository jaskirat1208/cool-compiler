.data
	fvar:	.quad 0
	j:	.quad 0
	sum:	.quad 0
	i:	.quad 0
	str:	.string "%d\n"
	scan_str:	.string "%d"
.text
.globl main
main:
label0:
	movq $1, %RBX
	movq %RBX, j

	movq $0, %RCX
	movq %RCX, sum

	movq $0, %RSI
	movq %RSI, i

	movq $1, %RBX
	movq %RBX, j

	movq %RBX, j
	movq %RCX, sum
	movq %RSI, i

	jmp label5

label1:
	pushq %RAX
	pushq %RDX
	movq j, %RAX
	movq $10, %RBX
	movq $0, %RDX
	idivq %RBX
	movq %RDX, %RBX
	movq %RBX, fvar
	popq %RDX
	popq %RAX

	cmp $0, %RBX
	movq %RBX, fvar

	je label3

label2:
	movq sum, %RBX
	addq i, %RBX
	movq %RBX, sum

	movq %RBX, sum

	jmp label4

label3:
	pushq %RDI
	pushq %RSI
	pushq %RAX
	movq $str, %RDI
	movq j, %RSI
	movq $0, %RAX
	pushq %R10
	pushq %R11
	call printf
	popq %R11
	popq %R10
	popq %RAX
	popq %RSI
	popq %RDI


	jmp label4

label4:
	movq i, %RBX
	addq $1, %RBX
	movq %RBX, i

	movq %RBX, i
	pushq %RAX
	pushq %RDX
	movq i, %RAX
	movq $2, %RBX
	imulq %RBX
	movq %RAX, %RBX
	movq %RBX, j
	popq %RDX
	popq %RAX

	movq %RBX, j

	jmp label5

label5:
	movq i, %RBX
	cmp $99, %RBX
	movq %RBX, i

	jle label1

label6:

	ret
	ret
