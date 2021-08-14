//
//  Date.cpp
//  9.8(Enhancing_Class_Date)
//
//  Created by Sabuhi Ibrahimov on 23.06.21.
//

#include "Date.hpp"


#include <iostream>

using namespace std;

// Date constructor (should do range checking)
Date::Date( int m, int d, int y )
{
    if ( m > 0 && m <= monthsPerYear ) // validate the month
    month = m;
    else
    throw invalid_argument( "month must be 1-12" );
    
    year = y; // could validate yr
    day = checkDay( d ); // validate the day
    
    // output Date object to show when its constructor is called
    cout << "Date object constructor for date ";
    print();
    cout << endl;
} // end constructor Date

void Date::print()
{
cout << day << '/' << month << '/' << year <<endl;
}

void Date::nextDay(){
    if ( year % 400 == 0 || ( year % 4 == 0 && year % 100 != 0 )){
        daysPerMonth[ month ] = 29;
    }
    else
        daysPerMonth[ month ] = 28;
    if (day == daysPerMonth[ month ]){
        day = 0;
        ++day;
        if (month == 12){
            month = 0;
            ++year;
        }
        ++month;
    }
    else
        ++day;
}


unsigned int Date::checkDay( int testDay ) const
{

// determine whether testDay is valid for specified month
if ( testDay > 0 && testDay <= daysPerMonth[ month ] ) return testDay;
   // February 29 check for leap year
if ( month == 2 && testDay == 29 && ( year % 400 == 0 || ( year % 4 == 0 && year % 100 != 0 ) ) )
return testDay;
throw invalid_argument( "Invalid day for current month and year" );
    
} // end function checkDay
