//
//  main.cpp
//  6.34(Guess-the-Number_Game)
//
//  Created by Sabuhi Ibrahimov on 27.01.21.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
int guessNumber(){
    srand(time(0));
    return rand() % 1000 + 1;
}
int main() {
    int guess = 0;
    std::string flag = "y";
    
    std::cout << "I have a number between 1 and 1000. \nCan you guess my number?";
    while (flag == "y"){
        int number = guessNumber();
        std::cout << "\nPlease type your first guess: ";
        std::cin >> guess;
        
        while( number != guess ){
            if(number < guess)
                std::cout << "\nToo high. Try again: ";
            
            else
                std::cout << "\nToo low. Try again: ";
            std::cin >> guess;
        }
            
        
        std::cout << "\nExcellent! You guessed the number!\nWould you like to play again (y or n)?: ";
        std::cin >> flag;
    }
}
