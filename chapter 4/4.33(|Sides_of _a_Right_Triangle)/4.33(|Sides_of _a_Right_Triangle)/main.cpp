//
//  main.cpp
//  4.33(|Sides_of _a_Right_Triangle)
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
    
    if (firstSide > secondSide)
        if (firstSide > thirdSide){
            if (firstSide*firstSide == secondSide*secondSide + thirdSide*thirdSide)
                cout << "\nThese are sides of right triangle"<<endl;
            else
                cout << "\nThese are not sides of right triangle"<<endl;
        }
            if (secondSide > firstSide)
                if (secondSide > thirdSide){
                    if (secondSide*secondSide == firstSide*firstSide + thirdSide*thirdSide)
                    cout << "\nThese are sides of right triangle"<<endl;
                    else
                    cout << "\nThese are not sides of right triangle"<<endl;
                }
                   if (thirdSide > secondSide)
                       if (thirdSide > firstSide){
                           if (thirdSide*thirdSide == secondSide*secondSide + firstSide*firstSide)
                           cout << "\nThese are sides of right triangle"<<endl;
                           else
                           cout << "\nThese are not sides of right triangle"<<endl;
                       }
                

    return 0;
}


