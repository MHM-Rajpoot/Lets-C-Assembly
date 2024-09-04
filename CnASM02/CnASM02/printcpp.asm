
Include irvine32.inc

.code
printcpp PROC C

    push ebp
    mov ebp, esp

    xor eax,eax

    add ebp, 8
    
    mov eax, [ebp]
    call WriteHex

    mov al,9
    call WriteChar
    xor eax,eax

    mov eax, [ebp]
    mov ebx, [eax]
    mov eax, ebx
    call WriteInt

    mov al,10
    call WriteChar
    xor eax,eax

    mov eax, [ebp]
    add eax, 4
    call WriteHex

    mov al,9
    call WriteChar
    xor eax,eax

    mov edx, [ebp]
    add edx, 4
    call WriteString

    pop ebp
    ret

printcpp ENDP

END