
.model flat, STDCALL

.code

mem_free PROC C

    CLD                ; clear direction flags

    mov edi, [esp+4]   ; Load array pointer into EDI
    mov ecx, [esp+8]   ; Load array length into ECX

    xor al, al         ; Set AL to 0 (null value)

    rep stosb          ; Fill array with null values

    ret

mem_free ENDP

END
