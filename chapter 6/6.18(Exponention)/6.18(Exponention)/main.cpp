//
//  main.cpp
//  6.18(Exponention)
//
//  Created by Sabuhi Ibrahimov on 19.01.21.
//

#include <iostream>
int integerPower(int, unsigned int);

int main() {
    std::cout << integerPower(2, 4) << std::endl;
}

int integerPower(int base, unsigned int exponent) {
    if (exponent == 0)
        return 1;
    else{
        int finalBase = 1;
        for (unsigned int i = 0; i < exponent; ++i){
            finalBase = base * finalBase;
        }
        return finalBase;
    }
}
