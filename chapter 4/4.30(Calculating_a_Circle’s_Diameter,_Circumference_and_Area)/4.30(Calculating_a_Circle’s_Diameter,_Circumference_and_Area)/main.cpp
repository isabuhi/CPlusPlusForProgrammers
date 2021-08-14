//
//  main.cpp
//  4.30(Calculating_a_Circle’s_Diameter,_Circumference_and_Area)
//
//  Created by Ibrahimov Sabuhi on 8/19/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    // insert code here...
    double p = 3.14159;
    double r = 0;
    double diameter = 0;
    double circumFerence = 0;
    double area = 0;
    cout<<setprecision(5)<<fixed;
    cout<< "Enter radius of circle: ";
    cin>>r;
    diameter = 2*r;
    circumFerence = 2*p*r;
    area = p*r*r;
    cout<<"Diameter: "<<diameter<<endl;;
    cout<<"Circumference: "<<circumFerence<<endl;;
    cout<<"Area: "<<area<<endl;
    return 0;
}
