//
//  main.cpp
//  5.12(Drawing_Patterns_with_Nested_for_Loops)
//
//  Created by Ibrahimov Sabuhi on 10/17/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    unsigned int z = 10;
    unsigned int t = z + 1;
    
    for (unsigned int x = 1; x <= z; ++x ){
        for (unsigned int y = 1; y <= x; ++y )
            cout << "*";
        for (unsigned int y = 1; y <= t - x ; ++y )
            cout << " ";
        cout << " ";
        for (unsigned int y = 1; y <= t - x; ++y )
            cout << "*";
        for (unsigned int y = 1; y <= x; ++y )
            cout << " ";
        for (unsigned int y = 1; y <=x ; ++y )
            cout << " ";
        for (unsigned int y = 1; y <= t - x; ++y )
            cout << "*";
        cout << " ";
        for (unsigned int y = 1; y <= t - x; ++y )
            cout << " ";
        for (unsigned int y = 1; y <= x; ++y )
            cout << "*";
        cout << "\n";
    }
    cout << endl;

    
    
    
}
