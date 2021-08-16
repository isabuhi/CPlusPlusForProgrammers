//
//  main.cpp
//  5.16(Compound_interest_calculation)
//
//  Created by Ibrahimov Sabuhi on 10/20/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double principal = 1000;
    double rate = 0.05;
        cout << "Year" << setw( 30 ) << "Amount on deposit" << endl;
        
        cout << fixed << setprecision( 2 );
        
        for (unsigned year = 1; year <= 10; ++year){
            int amount = principal * pow( 1.0 + rate, year);
            int dollar = amount / 100;
            int cent = amount % 100;
            string amounts = to_string(dollar) + string(".") + to_string(cent) + string("$");
            cout << setw( 4 ) << year << setw( 30 ) << amounts << endl;
        }
        cout << endl;
    
}

