//
//  main.cpp
//  Fig_6.10
//
//  Created by Ibrahimov Sabuhi on 10/30/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;


int main() {
    unsigned int seed = 0;
    cout << "Enter seed: ";
    cin >> seed;
    srand(seed);
    for (unsigned int roll = 1; roll <= 20; ++roll){
        unsigned int face = 1 + rand() % 6;
        cout << setw(10) << face;
        if (roll % 5 == 0)
            cout << endl;
    }
}
