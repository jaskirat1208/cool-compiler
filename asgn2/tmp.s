.data
	arr: 	.quad 3
			.quad 5
			.quad 45
			.quad 79
			.quad 74
	brr: 	.quad 45
	str:	.string "%d\n"
	scan_str:	.string "%d"
.text
.globl main
main:
label0:
	movq $arr, %rax
	add $32, %rax 
	movq %rax,%rdx 
	ret
