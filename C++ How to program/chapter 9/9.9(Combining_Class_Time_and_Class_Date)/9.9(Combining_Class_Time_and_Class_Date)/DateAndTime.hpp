//
//  DateAndTime.hpp
//  9.9(Combining_Class_Time_and_Class_Date)
//
//  Created by Sabuhi Ibrahimov on 23.06.21.
//

#ifndef DateAndTime_hpp
#define DateAndTime_hpp
#include <array>

class DateAndTime{
public:
static const unsigned int monthsPerYear = 12;
explicit DateAndTime(int = 1, int =1, int =2000, int = 0, int = 0, int = 0 ); // default constructor

// set functions
void setTime( int, int, int ); // set hour, minute, second
void setHour( int ); // set hour (after validation)
void setMinute( int ); // set minute (after validation)
void setSecond( int ); // set second (after validation)
void tick();

void nextDay();
    
void printUniversal() const; // output time in universal-time format
void printStandard() const; // output time in standard-time format
private:
    
    unsigned int hour; // 0 - 23 (24-hour clock format)
    unsigned int minute; // 0 - 59
    unsigned int second; // 0 - 59
    std::array< int, monthsPerYear + 1 > daysPerMonth = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    unsigned int checkDay( int ) const;
    unsigned int month;
    unsigned int day;
    unsigned int year; // end class Date
};

#endif /* DateAndTime_hpp */
