.data
	a:	.quad 0
	str:	.string "%d\n"
	scan_str:	.string "%d"
.text
.globl main
main:
label0:

	call label1

label1:
	movq $5, %RBX
	movq %RBX, a

	movq %RBX, a

	ret
	ret
