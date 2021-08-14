//
//  main.cpp
//  4.15(Sales_Commission_Calculator)
//
//  Created by Ibrahimov Sabuhi on 8/14/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // insert code here...
    double sales = 0;
    
    while (sales != -1){
        cout<<setprecision(2)<<fixed;
        cout<<"Enter sales in dollars (-1 to end): ";
        cin>>sales;
        if (sales != -1){
            cout<<"Salary is: $"<<sales/100*9 + 200<<"\n"<<endl;
        }
    }
};
