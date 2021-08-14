//
//  main.cpp
//  ex_6.3
//
//  Created by Sabuhi Ibrahimov on 07.12.20.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    cout << fixed << setprecision(1) << "ceil(" << "2.5" << ") = " << ceil(2.5) <<
    "\nceil(" << "-2.5" << ") = " << ceil(-2.5) <<
    "\nfloor(" << "2.5" << ") = " << floor(2.5) <<
    "\nfloor(" << "-2.5" << ") = " << floor(-2.5) <<
    "\ncos(" << "-2" << ") = " << cos(-2.0) <<
    "\ncos(" << "2" << ") = " << cos(2.0) <<
    "\nsin(" << "1" << ") = " << cos(1.0) <<
    "\nsin(" << "-1" << ") = " << cos(-1.0) <<
    "\ntan(" << "0" << ") = " << tan(0.0) <<
    "\ntan(" << "2" << ") = " << tan(2.0) << setprecision(6) <<
    "\nexp(" << "2" << ") = " << exp(2.0) <<
    "\nexp(" << "1" << ") = " << exp(1.0) << setprecision(1) <<
    "\nfabs(" << "1" << ") = " << fabs(1.0) <<
    "\nfabs(" << "-1" << ") = " << fabs(-1.0) <<
    "\nfmod(" << "2.6, 1.2" << ") = " << fmod(2.6, 1.2) <<
    "\nfmod(" << "-2.6, 1.2" << ") = " << fmod(-2.6, 1.2) <<
    "\nlog(" << "2.718282" << ") = " << log(2.718282) <<
    "\nlog(" << "7.389056" << ") = " << log(7.389056) <<
    "\nlog10(" << "10" << ") = " << log10(10.0) <<
    "\nlog10(" << "100" << ") = " << log10(100.0) <<
    "\npow(" << "2, 6" << ") = " << pow(2.0, 6.0) <<
    "\npow(" << "64, 0.5" << ") = " << pow(64.0, 0.5) <<
    "\nsqrt(" << "64" << ") = " << sqrt(64.0) << endl;
    
}
