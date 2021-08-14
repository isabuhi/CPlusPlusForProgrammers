//
//  main.cpp
//  6.36(Recursive_Exponentiation)
//
//  Created by Sabuhi Ibrahimov on 27.01.21.
//

#include <iostream>


int power( int base, int exponent ){
    if (exponent == 1)
        return base;
    return base * power(base, exponent-1);
}


int main() {
    std::cout << power(5, 4) << std::endl;
}
