//
//  main.cpp
//  Fig_6.12
//
//  Created by Ibrahimov Sabuhi on 11/4/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
#include <random>
#include <ctime>
#include <iomanip>
using namespace std;



int main(int argc, const char * argv[]) {
    default_random_engine engine(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<unsigned int> randomInt(1, 6);
    
    for (unsigned int x = 1; x <= 20; ++x){
        cout << setw(10) << randomInt(engine);
        if (x % 5 == 0) {
            cout << endl;
        }
    }
   
}

