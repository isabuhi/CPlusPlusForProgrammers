//
//  main.cpp
//  Fig_6.21
//
//  Created by Ibrahimov Sabuhi on 11/11/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
using namespace std;
int& a();

int main() {
    int b = 7;
    int &c = b;
    
    cout << &c << endl;
    ++a();
    return a();
    
}
int& a(){
    static int b = 7;
    int &c = b;
    return c;
}
