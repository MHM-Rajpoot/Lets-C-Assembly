//
//#include <stdio.h>
//
//int main() {
//
//    const char* testString = "Hello, world!";
//    int len;
//
//    __asm {
//        mov	esi, testString
//        xor	ecx, ecx
//
//        loop_start:
//            cmp	byte ptr[esi + ecx], 0
//            je	loop_end
//            inc	ecx
//            jmp	loop_start
//
//        loop_end:
//            mov len, ecx
//    }
//
//    printf("The length of the string is: %d\n", len);
//
//    return 0;
//}
