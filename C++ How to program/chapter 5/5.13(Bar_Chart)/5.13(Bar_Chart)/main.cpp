//
//  main.cpp
//  5.13(Bar_Chart)
//
//  Created by Ibrahimov Sabuhi on 10/19/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string a;
    for (unsigned x = 1; x <= 5; ++x){
        cout << "Enter " << x << "st" << " value: ";
        unsigned y = 0;
        cin >> y;
        for (unsigned x = 1; x <= y; ++x)
            a += "*";
        string b = "\n";
        a += '\n';
    }

    
    cout << a << endl;
}
