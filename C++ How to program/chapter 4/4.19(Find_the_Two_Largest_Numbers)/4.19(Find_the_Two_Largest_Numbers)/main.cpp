//
//  main.cpp
//  4.19(Find_the_Two_Largest_Numbers)
//
//  Created by Ibrahimov Sabuhi on 8/14/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // insert code here...
    int counter = 1;
    double number = 0;
    double largest1 = 0;
    double largest2 = 0;
    
    
    while (counter <= 10){
        cout << setprecision(2)<<fixed;
        cout << "Input number N"<<counter<<": ";
        cin >> number;
        if (counter == 1)
        largest1 = number;
        else{
            if(largest1 < number) {
                largest2 = largest1;
                largest1 = number;
            }
        }
        ++counter;
    }
    cout <<"\nThe largest number is: "<<largest1<<" and "<<largest2<<endl;
};
