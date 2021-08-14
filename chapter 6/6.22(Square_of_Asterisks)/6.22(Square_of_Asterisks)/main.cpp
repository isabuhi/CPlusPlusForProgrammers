//
//  main.cpp
//  6.22(Square_of_Asterisks)
//
//  Created by Sabuhi Ibrahimov on 23.01.21.
//

#include <iostream>
void squareAsteriks(int side) {
    for(unsigned int i = 1; i <= side; ++i){
        for(unsigned int j = 1; j <= side; ++j){
            std::cout << "*";
        }
        std::cout << "\n";
    }
    std::cout << std::endl;
}
int main() {
    int side = 0;
    std::cout << "Enter side: ";
    std::cin >> side;
    
    while (side != EOF) {
        squareAsteriks(side);
        std::cout << "Enter side: ";
        std::cin >> side;
    }
}
