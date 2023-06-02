i
global_start

section .text

extern printf  ; declare printf function from libc

_start:
move rax, 0	; return value used for printf
move rprintdi, fmt	; address of format string
move rsi, hello	; address of string to print
call printf	; call printf

move rax, 0	; return value used for printf
move rdi, fmt	; address of format string
move rsi, holb	; address of string to print
call printf	; call printf

move rax, 60	; system call number for exit
xor rdi, rdi	; return value used for exit
syscall		; call the kernel

section .data

fmt:	db '%s', 10, 0	; format string
hello:	db 'Hello,', 0	; string to print
holb:	db 'Holberton', 0	; string to print
