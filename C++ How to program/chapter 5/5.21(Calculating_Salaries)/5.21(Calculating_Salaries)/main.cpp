//
//  main.cpp
//  5.21(Calculating_Salaries)
//
//  Created by Ibrahimov Sabuhi on 10/21/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int empN = 0;
    double weeklyS = 0;
    double weeklySales = 0;
    double hourlyS = 0;
    double itemS = 0;
    int weekN = 0;
    int hourN = 0;
    int itemN = 0;
    
    while (empN != -1){
        cout << "Enter worker code: ";
        cin >> empN;
        if (empN != EOF){
        switch (empN) {
            case 1:
                cout << "Enter weekly salary of manager: ";
                cin >> weeklyS;
                cout << "Enter number of week: ";
                cin >> weekN;
                cout << "Manager salary is " << weeklyS * weekN << "$\n\n";
                break;
                
            case 2:
                cout << "Enter hourly salary of hourly worker: ";
                cin >> hourlyS;
                cout << "Enter number of hour: ";
                cin >> hourN;
                if ( hourN > 40 )
                    cout << "Hourly worker salary is " << (40 + (hourN - 40) * 1.5) * hourlyS << "$\n\n";
                else
                    cout << "Hourly worker salary is " << hourN  * hourlyS << "$\n\n";
                break;
                
            case 3:
                cout << "Enter number of week which commision worked: ";
                cin >> weekN;
                cout << "Enter weekly sales of commision worker: ";
                cin >> weeklySales;
                cout << "Commision worker salary is " << weekN * 250 + weeklySales * 0.057 << "$\n\n";
                break;
                
            case 4:
                cout << "Enter number of item which pieceworker worked: ";
                cin >> itemN;
                cout << "Enter salary for per item: ";
                cin >> itemS;
                cout << "Pieceworker salary is: " << itemN * itemS << "$\n\n";
                break;
                
            default:
                cout << "Incorrect worker code.\n";
                break;
        }
        }
    }
}

