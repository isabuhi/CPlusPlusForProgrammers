//
//  Account.cpp
//  3.12
//
//  Created by Ibrahimov Sabuhi on 7/30/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//
#include<iostream>
#include "Account.hpp"
using namespace std;

    Account::Account(int amount)
    {
        if (amount>=0){
            balance=amount;
        }
        else {
            cerr<<"Initial balance is invalid: "<<amount<<endl;
            balance = 0;
        }
    }
    void Account::credit (int credit)
    {
        balance = balance + credit;
    }
    void Account::debit (int debit)
    {
        if ( debit <= balance ){
        balance = balance - debit;
        }
        else {
            cout<<"Debit amount exceed account balance."<<endl;
        }
    }
    int Account::getBalance() const{
        return balance;
    }
