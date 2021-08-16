//
//  main.cpp
//  4.34(Factorial)
//
//  Created by Ibrahimov Sabuhi on 8/19/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // insert code here...
    unsigned int n = 0;
    
    while (n != -1){
    cout << "Enter nonnegative integer: ";
    cin>>n;
        if (n != -1){
            unsigned int nFactorial = 1;
            if (n == 1)
                cout <<1<<endl;
            else{
                if(n == 0)
                    cout <<1<<endl;
                else {
                    while (n > 0){
                         nFactorial = nFactorial*n;
                        --n;
                 }
                    cout << nFactorial<<endl;
                }
                
            }
            
        }
    
    }
}
