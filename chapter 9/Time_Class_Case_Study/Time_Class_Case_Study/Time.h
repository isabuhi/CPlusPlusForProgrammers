//
//  Time.h
//  Time_Class_Case_Study
//
//  Created by Sabuhi Ibrahimov on 09.06.21.
//

#ifndef TIME_H
#define TIME_H
class Time
{
public:
    Time();
    void setTime(int, int, int);
    void printUniversal() const;
    void printStandard() const;
private:
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
};

#endif /* TIME_H */
