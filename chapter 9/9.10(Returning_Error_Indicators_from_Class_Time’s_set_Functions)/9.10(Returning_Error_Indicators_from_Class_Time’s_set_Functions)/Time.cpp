//
//  Time.cpp
//  9.10(Returning_Error_Indicators_from_Class_Time’s_set_Functions)
//
//  Created by Sabuhi Ibrahimov on 24.06.21.
//


#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.hpp"
using namespace std;
// include definition of class Time from Time.h using namespace std;
// Time constructor initializes each data member


TIME::TIME(  int hour,  int minute, int second )
{
   setTime( hour, minute, second); // validate and set time
} // end Time constructor

TIME::~TIME(){
    std::cout << "Destructor running. " <<hour << " : " <<minute << " : " << second <<std::endl;
}

// set new Time value using universal time
void TIME::setTime( int h, int m, int s ) {
   setHour( h ); // set private field hour
   setMinute( m ); // set
   setSecond( s ); // set
} // end function setTime


// set hour value
void TIME::setHour( int h ){
if ( h >= 0 && h < 24 )
    hour = h;
else{
    hour = 0;
    std::cout << "hour must br 0-23" << std::endl;
}
} // end function setHour

// set minute value
void TIME::setMinute( int m ) {
if ( m >= 0 && m < 60 ) minute = m;
else

    {
        hour = 0;
        std::cout << "minute must be 0-59" << std::endl;
    }
} // end function setMinute


void TIME::setSecond( int s ) {
if ( s >= 0 && s < 60 ) second = s;
else
    {
        hour = 0;
        std::cout << "second must be 0-59" << std::endl;
    }
} // end function setSecond

void TIME::tick(){
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
unsigned int TIME::getHour() const {
return hour;
} // end function getHour


// return minute value
unsigned TIME::getMinute() const {
return minute;
} // end function getMinute


// return second value
unsigned TIME::getSecond() const {
return second;
} // end function getSecond


// print Time in universal-time format (HH:MM:SS)
void TIME::printUniversal() const {
cout << setfill( '0' ) << setw( 2 ) << getHour() << ":"
<< setw( 2 ) << getMinute() << ":" << setw( 2 ) << getSecond();
} // end function printUniversal


// print Time in standard-time format (HH:MM:SS AM or PM)
void TIME::printStandard() const {
cout << ( ( getHour() == 0 || getHour() == 12 ) ? 12 : getHour() % 12 ) << ":" << setfill( '0' ) << setw( 2 ) << getMinute()
<< ":" << setw( 2 ) << getSecond() << ( hour < 12 ? " AM" : " PM" );
} // end function printStandard
