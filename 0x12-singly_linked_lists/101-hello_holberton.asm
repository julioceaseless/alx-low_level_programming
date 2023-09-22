section .data
	hello db "Hello, Holberton",10,0

section .text
	global main

extern printf

main:
    ; Call printf with the format string and address of the hello string
    push rdi
    lea rdi, [rel hello]
    call printf
    pop rdi

    ; Exit the program
    mov rax, 0
    xor rdi, rdi
    syscall
