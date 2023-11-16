section .data
    hello_msg db "Hello, Holberton", 0
    format db "%s", 0

section .text
    extern printf
    global main

main:
    push rdi        ; Preserve registers before calling printf
    mov rdi, format ; Format string
    mov
