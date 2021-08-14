//
//  time.hpp
//  9.7(Enhancing_Class_Time)
//
//  Created by Sabuhi Ibrahimov on 22.06.21.
//

#ifndef time_hpp
#define time_hpp

class Time
{
public:
explicit Time( int = 0, int = 0, int = 0 ); // default constructor

// set functions
void setTime( int, int, int ); // set hour, minute, second
void setHour( int ); // set hour (after validation)
void setMinute( int ); // set minute (after validation)
void setSecond( int ); // set second (after validation)
void tick();
// get functions
unsigned int getHour() const; // return hour
unsigned int getMinute() const; // return minute
unsigned int getSecond() const; // return second

void printUniversal() const; // output time in universal-time format
void printStandard() const; // output time in standard-time format
private:
    
    unsigned int hour; // 0 - 23 (24-hour clock format)
    unsigned int minute; // 0 - 59
    unsigned int second; // 0 - 59
};

// end class T

#endif /* time_hpp */
