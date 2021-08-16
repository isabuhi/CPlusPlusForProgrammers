//
//  main.cpp
//  6.23(Square_of_Any_Character)
//
//  Created by Sabuhi Ibrahimov on 23.01.21.
//

#include <iostream>

void squareAsteriks(int side, char fillCharacter) {
    for(unsigned int i = 1; i <= side; ++i){
        for(unsigned int j = 1; j <= side; ++j){
            std::cout << fillCharacter;
        }
        std::cout << "\n";
    }
    std::cout << std::endl;
}
int main() {
    int side = 0;
    char fillCharacter = 'f';
    std::cout << "Enter side: ";
    std::cin >> side;
    std::cout << "Enter char: ";
    std::cin >> fillCharacter;
    
    while (side != EOF) {
        squareAsteriks(side, fillCharacter);
        std::cout << "Enter side: ";
        std::cin >> side;
        std::cout << "Enter char: ";
        std::cin >> fillCharacter;
    }
}
