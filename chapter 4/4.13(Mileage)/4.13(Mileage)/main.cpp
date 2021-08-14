//
//  main.cpp
//  4.13(Mileage)
//
//  Created by Ibrahimov Sabuhi on 8/12/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;



int main() {
    // insert code here...
    double mile= 1;
    double total = 0;
    unsigned int gallons = 0;
    
    while (mile!=-1){
        cout<<"Enter miles driven (-1 to quit): ";
        cin>>mile;
        if (mile!=-1){
        unsigned int gallon = 0;
        cout<<"Enter gallons used: ";
        cin>>gallon;
        cout<<setprecision(6)<<fixed<<"MPG this trip: "<<mile/gallon<<endl;
        total += mile;
        gallons += gallon;
        cout<<setprecision(6)<<fixed<<"Total MPG: "<<total/gallons<<"\n"<<endl;
        }
    }
};
