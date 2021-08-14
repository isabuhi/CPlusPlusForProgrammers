//
//  main.cpp
//  5.11(Compound_Interest)
//
//  Created by Ibrahimov Sabuhi on 10/16/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double amount = 0;
    double principal = 1000;
    double rate = 0.01;
    for ( unsigned int v = 5; v <= 10; ++v){
        rate = 0.01 * v;
        cout << "Interest rate is " << rate << endl;
        cout << "Year" << setw( 30 ) << "Amount on deposit" << endl;
        
        cout << fixed << setprecision( 2 );
        
        for (unsigned year = 1; year <= 10; ++year){
            amount = principal * pow( 1.0 + rate, year);
            cout << setw( 4 ) << year << setw( 30 ) << amount << endl;
        }
        cout << endl;
    }
}
