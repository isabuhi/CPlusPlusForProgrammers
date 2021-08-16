//
//  main.cpp
//  5.22(De_Morgan’s_Laws)
//
//  Created by Ibrahimov Sabuhi on 10/22/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int x = 0, y = 0, a = 0, b = 0, g = 0, i = 0, j = 3;
    /*a)*/ cout << ((!(x < 5) && !(y >= 7)) == !(x < 5 || y >= 7)) << "\n"
    /*b)*/ << ((!( a == b ) || !( g != 5 )) == !(a == b && g != 5)) << "\n"
    /*c)*/ << (!( ( x <= 8 ) && ( y > 4 ) ) == (!(x <= 8) || !(y > 4))) << "\n"
    /*d)*/ << (!( ( i > 4 ) || ( j <= 6 ) ) == (!(i > 4) && !(j <= 6))) << endl;
}
