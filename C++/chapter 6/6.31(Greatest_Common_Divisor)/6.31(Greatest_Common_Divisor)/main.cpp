//
//  main.cpp
//  6.31(Greatest_Common_Divisor)
//
//  Created by Sabuhi Ibrahimov on 26.01.21.
//

#include <iostream>


int gcd( int x1, int x2)
{
    int remainder;
    while (x1 % x2 != 0)
    {
        remainder = x1 % x2;
        x1 = x2;
        x2 = remainder;
    }
    return x2;
}

int main() {
    std::cout << gcd(942435354, 948434533);
    std::cout << std::endl;
}
