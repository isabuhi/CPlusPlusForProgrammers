//
//  time.cpp
//  9.7(Enhancing_Class_Time)
//
//  Created by Sabuhi Ibrahimov on 22.06.21.
//


#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "time.hpp"
using namespace std;
// include definition of class Time from Time.h using namespace std;
// Time constructor initializes each data member


Time::Time( int hour, int minute, int second ) {
   setTime( hour, minute, second ); // validate and set time
} // end Time constructor



// set new Time value using universal time
void Time::setTime( int h, int m, int s ) {
   setHour( h ); // set private field hour
   setMinute( m ); // set
   setSecond( s ); // set
} // end function setTime


// set hour value
void Time::setHour( int h ){
if ( h >= 0 && h < 24 )
    hour = h;
else
throw std::invalid_argument( "hour must be 0-23" );
} // end function setHour

// set minute value
void Time::setMinute( int m ) {
if ( m >= 0 && m < 60 ) minute = m;
else
throw std::invalid_argument( "minute must be 0-59" );
} // end function setMinute


void Time::setSecond( int s ) {
if ( s >= 0 && s < 60 ) second = s;
else
throw invalid_argument( "second must be 0-59" );
} // end function setSecond

void Time::tick(){
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
    
}
// return hour value
unsigned int Time::getHour() const {
return hour;
} // end function getHour


// return minute value
unsigned Time::getMinute() const {
return minute;
} // end function getMinute


// return second value
unsigned Time::getSecond() const {
return second;
} // end function getSecond


// print Time in universal-time format (HH:MM:SS)
void Time::printUniversal() const {
cout << setfill( '0' ) << setw( 2 ) << getHour() << ":"
<< setw( 2 ) << getMinute() << ":" << setw( 2 ) << getSecond();
} // end function printUniversal


// print Time in standard-time format (HH:MM:SS AM or PM)
void Time::printStandard() const {
cout << ( ( getHour() == 0 || getHour() == 12 ) ? 12 : getHour() % 12 ) << ":" << setfill( '0' ) << setw( 2 ) << getMinute()
<< ":" << setw( 2 ) << getSecond() << ( hour < 12 ? " AM" : " PM" );
} // end function printStandard
