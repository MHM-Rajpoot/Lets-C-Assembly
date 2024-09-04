//
//#include <iostream>
//
//#ifdef __cplusplus
//extern "C" {
//#endif
//
//    extern "C" void printcpp(void* thisPtr);
//
//#ifdef __cplusplus
//}
//#endif
//
//
//class MyClass {
//private:
//    int number;       // First data member
//    char text[20];    // Second data member (char array)
//
//public:
//    // Constructor to initialize data members
//    MyClass(int num, const char* txt) : number(num) {
//        strcpy_s(text, txt); // Copy string to char array
//    }
//
//    // Member function to print the values of data members using 'this' pointer
//    void printData() const {
//        std::cout << "this-> " << this << "\n";
//        std::cout << &number << "\t" << number << "\n";
//        std::cout << &text << "\t" << text << "\n";
//    }
//
//    // Member function to call the assembly routine
//    void callAssembly() {
//        printcpp(this);
//    }
//
//};
//
//int main() {
//
//    MyClass obj(42, "Hello, World!");
//
//    std::cout << "\nCpp :: \n";
//    obj.printData();
//
//    std::cout << "\nAssembly :: \n";
//    obj.callAssembly();
//
//    return 0;
//}