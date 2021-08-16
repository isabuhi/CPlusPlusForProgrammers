//
//  main.cpp
//  4.27(Printing_the_Decimal_Equivalent _of_a_Binary_Number)
//
//  Created by Ibrahimov Sabuhi on 8/18/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // insert code here...
    int number = 0;
    while (number != -1){
        cout<<"Enter binar number for interpret to decimal number (or -1 for quit): ";
        cin>>number;
        if (number != -1){
            int decimalNumber = 0;
            int i= 1;
            int digit = 0;
            int a = 1;
            int digit0 = 0;
        
            while (digit0 != number-digit){
            decimalNumber += a*((number-digit)/i % 10);
            digit = (((number-digit)/i) % 10)*i + digit;

            
            a *= 2;
            i *= 10;
        
            digit0 = ((number-digit)%i);
                
            }
            cout<< decimalNumber<<endl;
        }
        
    }
    
    return 0;
}
