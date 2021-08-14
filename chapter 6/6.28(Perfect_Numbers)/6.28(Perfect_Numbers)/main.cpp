//
//  main.cpp
//  6.28(Perfect_Numbers)
//
//  Created by Sabuhi Ibrahimov on 26.01.21.
//

#include <iostream>


bool isPerfect(int number){
    int i = 1;
    int sum = 0;
    while(number / 2 >= i){
        if (number % i == 0)
            sum += i;
        ++i;
    }
    return number == sum;
}



int main() {
    for(unsigned int i = 1; i <= 10000; ++i){
        if (isPerfect(i))
        std::cout << i << " ";
    
    }
    
    std::cout << std::endl;
}
