; nasm -f bin bootloader.asm -o boot.bin
; qemu-system-x86_64 ./boot.bin

[bits 16]
[org 0x7c00]

boot:
    mov si, hello_world
    mov ah, 0x0e
    call print
    hlt

print:
    lodsb
    cmp al, 0
    je .end
    int 0x10
    jmp print
.end:
    ret

hello_world:
    db "Happy Hactober2022 :)", 0


times 510-($-$$) db 0
dw 0xaa55
