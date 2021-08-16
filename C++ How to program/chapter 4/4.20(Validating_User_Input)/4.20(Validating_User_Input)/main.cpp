//
//  main.cpp
//  4.20(Validating_User_Input)
//
//  Created by Ibrahimov Sabuhi on 8/15/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // insert code here...
    unsigned int passed= 0;
    unsigned int failed= 0;
    unsigned int counter = 1;
    // insert code here...
    
    while (counter <= 10){
        unsigned int result = 0;
        while (result != 1 && result != 2){
        cout<< "Enter result "<<counter<<": ";
        cin>>result;
        }
        if (result==1){
            passed = passed + 1;
        }
        else
            failed = failed + 1;
        counter = counter + 1;
    }
    cout<<"\nPassed "<<passed<<"\nFailed "<<failed<<endl;
    if (passed>8)
        cout<<"Bonus to instructor"<<endl;
}
