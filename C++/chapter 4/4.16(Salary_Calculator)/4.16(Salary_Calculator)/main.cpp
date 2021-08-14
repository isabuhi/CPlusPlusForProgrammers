//
//  main.cpp
//  4.16(Salary_Calculator)
//
//  Created by Ibrahimov Sabuhi on 8/14/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    // insert code here...
    double hoursWork = 0;
    
    while (hoursWork != -1){
        cout << setprecision(2)<< fixed;
        cout << "Enter hours worked (-1 to end): ";
        cin >> hoursWork;
        if (hoursWork != -1){
            double houreRate = 0;
            cout << "Enter hourly rate of the employee ($00.00): ";
            cin >> houreRate;
            if(hoursWork <= 40){
                cout<< "Salary is "<<hoursWork*houreRate<<"\n"<<endl;
            }
            else{
                cout<< "Salary is "<<((hoursWork - 40)/2 + hoursWork)*houreRate<<"\n"<<endl;
            }
        }
    }
};
