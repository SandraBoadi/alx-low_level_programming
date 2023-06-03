section .data
    fmt db '%s', 10, 0    ; format string
    hello db 'Hello,', 0  ; string to print
    holb db 'Holberton', 0 ; string to print

section .text
    extern printf        ; declare printf function from libc

global _start
_start:
    mov rax, 0           ; return value used for printf
    mov rdi, fmt         ; address of format string
    mov rsi, hello       ; address of string to print
    xor rdx, rdx         ; clear rdx (optional if using 64-bit mode)
    call printf          ; call printf

    mov rax, 0           ; return value used for printf
    mov rdi, fmt         ; address of format string
    mov rsi, holb        ; address of string to print
    xor rdx, rdx         ; clear rdx (optional if using 64-bit mode)
    call printf          ; call printf

    mov rax, 60          ; system call number for exit
    xor rdi, rdi         ; return value used for exit
    syscall              ; call the kernel

