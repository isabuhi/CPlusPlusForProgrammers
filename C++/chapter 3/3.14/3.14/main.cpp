//
//  main.cpp
//  3.14
//
//  Created by Ibrahimov Sabuhi on 7/31/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include<iostream>
#include "3_14.hpp"
using namespace std;

int main() {
    // insert code here...
    string firstname;
    string lastname;
    float monthsalary;
    
    Employee employee1("Sabuhi", "Ibrahimov", 190);
    Employee employee2("Sanan", "Ibrahimov", 1200);
    
    
    cout<<"Initial employers' details:\n"
    "\n------employee1------"
    "\nFirst name: "<<employee1.getFirstName()<<
    "\nLast name: "<<employee1.getLastName()<<
    "\nMonthly salary: "<<employee1.getMonthSalary()<<
    "\nYearly salary: "<<employee1.getMonthSalary()*12<<
    "\n\n------employee2------"
    "\nFirst name: "<<employee2.getFirstName()<<
    "\nLast name: "<<employee2.getLastName()<<
    "\nMonthly salary: "<<employee2.getMonthSalary()<<
    "\nYearly salary: "<<employee2.getMonthSalary()*12<<endl;
    
    cout<< "\nCreate new employee1 details:\n"
    "Add first name: ";
    cin>>firstname;
    cout<<"Add last name: ";
    cin>>lastname;
    cout<<"Add monthly salary: ";
    cin>>monthsalary;
    employee1.setFirstName(firstname);
    employee1.setLastName(lastname);
    employee1.setMonthSalary(monthsalary);
    
    cout<< "\nCreate new employee2 details:\n"
    "Add first name: ";
    cin>>firstname;
    cout<<"Add last name: ";
    cin>>lastname;
    cout<<"Add monthly salary: ";
    cin>>monthsalary;
    employee2.setFirstName(firstname);
    employee2.setLastName(lastname);
    employee2.setMonthSalary(monthsalary);
    
    cout<<"\n\nCreated employers' details:\n"
    "\n------employee1------"
    "\nFirst name: "<<employee1.getFirstName()<<
    "\nLast name: "<<employee1.getLastName()<<
    "\nMonthly salary: "<<employee1.getMonthSalary()<<
    "\nYearly salary: "<<employee1.getMonthSalary()*12<<
    "\n10 percent raised yearly salary: "<<(employee1.getMonthSalary()/10+employee1.getMonthSalary())*12<<
    "\n\n------employee2------"
    "\nFirst name: "<<employee2.getFirstName()<<
    "\nLast name: "<<employee2.getLastName()<<
    "\nMonthly salary: "<<employee2.getMonthSalary()<<
    "\nYearly salary: "<<employee2.getMonthSalary()*12<<
    "\n10 percent raised yearly salary: "<<(employee2.getMonthSalary()/10+employee2.getMonthSalary())*12<<endl;
}
