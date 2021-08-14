//
//  main.cpp
//  3.12
//
//  Created by Ibrahimov Sabuhi on 7/30/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
#include "Account.hpp"
using namespace std;
int main() {
    int amount;
    // insert code here...
    
    Account account1(190);
    Account account2(220);
    cout<<"\nInitial balance of account1: "<<account1.getBalance()<<endl;
    cout<<"Initial balance of account2: "<<account2.getBalance()<<endl;
    cout<<"\nAdd a amount to account1 balance:"<<endl;
    cin>>amount;
    account1.credit(amount);
    
    cout<<"\nAdd a amount to account2 balance:"<<endl;
    cin>>amount;
    account2.credit(amount);
    
    
    cout<<"\n\nWithdraw a amount from account1 balance:"<<endl;
    cin>>amount;
    account1.debit(amount);
    
    cout<<"\nWithdraw a amount from account2 balance:"<<endl;
    cin>>amount;
    account2.debit(amount);
    
    cout<<"Current balance of account1: "<<account1.getBalance()<<endl;
    cout<<"Current balance of account2: "<<account2.getBalance()<<endl;
}
