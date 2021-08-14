//
//  Time.hpp
//  9.10(Returning_Error_Indicators_from_Class_Time’s_set_Functions)
//
//  Created by Sabuhi Ibrahimov on 24.06.21.
//

#ifndef Time_hpp
#define Time_hpp

class TIME
{
public:
explicit TIME(int = 0, int = 0, int = 0 ); // default constructor
    ~TIME();
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

