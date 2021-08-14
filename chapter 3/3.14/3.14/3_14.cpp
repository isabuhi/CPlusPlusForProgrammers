//
//  3_14.cpp
//  3.14
//
//  Created by Ibrahimov Sabuhi on 7/31/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//
#include<iostream>
#include "3_14.hpp"
using namespace std;


Employee::Employee(string firstname, string lastname, float monthsalary)
:firstName(firstname), lastName(lastname)
{
    if (monthsalary>=0){
        monthSalary = monthsalary;
    }
    else {
        monthSalary = 0;
    }
}
void Employee::setFirstName(string firstname){
    firstName = firstname;
}
void Employee::setLastName(string lastname){
    lastName = lastname;
}
void Employee::setMonthSalary(float monthsalary){
    monthSalary = monthsalary;
}
string Employee::getFirstName() const {
    return firstName;
}
string Employee::getLastName() const {
    return lastName;
}
float Employee::getMonthSalary() const {
    return monthSalary;
}
