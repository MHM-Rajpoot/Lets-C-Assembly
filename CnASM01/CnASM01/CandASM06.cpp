//
//#include <stdio.h>
//
//int main() {
//    
//    int a = -11, b = -3;
//    int c, d;
//
//    //c = a / b;
//    //d = a % b;
//
//    __asm {
//          mov   eax, dword ptr[a]
//          cdq
//          idiv  dword ptr[b]
//          mov   dword ptr[c], eax
//          mov   dword ptr[d], edx
//    }
//
//    printf("Quotient :: %d \t Remainder :: %d", c, d);
//
//    return 0;
//}
