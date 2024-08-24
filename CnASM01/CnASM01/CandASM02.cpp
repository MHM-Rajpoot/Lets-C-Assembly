//
//#include <iostream>
//
//int main() {
//
//    int a = 5; int b = 3;
//    int result = 0;
//
//    __asm {
//        mov	eax, a;     load a
//        mov	ebx, b;     load b
//        xor	ecx, ecx;   clear ecx
//
//        loop_start :
//            test	ebx, ebx;   check ebx
//            jz	loop_end;   if zero, end loop
//            add	ecx, eax;   accumulate result
//            dec	ebx;        decrement ebx
//            jmp	loop_start; repeat loop
//
//        loop_end :
//			  mov	result, ecx;    store result
//    }
//
//    std::cout << a << " * " << b << " = " << result << std::endl;
//
//    return 0;
//}
