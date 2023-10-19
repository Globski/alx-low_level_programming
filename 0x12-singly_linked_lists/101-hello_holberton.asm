; Description: 64-bit assembly program that prints
; Hello, Holberton followed by a new line.

extern printf, exit

section .text
global main

main:
push rbp
mov rdi, hello
call printf
add rsp, 8
mov rdi, 0
call exit

section .data
hello db "Hello, Holberton", 10, 0








