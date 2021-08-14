//
//  main.cpp
//  Time_Class_Case_Study
//
//  Created by Sabuhi Ibrahimov on 09.06.21.
//

#include <iostream>
#include <stdexcept> // for invalid_argument exception class
#include "Time.h" // include definition of class Time from Time.h
using namespace std;


int main() {
    Time t;
    
    cout << "The initial universal time is ";
    t.printUniversal();
    cout << "\nThe initial standard time is ";
    t.printStandard();
    cout << "\n\n";
    
    
    t.setTime( 13, 27, 6 );
    
    cout << "The initial universal time is ";
    t.printUniversal();
    cout << "\nThe initial standard time is ";
    t.printStandard();
    cout << "\n\n";
    try
    {
    t.setTime( 99, 99, 99 ); // all values out of range
    } // end try
    catch ( invalid_argument &e )
    {
    cout << "Exception: " << e.what() << endl;
    }
    cout << "\n";
    cout << "\n\nAfter attempting invalid settings:"
    << "\nUniversal time: ";
    t.printUniversal(); // 13:27:06
    cout << "\nStandard time: ";
    t.printStandard(); // 1:27:06 PM
    cout << endl;
}
