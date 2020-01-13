//Implement a method to perform basic string compression using the counts of repeated characters. For example, the string
//aabcccccaaa would become a2b1c5a3. If the "compressed" string would not become smaller than the original string, your
//method should return the original string. You can assume the string has only uppercase and lowercase letters(a-z);
#include <iostream>
#include <string>
#include "compression.h"

int main() {
    std::string str1 = "";
    do {
        std::cout << "Enter a word(type $ to exit): " << std::endl;
        std::cin >> str1;
        std::cout << "String Compression of: " << str1 << " is: " << compress(str1) << '\n';
    }
    while(str1 != "$");
    return 0;
}
