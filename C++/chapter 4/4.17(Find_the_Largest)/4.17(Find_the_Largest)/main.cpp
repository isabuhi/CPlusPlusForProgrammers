//
//  main.cpp
//  4.17(Find_the_Largest)
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
    double largest = 0;
    
    
    while (counter <= 10){
        cout << setprecision(2)<<fixed;
        cout << "Input number N"<<counter<<": ";
        cin >> number;
        if (counter == 1)
        largest = number;
        else{
            if(largest<number)
                largest=number;
        }
        ++counter;
    }
    cout <<"\nThe largest number is: "<<largest<<endl;
};
