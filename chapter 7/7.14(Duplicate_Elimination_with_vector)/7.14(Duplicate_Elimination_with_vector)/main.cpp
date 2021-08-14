//
//  main.cpp
//  7.14(Duplicate_Elimination_with_vector)
//
//  Created by Sabuhi Ibrahimov on 08.03.21.
//

#include <iostream>
#include <vector>

int main() {
    std::vector<int> storage(0);
    int currentNumber = 0;
    bool flag = true;
    for(unsigned int i = 0; i < 5; ++i){
        std::cout << "Enter number " << i + 1 << ": ";
        std::cin >> currentNumber;
        if(storage.size() > 0){
            for(int &number: storage){
                if(number == currentNumber){
                    flag = false;
                    break;
                }
            }
        }
        if(flag){
            storage.push_back(currentNumber);
        }
        flag = true;
    }
    for(int &number: storage){
        std::cout << number << " ";
    }
}
