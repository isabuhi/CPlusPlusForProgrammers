//
//  TIME.cpp
//  9.4(Enhancing_Class_Time)
//
//  Created by Sabuhi Ibrahimov on 20.06.21.
//
#include <iostream>
#include <ctime>
#include "TIME.hpp"

TIME::TIME(){
    time_t curr_time = time(NULL);
    tm *tm_local = localtime(&curr_time);
    hour = tm_local -> tm_hour;
    minute = tm_local -> tm_min;
    second = tm_local -> tm_sec;
}
void TIME::getTime() const {
    std::cout << hour << " : " << minute << " : " << second << std::endl;
}
