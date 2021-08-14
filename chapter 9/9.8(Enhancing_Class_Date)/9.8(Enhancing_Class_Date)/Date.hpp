//
//  Date.hpp
//  9.8(Enhancing_Class_Date)
//
//  Created by Sabuhi Ibrahimov on 23.06.21.
//

#ifndef Date_hpp
#define Date_hpp
#include <array>

// class Date definition
class Date
{
public:
    static const unsigned int monthsPerYear = 12;
    explicit Date( int = 1, int = 1, int = 2000 ); // default constructor
    void print();
    void nextDay();
private:
    std::array< int, monthsPerYear + 1 > daysPerMonth = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    unsigned int checkDay( int ) const;
    unsigned int month;
    unsigned int day;
    unsigned int year; // end class Date

};
#endif /* Date_hpp */
