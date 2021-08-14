//
//  TIME.hpp
//  9.4(Enhancing_Class_Time)
//
//  Created by Sabuhi Ibrahimov on 20.06.21.
//

#ifndef TIME_hpp
#define TIME_hpp
#include <ctime>
class TIME
{
public:
    TIME();
    void getTime() const;
private:
    friend time_t time(time_t*);
    friend tm* localtime(const time_t*);
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
};

#endif /* TIME_hpp */
