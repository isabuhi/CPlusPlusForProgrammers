//
//  main.cpp
//  5.20(Pythagorean_Triples)
//
//  Created by Ibrahimov Sabuhi on 10/21/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace::std;

int main() {
    cout << "(Pythagorean Triples)" << endl;
    for (unsigned int z = 1; z <= 500; ++z){
        int z1 = 0;
        for (unsigned int y = 1; y < 500; ++y ){
            for(unsigned int x = 1; x < 500 ; ++x){
                    if ((pow(x, 2) + pow(y, 2)) == pow(z, 2)){
                        if (z1 != z){
                            cout << "x: " << x << "\ty: " << y << "\tz: " << z << "\n";
                            z1 = z;
                        }
                    }
             }
         }
    }
}
