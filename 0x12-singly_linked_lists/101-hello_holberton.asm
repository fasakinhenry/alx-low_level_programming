section .data
    hello_msg db "Hello, Holberton\n", 0
    format db "%s\n", 0  ; Adds "\n" in the format string

section .text
    global main
    extern printf

main:
    push rdi                  ; Preserve the value of rdi register
    lea rdi, [hello_msg]      ; Load the address of the hello_msg string into rdi
    lea rsi, [format]         ; Load the address of the format string into rsi
    call printf              ; Call the printf function
    pop rdi                   ; Restore the original value of rdi
    ret
