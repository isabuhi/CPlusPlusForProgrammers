//
//  main.cpp
//  5.10(Factorials)
//
//  Created by Ibrahimov Sabuhi on 10/16/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    for (unsigned int n = 1; n <= 20; ++n){
        unsigned long int nFactorial = 1;
        unsigned long int m = n;
        if (m == 1)
            cout << n << "\t" << 1 <<endl;
        else{
            if(m == 0)
               cout << n << "\t" << 1 <<endl;
            else {
                while (m > 0){
                     nFactorial = nFactorial*m;
                    --m;
             }
                cout << n << "\t" << nFactorial<<endl;
            }
                
            }
            
    }
}
