//
//  main.cpp
//  4.35(C++11 _List_Initializers)
//
//  Created by Ibrahimov Sabuhi on 8/20/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//
#include <iostream>
using namespace std;
class Account
{
public:
    explicit Account (unsigned int x, string y, string z)
    :accountNumber{x}, firstName{y}, lastName{z}
    {
    
    }
    void displayMessage (){
        cout << "Account number: "<<accountNumber<<endl;
        cout << "First name: "<<firstName<<endl;
        cout << "Last name: "<<lastName<<endl;
    }
private:
    unsigned int accountNumber;
    string firstName;
    string lastName;
};



int main() {
    // insert code here...
    unsigned int studentCounter = 0;
    cout << studentCounter<<endl;
    
    
    unsigned int studentCounter1 = {0};
    cout << studentCounter1<<endl;
    
    
    unsigned int studentCounter2{0};
    cout << studentCounter2<<endl;
    
    double initialBalance = 1000.0;
    cout << initialBalance <<endl;
    
    double initialBalance1 = {1000.0};
    cout << initialBalance1 <<endl;
    
    double initialBalance2{1000.0};
    cout << initialBalance2 <<endl;
    
    Account account{ 6 , "Sabuhi", "Ibrahimov"};
    account.displayMessage();
    return 0;
}
