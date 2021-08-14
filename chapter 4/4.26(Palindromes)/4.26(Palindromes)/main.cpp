//
//  main.cpp
//  4.26(Palindromes)
//
//  Created by Ibrahimov Sabuhi on 8/18/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // insert code here...
    int number = 0;
    while( number != -1) {
        cout << "Enter a five-digit number: ";
        cin>>number;
        if(number != -1){
        int digit1 = (number - number % 10000) / 10000;
        int digit2 = (number - digit1 * 10000 - number % 1000)/1000;
        int digit3 = (number - digit1 *10000 - digit2 * 1000 - number % 100) / 100;
        int digit4 = (number - digit1*10000 - digit2 * 1000 - digit3*100-number % 10) / 10;
        int digit5 = number - digit1*10000 - digit2 * 1000 - digit3*100 - digit4*10;
        
        if (digit1 == digit5)
        {if(digit2 == digit4)
            cout<<"This number is a Palindrome\n"<<endl;}
        else
            cout <<"This number is not a Palindrome\n"<<endl;
        
        }}
    
    return 0;
}
