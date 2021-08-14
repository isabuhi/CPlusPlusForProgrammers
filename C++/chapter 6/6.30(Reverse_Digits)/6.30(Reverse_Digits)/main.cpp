//
//  main.cpp
//  6.30(Reverse_Digits)
//
//  Created by Sabuhi Ibrahimov on 26.01.21.
//

#include <iostream>
int reverse(int number){
    int result = 0;
    while(number != 0){
        result = result * 10 + number % 10;
        number = number / 10;
    }
    return result;
}
int main() {
    std::cout << reverse(7686008);
    std::cout << std::endl;
}
