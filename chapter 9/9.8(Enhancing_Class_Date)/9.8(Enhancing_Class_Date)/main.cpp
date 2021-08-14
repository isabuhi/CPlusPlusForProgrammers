//
//  main.cpp
//  9.8(Enhancing_Class_Date)
//
//  Created by Sabuhi Ibrahimov on 23.06.21.
//

#include <iostream>
#include "Date.hpp" // include definition of class Date from Date.hpp
using namespace std;

int main() {
    Date date;
    
    for (int i = 0 ;  i < 500; ++i){
        date.nextDay();
        date.print();
    }
}
