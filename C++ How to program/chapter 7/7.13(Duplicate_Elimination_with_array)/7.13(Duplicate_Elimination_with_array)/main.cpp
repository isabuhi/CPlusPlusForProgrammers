//
//  main.cpp
//  7.13(Duplicate_Elimination_with_array)
//
//  Created by Sabuhi Ibrahimov on 07.03.21.
//

#include <iostream>
#include <array>

int main() {
    const size_t size = 5;
    std::array <int, size> storage;
    int currentNumber = 0;
    for(size_t i = 0; i < storage.size(); ++i){
        
        std::cout << "Enter number " << i + 1 << ": ";
        std::cin >> currentNumber;
        for(int &number: storage){
            if(number == currentNumber){
                currentNumber = 0;
                break;
            }
        }
        storage[i] = currentNumber;
    }
    for(int &number: storage){
        if(number != 0)
        std::cout << number << " ";
    }
}
