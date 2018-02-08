# Scans a value and prints it on the console
.data
x:
        .quad 0
y:
        .quad 10
str:
        .string "value: %d\n"
scanf_str:
        .string "%d"

.text
.globl main
main:
        PUSH %rbp
        MOVQ $scanf_str, %rdi
        MOVQ $y, %rsi
        CALL  scanf

        MOVQ  $str, %rdi  # first argument in %rdi: string pointer
        MOVQ  (y),    %rsi  # second argument in %rsi: value of y
        MOVQ  $0,   %rax  # there are zero floating point args

	PUSHQ %r10        # save the caller-saved registers
	PUSHQ %r11        

        CALL  printf      # invoke printf

	POPQ %r11         # restore the caller-saved registers
	POPQ %r10         

        MOVQ  %rax, x     # save the result in x
        POP %rbp
        RET               # return from main function