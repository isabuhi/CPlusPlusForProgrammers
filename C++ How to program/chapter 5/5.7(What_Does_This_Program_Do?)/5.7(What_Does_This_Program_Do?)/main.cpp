//
//  main.cpp
//  5.7(What_Does_This_Program_Do?)
//
//  Created by Ibrahimov Sabuhi on 10/2/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    unsigned int x = 0;
    unsigned int y = 0;
    cout << "Enter two integers in the range 1-20: ";
    
    cin >> x >> y;
    
    for (unsigned int j = 1; j <= x; ++j){
        for (unsigned int j = 1; j<= y; ++j)
            cout << "@";
        cout << endl;
    }
        
}
