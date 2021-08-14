//
//  main.cpp
//  5.8(Find_the_Smallest_Integer)
//
//  Created by Ibrahimov Sabuhi on 10/15/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
using namespace std;


int main() {
    int N = 0;
    int b = 0;
    cout << "Enter number of values: ";
    cin >> N;
    
    for (unsigned int n = 1; n <= N; ++n) {
        int a = 0;
        cout << "Enter " << n << "th value: ";
        cin >> a;
        if (n == 1)
            b = a;
        else{
            if (b > a)
                b = a;
        }
    }
    cout << "\nSmallest value is " << b << endl;
    
    
}




