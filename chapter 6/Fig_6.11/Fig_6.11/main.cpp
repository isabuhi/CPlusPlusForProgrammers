//
//  main.cpp
//  Fig_6.11
//
//  Created by Ibrahimov Sabuhi on 11/2/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
unsigned int rollDice();


int main() {
    unsigned int seed = static_cast<unsigned int>(time(0));
    srand(seed);
    
    enum Status {WON, LOST, CONTINUE};
    unsigned int myPoint = 0;
    unsigned int sumDice = 0;
    Status gameStatus = WON;
    sumDice = rollDice();
    
    switch (sumDice) {
        case 7:
        case 11:
            gameStatus = WON;
            break;
        
        case 2:
        case 3:
        case 12:
            gameStatus = LOST;
            break;
            
        case 4:
        case 5:
        case 6:
        case 8:
        case 9:
        case 10:
            gameStatus = CONTINUE;
            myPoint = sumDice;
            cout << "Player point is " << myPoint << endl;
        default:
            break;
    }
    
    while (gameStatus == CONTINUE){
        sumDice = rollDice();
        if (myPoint == sumDice)
            gameStatus = WON;
        else
            if (sumDice == 7)
            gameStatus = LOST;
    }
    
    if (gameStatus == WON)
        cout << "Player wins" << endl;
    else
        cout << "Player loses" << endl;
}



unsigned int rollDice() {
    unsigned int sum = 0;
    unsigned int rollDice1 = 0;
    rollDice1 = 1 + rand() % 6;
    
    unsigned int rollDice2 = 0;
    rollDice2 = 1 + rand() % 6;
     
    sum = rollDice1 + rollDice2;
     
    cout << "Player rolled " << rollDice1 << " + " << rollDice2 << " = " << sum << endl;
    
    return sum;
}
