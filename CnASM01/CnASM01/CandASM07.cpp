//
//#include <stdio.h>
//
//int main() {
//    
//    int a, b, c, d;
//
//    int x = 10, y = 5;
//
//    //a = x + y;
//    //b = x - y;
//    //c = x * y;
//    //d = x / y;
//
//    __asm {
//
//        mov   eax, dword ptr[x]
//
//        add   eax, dword ptr[y]
//        mov   dword ptr[a], eax
//
//        sub   eax, dword ptr[y]
//        mov   dword ptr[b], eax
//
//        imul  eax, dword ptr[y]
//        mov         dword ptr[c], eax
//
//        cdq
//        idiv  dword ptr[y]
//        mov   dword ptr[d], eax
//
//    }
//
//    printf("Add :: %d Sub :: %d Mul :: %d Div :: %d", a, b, c, d);
//        
//    return 0;
//}
