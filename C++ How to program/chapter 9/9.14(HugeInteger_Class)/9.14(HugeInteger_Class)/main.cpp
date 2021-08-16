//
//  main.cpp
//  9.14(HugeInteger_Class)
//
//  Created by Sabuhi Ibrahimov on 07.07.21.
//

#include <iostream>
#include <array>
#include <iomanip>
#include "HugeInteger.hpp"



int main() {
    
    
    int b[5] = {1,2,3,4,5};
    
    int c = (&b)[0] - b;
    std::cout << c << std::endl;
    int f[10] = {1,2,3,4,5};
     c = (&f)[1] - f;
    std::cout << c << std::endl;
    HugeInteger a(b,c);
    a.output();
}
