//
//#include <stdio.h>
//
//// Function to swap two integers using assembly code
//void __stdcall swap(int* x, int* y)
//{
//    __asm
//    {
//        mov eax, x
//        mov ebx, y
//        push dword ptr[eax]
//        push dword ptr[ebx]
//        pop dword ptr[eax]
//        pop dword ptr[ebx]
//    }
//}
//
//int main()
//{
//    int x = 10, y = 5;
//
//    // Call the swap function
//    swap(&x, &y);
//
//    // Print the swapped values
//    printf("After Swap X : %d and Y : %d", x, y);
//
//    return 0;
//}