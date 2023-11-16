section .data
    hello_msg db "Hello, Holberton", 0
    format db "%s", 0

section .text
    extern printf
    global main

main:
    push rdi        ; Preserve registers before calling printf
    mov rdi, format ; Format string
    mov rsi, hello_msg ; Message string
    call printf     ; Call printf
    pop rdi         ; Restore registers

    ; Exit the program
    mov eax, 0      ; System call number for exit
    xor edi, edi    ; Exit code 0
    syscall
