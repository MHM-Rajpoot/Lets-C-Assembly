
;Include the Irvine library
Include irvine32.inc

;Already Defined in Irvine32.inc
;.model flat, STDCALL 

.code
printf_func PROC C

    ; Save the base pointer
    push ebp
    mov ebp, esp

    ; Load the format string into ESI
    add ebp, 8
    mov esi, [ebp]

print_loop:

    ; Load the byte at ESI into AL
    mov al, [esi]

    ; Check for null terminator
    cmp al, 0
    je print_done

    ; Check for '%'
    cmp al, '%'
    je check_next_char

    ; sys_write for one character
    call WriteChar 

    inc esi            ; move to the next character
    jmp print_loop     ; repeat the loop

check_next_char:

    inc esi            ; move to the next character
    mov al, [esi]
    
    cmp al, 'd'
    je print_int

    cmp al, 's'
    je print_str

    ; unknown format specifier, ignore it
    jmp print_loop

print_int:

    ; load the integer from the stack
    add ebp, 4
    mov eax, [ebp]
    call WriteInt

    ; move to the next character
    inc esi
    jmp print_loop

print_str:

    ; load the integer from the stack
    add ebp, 4
    mov edx, [ebp]
    call WriteString

    ; move to the next character
    inc esi
    jmp print_loop


print_done:

    ; Restore the base pointer
    pop ebp
    ret

printf_func ENDP

END