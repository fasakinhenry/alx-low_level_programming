extern printf

section .text
global main

main:
    push rbp               ; Preserve the value of rbp register

    mov rdi, fmt           ; Load the format string address into rdi
    mov rsi, msg           ; Load the message address into rsi
    mov rax, 0             ; Set rax to 0 (for printf return value of characters printed)
    call printf            ; Call the printf function

    pop rbp                ; Restore the original value of rbp

    mov rax, 60            ; syscall: exit
    xor rdi, rdi           ; status: 0
    syscall

section .data
msg: db "Hello, Holberton", 0
fmt: db "%s", 10, 0       ; The format string with "%s" for string and '\n' (10) for newline
