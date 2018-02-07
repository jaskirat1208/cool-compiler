.text
.globl main
main:
	pushq %rbp 						#rbp: 64 bit register
	movq %rsp, %rbp					#
	movl $21, %eax					# eax stores the return value to be captured by echo $?
#	call _puts						#puts function of c

	leave
	ret
