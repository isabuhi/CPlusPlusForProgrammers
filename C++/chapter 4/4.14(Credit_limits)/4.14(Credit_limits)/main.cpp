//
//  main.cpp
//  4.14(Credit_limits)
//
//  Created by Ibrahimov Sabuhi on 8/13/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // insert code here...
    int accountNumber = 0;
    double beginningBalance = 0;
    double totalCharges = 0;
    double creditLimit = 0;
    double totalcCredit = 0;
    
    while (accountNumber != -1){
        cout<<setprecision(2)<<fixed;
        cout<<"\nEnter account number (or -1 to quit): ";
        cin>>accountNumber;
        if(accountNumber != -1){
            double newBalance;
            cout<<"Enter beginning balance: ";
            cin>>beginningBalance;
            cout<<"Enter total charges: ";
            cin>>totalCharges;
            cout<<"Enter total credits: ";
            cin>>totalcCredit;
            cout<<"Enter credit limit: ";
            cin>>creditLimit;
            newBalance = beginningBalance + totalCharges - totalcCredit;
            cout<<"New balance is "<<newBalance<<endl;
            if (newBalance > creditLimit){
                cout<<"\nAccount:      "<<accountNumber;
                cout<<"\nCredit limit: "<<creditLimit;
                cout<<"\nBalance:      "<<newBalance;
                cout<<"\nCredit Limit Exceeded."<<endl;
            }
        }
    }
};
