//
//  main.cpp
//  Fig_6.19
//
//  Created by Ibrahimov Sabuhi on 11/10/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
using namespace std;
inline double cube(const double side ){
    return side * side * side;
}

int main() {
    double sideValue = 0;
    cout << "Enter cube side for calculate volume: ";
    cin >> sideValue;
    
    cout << "Volume of cube is " << cube(sideValue) << endl;
}
