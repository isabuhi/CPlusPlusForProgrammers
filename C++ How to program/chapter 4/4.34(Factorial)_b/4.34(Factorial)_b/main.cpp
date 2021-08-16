//
//  main.cpp
//  4.34(Factorial)_b
//
//  Created by Ibrahimov Sabuhi on 8/19/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    // insert code here...
    double e = 1;
    double n = 0;
    cout << setprecision(10) <<fixed;
    cout << "Enter desired accuracy: ";
    cin>>n;
    while  (n > 0) {
        double t = n;
        double m = 1;
        while (t>0){
            
            m = m*t;
            --t;
            
        }
        e += 1/m;
        --n;
        
    }
    cout << "e = "<<e <<endl;
    return 0;
}
