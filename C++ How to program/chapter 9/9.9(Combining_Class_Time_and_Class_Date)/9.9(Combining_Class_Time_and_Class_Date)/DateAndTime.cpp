//
//  DateAndTime.cpp
//  9.9(Combining_Class_Time_and_Class_Date)
//
//  Created by Sabuhi Ibrahimov on 23.06.21.
//


#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "DateAndTime.hpp"
using namespace std;
// include definition of class Time from Time.h using namespace std;
// Time constructor initializes each data member


DateAndTime::DateAndTime(int m, int d, int y, int hour, int minute, int second ) {
   setTime( hour, minute, second ); // validate and set time
    if ( m > 0 && m <= monthsPerYear ) // validate the month
    month = m;
    else
    throw invalid_argument( "month must be 1-12" );
    
    year = y; // could validate yr
    day = checkDay( d ); // validate the day
} // end Time constructor



// set new Time value using universal time
void DateAndTime::setTime( int h, int m, int s ) {
   setHour( h ); // set private field hour
   setMinute( m ); // set
   setSecond( s ); // set
} // end function setTime


// set hour value
void DateAndTime::setHour( int h ){
if ( h >= 0 && h < 24 )
    hour = h;
else
throw std::invalid_argument( "hour must be 0-23" );
} // end function setHour

// set minute value
void DateAndTime::setMinute( int m ) {
if ( m >= 0 && m < 60 ) minute = m;
else
throw std::invalid_argument( "minute must be 0-59" );
} // end function setMinute


void DateAndTime::setSecond( int s ) {
if ( s >= 0 && s < 60 ) second = s;
else
throw invalid_argument( "second must be 0-59" );
} // end function setSecond

void DateAndTime::tick(){
    unsigned int sumSecond;
    unsigned int sumMinute;
    unsigned int sumHour;
    sumSecond = second + 60*minute + 3600 * hour;
    ++sumSecond;
    second = sumSecond % 60;
    sumMinute = sumSecond /60;
    minute = sumMinute % 60;
    sumHour = sumMinute / 60;
    hour = sumHour % 24;
    if(second == 0 && minute == 0 && hour == 0)
        nextDay();
        
    
}
// return hour value



// print Time in universal-time format (HH:MM:SS)
void DateAndTime::printUniversal() const {
cout << "Date: "<< month << " : "<< day << " : " << year << setfill('0') << ". Time: " << setw( 2 ) << hour << ":"
<< setw( 2 ) << minute << ":" << setw( 2 ) << second << endl;
} // end function printUniversal


// print Time in standard-time format (HH:MM:SS AM or PM)
void DateAndTime::printStandard() const {
cout << ( ( hour == 0 || hour == 12 ) ? 12 : hour % 12 ) << ":" << setfill( '0' ) << setw( 2 ) << minute
<< ":" << setw( 2 ) << second << ( hour < 12 ? " AM" : " PM" );
} // end function printStandard


void DateAndTime::nextDay(){
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


unsigned int DateAndTime::checkDay( int testDay ) const
{

// determine whether testDay is valid for specified month
if ( testDay > 0 && testDay <= daysPerMonth[ month ] ) return testDay;
   // February 29 check for leap year
if ( month == 2 && testDay == 29 && ( year % 400 == 0 || ( year % 4 == 0 && year % 100 != 0 ) ) )
return testDay;
throw invalid_argument( "Invalid day for current month and year" );
    
} // end function checkDay
