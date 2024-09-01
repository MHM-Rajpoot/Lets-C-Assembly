//
//#include <iostream>
//#include <string>
//
//#ifdef __cplusplus
//extern "C" {
//#endif
//
//    // Declare the assembly function
//    extern int printf_func(const char* String, ...);
//
//    // Declare the assembly function
//    extern char* addB_func(const char* String1, const char* String2);
//
//#ifdef __cplusplus
//}
//#endif
//
//class BigInteger {
//private:
//    std::string num;
//
//public:
//
//    // Constructor to initialize the BigInteger
//    BigInteger(const std::string& val) : num(val) {}
//
//    std::string getNum() { return num; }
//    const char* getNumC() { return num.c_str(); }
//
//    // Member function to add two BigIntegers
//    BigInteger add(const BigInteger& other) {
//
//        std::string result;
//
//        int carry = 0;
//        int i = num.size() - 1, j = other.num.size() - 1;
//
//        while (i >= 0 || j >= 0 || carry) {
//
//            int sum = carry;
//
//            if (i >= 0) sum += num[i--] - '0';
//            if (j >= 0) sum += other.num[j--] - '0';
//
//            result.push_back('0' + sum % 10);
//            carry = sum / 10;
//        }
//
//        // Reverse the result string
//        std::reverse(result.begin(), result.end());
//
//        return BigInteger(result);
//    }
//    
//    BigInteger addASM(BigInteger& other) {
//
//        std::string a = this->getNum();
//        std::string b = other.getNum();
//
//        // Equalize the length of both numbers by adding leading zeros
//        int maxLen = std::max(a.length(), b.length());
//        a = std::string(maxLen - a.length(), '0') + a;
//        b = std::string(maxLen - b.length(), '0') + b;
//
//        // Call the addB_func function
//        char* result = addB_func(a.c_str(), b.c_str());
//
//        // Convert result to std::string and reverse it
//        std::string resultStr(result);
//        std::reverse(resultStr.begin(), resultStr.end());
//        resultStr.erase(0, resultStr.find_first_not_of('0'));
//
//        // Create a new BigInteger object with the result
//        return BigInteger(resultStr);
//    }
//
//};
//
//int main() {
//
//    BigInteger num1("123");
//    BigInteger num2("92437");
//    
//    const char* logo = "\n\tPrintfed from Custome Printf \n\n";
//
//    printf_func("%s \tNum1 :: %s Num2 :: %s \n",logo,num1.getNumC(), num2.getNumC());
//
//    BigInteger sum = num1.add(num2);
//    printf_func("\n\tSum: %s \n", sum.getNumC());
//
//    BigInteger sumASM = num1.addASM(num2);
//    printf_func("\n\tASM SUM :: %s", sumASM.getNumC());
//
//    printf_func("\n   ....................................   \n");
//
//    return 0;
//}