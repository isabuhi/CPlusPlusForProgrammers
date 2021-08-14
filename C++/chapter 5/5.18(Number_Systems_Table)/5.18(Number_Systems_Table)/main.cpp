//
//  main.cpp
//  5.18(Number_Systems_Table)
//
//  Created by Ibrahimov Sabuhi on 10/21/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    for (unsigned int x = 1; x <= 256; ++x){
        cout  << dec << x << "\t" << oct << x << "\t" << hex << x << "\n";
    }
}
