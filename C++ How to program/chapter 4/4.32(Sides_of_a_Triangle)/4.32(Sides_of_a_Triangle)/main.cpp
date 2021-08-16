//
//  main.cpp
//  4.32(Sides_of_a_Triangle)
//
//  Created by Ibrahimov Sabuhi on 8/19/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    // insert code here...
    double firstSide = 0;
    double secondSide = 0;
    double thirdSide = 0;
    cout<<"Enter first side of triangle: ";
    cin>>firstSide;
    cout<<"Enter second side of triangle: ";
    cin>>secondSide;
    cout<<"Enter third side of triangle: ";
    cin>>thirdSide;
    
    if ((firstSide + secondSide)>thirdSide){
        if ((firstSide + thirdSide)>secondSide)
            if ((thirdSide + secondSide)>firstSide)
                cout << "\nThey could represent the sides of a triangle.\n"<<endl;}
    else
        cout<< "These is not the sides of triangle.\n"<<endl;;
    return 0;
}
