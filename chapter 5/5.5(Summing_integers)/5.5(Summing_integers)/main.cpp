//
//  main.cpp
//  5.5(Summing_integers)
//
//  Created by Ibrahimov Sabuhi on 10/2/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
using namespace std;


int main() {
    unsigned int Nv;
    cout << "Enter number of values: ";
    cin >> Nv;
    int z = 0;
    for (unsigned int x = 1; x <= Nv; ++x){
        int y = 0;
        cin >> y;
        z += y;
    }
    cout <<"Sum of values: " << z <<endl;
}
