//
//  main.cpp
//  6.35(Guess-the-Number_Game_Modification)
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
        int counter = 0;
        int number = guessNumber();
        std::cout << "\nPlease type your first guess: ";
        std::cin >> guess;
        
        while( number != guess ){
            
            if(number < guess)
                std::cout << "\nToo high. Try again: ";
            
            else
                std::cout << "\nToo low. Try again: ";
            std::cin >> guess;
            ++counter;
        }
            
        
        std::cout << "\nExcellent! You guessed the number!";
        if (counter < 10)
                    std::cout << "\nEither you know the secret or you got lucky!\n";
                else if (counter == 10)
                    std::cout << "\nAhah! You know the secret!\n";
                else
                    std::cout << "\nYou should be able to do better!\n";
        std::cout << "\nWould you like to play again (y or n)?: ";
        std::cin >> flag;
    }
}
