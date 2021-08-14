//
//  main.cpp
//  5.6(Averaging_Integers)
//
//  Created by Ibrahimov Sabuhi on 10/2/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int y = 0;
    int z = -1;
    cout << "Enter values or 9999 for execute program: " <<endl;
    for (int x = 0; x != 9999; cin >> x){
        ++z;
        y += x;
    }
    double A = static_cast<double>(y)/z;
    cout << "Average of values: "<< y <<"\t"<< A << endl;
        
}
