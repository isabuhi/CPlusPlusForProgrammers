//
//  main.cpp
//  Fig_6.20
//
//  Created by Ibrahimov Sabuhi on 11/10/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
using namespace std;

int squareByValue(int);
void squareByReference(int &);
int main() {
    int x = 2;
    int z = 4;
    
    cout << "x = " << x << " before squareByValue\n";
    cout << "Value returned by squareByValue: "
    << squareByValue( x ) << endl;
    cout << "x = " << x << " after squareByValue\n" << endl;
    
    cout << "z = " << z << " before squareByReference" << endl;
    squareByReference( z );
    cout << "z = " << z << " after squareByReference" << endl;
}


int squareByValue(int number){
    return number *= number;
}

void squareByReference(int &numberRef){
    numberRef *= numberRef;
}
