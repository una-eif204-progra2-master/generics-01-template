//
// Created by Maikol Guzman on 9/8/20.
//

#include <iostream>

#include <string>

template<typename T>
T max (T a, T b)
{
    // if b < a then yield a else yield b
    return b < a ? a : b;
}

int main()

{
    std::cout << "Welcome to the UNA!" << std::endl;  // display message
    int i = 42;
    std::cout << "max(7,i):      " << ::max(7,i) << "\n";
    double f1 = 3.4; double f2 = -6.7;
    std::cout << "max(f1,f2):    " << ::max(f1,f2) << "\n";
    std::string s1 = "mathematics"; std::string s2 = "math";
    std::cout << "max(s1,s2):    " << ::max(s1,s2) << "\n";
}