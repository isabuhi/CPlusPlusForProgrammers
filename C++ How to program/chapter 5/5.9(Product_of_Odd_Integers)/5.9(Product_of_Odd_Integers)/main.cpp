//
//  main.cpp
//  5.9(Product_of_Odd_Integers)
//
//  Created by Ibrahimov Sabuhi on 10/15/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int a = 0;
    for ( unsigned int n = 1; n <= 15; ++n){
        if (n == 1)
            a = n;
        else{
            if (n % 2 == 1)
                 a *= n;
        }
        
        
    }
    cout << "Product of odd integers from 1 to 15 is " << a << endl;
}
