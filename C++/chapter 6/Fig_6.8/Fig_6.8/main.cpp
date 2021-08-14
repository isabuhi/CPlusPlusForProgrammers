//
//  main.cpp
//  Fig_6.8
//
//  Created by Ibrahimov Sabuhi on 10/30/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main() {
    for (unsigned x = 1; x <= 20; ++x){
        cout << setw(10) << (1 + rand() % 6);
        
        if (x % 5 == 0)
            cout << endl;
    }
}
