//
//  main.cpp
//  8.12(Simulation:_The_Tortoise_and_the_Hare)
//
//  Created by Sabuhi Ibrahimov on 27.05.21.
//

#include <iostream>
#include <random>
#include <ctime>
#include <iomanip>

const int RACE_END = 70;

std::default_random_engine engine(static_cast<unsigned int>(time(0)));
std::uniform_int_distribution<unsigned int> percentage(1,10);


void moveTortoise(int * const);
void moveHare(int * const);
void printingLines(const int * const, const int * const);

int main() {
    int tortoise = 1;
    int hare = 1;
    int timer = 0;
    
    std::cout << "BANG !!!!!\nAND THEY'RE OFF !!!!!\n";
    
    while (tortoise != RACE_END && hare != RACE_END) {
        moveTortoise(&tortoise);
        moveHare(&hare);
        printingLines(&tortoise, &hare);
        ++timer;
    }
    if (tortoise >= hare)
        std::cout << "\nTORTOISE WINS!!! YAY!!!\n";
    else
        std::cout << "Hare wins. Yuch.\n";
    
    std::cout << "Time elapsed = " << timer << " seconds" << std::endl;
}


void moveTortoise(int * const turtlePtr){
    int x = percentage(engine);
    if (x >= 1 && x <= 5)
        *turtlePtr += 3;
    else if (x == 6 || x == 7)
        *turtlePtr -= 6;
    else
        ++*turtlePtr;
    if(*turtlePtr < 1)
        *turtlePtr = 1;
    else if(*turtlePtr > RACE_END)
        *turtlePtr = RACE_END;
}

void moveHare(int * const rabbitPtr){
    int x = percentage(engine);
    if (x == 3 || x == 4)
        *rabbitPtr += 9;
    else if (x == 5)
        *rabbitPtr -= 12;
    else if (x >= 6 && x <= 8)
        ++*rabbitPtr;
    else if (x >= 9)
        *rabbitPtr -= 2;
    if(*rabbitPtr < 1)
        *rabbitPtr = 1;
    else if(*rabbitPtr > RACE_END)
        *rabbitPtr = RACE_END;
}

void printingLines(const int * const snapperPtr, const int * const bunnyPtr){
    if (*snapperPtr == *bunnyPtr)
        std::cout << std::setw(*snapperPtr) << "OUCH!!!";
    else if (*snapperPtr < *bunnyPtr){
        std::cout << std::setw(*snapperPtr) << "T";
        std::cout << std::setw(*bunnyPtr - *snapperPtr) << "H";
    }
    else{
        std::cout << std::setw(*bunnyPtr) << "H";
        std::cout << std::setw(*snapperPtr - *bunnyPtr) << "T";
    }
    std::cout << std::endl;
}
