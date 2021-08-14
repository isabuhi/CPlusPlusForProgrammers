//
//  main.cpp
//  6.17(Random_numbers)
//
//  Created by Sabuhi Ibrahimov on 19.01.21.
//

#include <iostream>
#include <cstdlib>
using namespace std;


int main() {
    cout << "(2, 4, 6, 8, 10)" << "\n";
    for (unsigned int i = 1; i < 20; ++i){
        int randNumber = 0;
        randNumber = rand();
        randNumber = 2 + randNumber % 9 - (randNumber % 9 + 2) % 2;
        cout << randNumber << endl;
    }
    cout << "\n" << endl;
    
    cout << "(3, 5, 7, 9, 11)" << "\n";
    for (unsigned int i = 1; i < 20; ++i){
        int randNumber = 0;
        randNumber = rand();
        randNumber = 3 + randNumber % 9 - (randNumber % 9 + 3) % 2 + 1;
        cout << randNumber << endl;
    }
    cout << "\n" << endl;
    
    cout << "(6, 10, 14, 18, 22)" << "\n";
    for (unsigned int i = 1; i < 20; ++i){
        int randNumber = 0;
        randNumber = rand();
        randNumber = (3 + randNumber % 9 - (randNumber % 9 + 3) % 2 + 1) * 2;
        cout << randNumber << endl;
    }
    cout << "\n" << endl;
}
