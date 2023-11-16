section .data
    hello_msg db "Hello, Holberton", 0
    format db "%s", 0

section .text
    extern printf
    global main

main:
    mov rdi, format ; Format string
    mov rsi, hello_msg ; Message string
    call printf     ; Call printf

    ; Exit the program
    mov eax, 0      ; System call number for exit
    xor edi, edi    ; Exit code 0
    syscall
