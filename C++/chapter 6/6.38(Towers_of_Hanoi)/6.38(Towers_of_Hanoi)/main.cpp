//
//  main.cpp
//  6.38(Towers_of_Hanoi)
//
//  Created by Sabuhi Ibrahimov on 28.01.21.
//

#include <iostream>

int b = 0;
void towersofHanoi(int number, int s, int d, int a){
    ++b;
    if (number == 1){
        std::cout << s << " - " << d << std::endl;
        return;
    }
    
    towersofHanoi(number - 1, s, a, d);
    std::cout << s << " - " << d << std::endl;

    towersofHanoi(number - 1, a, d, s);
}


int main() {
    towersofHanoi(8, 1, 3, 2);
std::cout << b;
}
