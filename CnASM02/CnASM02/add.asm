
.model flat, STDCALL

.code
add_func PROC C

    ; Save the base pointer
    push ebp
    mov ebp, esp

    ; Load the length of the array into ECX
    mov ecx, [ebp+8]

    ; Load the pointer to the array into ESI
    mov esi, [ebp+12]

    ; Initialize EAX to 0
    xor eax, eax

loop_label:
    
    ; Add the current element to EAX
    add eax, [esi]
    
    ; Increment the pointer to the next element
    add esi, 4
    
    ; Loop until ECX is 0
    loop loop_label

    ; Restore the base pointer
    pop ebp
    ret

add_func ENDP

END