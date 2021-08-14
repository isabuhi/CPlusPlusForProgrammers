//
//  main.cpp
//  6.24(Separating_Digits)
//
//  Created by Sabuhi Ibrahimov on 24.01.21.
//

#include <iostream>

int main() {
    int c = 0;
    int divisor = 1;
    std::cout << "Enter integer: ";
    std::cin >> c;
    
    for ( divisor; c % divisor != c; divisor*=10){

    }
    divisor /= 10;
    
    
    for ( divisor; divisor != 0; divisor /= 10){
        std::cout << c / divisor << "  ";
        c = c % divisor;
        
    }
    std::cout << std::endl;
    
    
    
}

