//
//  main.cpp
//  6.29(Prime_Numbers)
//
//  Created by Sabuhi Ibrahimov on 26.01.21.
//

#include <iostream>
bool primeHalf (int number){
    for(unsigned int i = 2; i <= number / 2; ++i){
        if(number % i == 0)
            return false;
    }
    return true;
}

bool primeRoot (int number){
    for(unsigned int i = 2; i <= sqrt(static_cast<double>(number)); ++i){
        if(number % i == 0)
            return false;
    }
    return true;
}


int main() {
    for(unsigned int i = 1; i <= 100000; ++i){
        if(primeRoot(i)){
            std::cout << i;
            std::cout << " ";
        }
    }
    std::cout << std::endl;
}
