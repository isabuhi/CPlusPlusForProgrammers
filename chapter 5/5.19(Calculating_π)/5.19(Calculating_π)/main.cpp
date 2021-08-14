//
//  main.cpp
//  5.19(Calculating_π)
//
//  Created by Ibrahimov Sabuhi on 10/21/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
#include <iomanip>

int main() {
    int toggle = 0;
    unsigned int limit = 1000;
    double pi = 4;
    double divisor = 3;
    
    for ( unsigned int x = 1; x <= limit; ++x){
        if (toggle == 0) {
            pi -= (4 / divisor);
        }
        else {
            pi += (4 / divisor);
        }
        toggle = (1 - toggle);
        divisor += 2;
        
        std::cout << x << std::setw(4) << "\t" << pi << std::endl;
    }
}
