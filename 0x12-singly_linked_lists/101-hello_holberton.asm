global    main
extern    printf

section .data
    message db 'Hello, Holberton\n', 0

section .text
main:
    mov   edi, message
    xor   eax, eax
    call  printf
    mov   eax, 0
    ret
