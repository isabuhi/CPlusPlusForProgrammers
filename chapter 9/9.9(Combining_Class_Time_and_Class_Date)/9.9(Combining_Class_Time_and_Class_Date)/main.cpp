//
//  main.cpp
//  9.9(Combining_Class_Time_and_Class_Date)
//
//  Created by Sabuhi Ibrahimov on 23.06.21.
//

#include <iostream>
#include "DateAndTime.hpp"


int main() {
    DateAndTime a;
    for(int i = 0; i < 100000; ++i){
        a.tick();
    a.printUniversal();
    }
}
