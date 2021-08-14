//
//  main.cpp
//  Fig_6.13
//
//  Created by Ibrahimov Sabuhi on 11/6/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
using namespace std;

void useLocal();
void useStaticLocal();
void useGlobal();
int x = 1;

int main() {
    cout << "Global x in main is " << x << endl;
    
    int x = 5;
    cout << "local x in main's outer scope is " << x << endl;
    
    {
        int x = 7;
        cout << "local x in main's inner scope is " << x << endl;
    }
    cout << "local x in main's outer scope is " << x << endl;
    
    useLocal(); // useLocal has local x
    useStaticLocal(); // useStaticLocal has static local x
    useGlobal(); // useGlobal uses global x
    useLocal(); // useLocal reinitializes its local x
    useStaticLocal(); // static local x retains its prior value
    useGlobal(); // global x also retains its prior value
    
}

void useLocal(){
    int x = 25;
    cout << "\nlocal x is " << x << " on entering useLocal" << endl;
    ++x;
    cout << "local x is " << x << " on exiting useLocal" << endl;
}

void useStaticLocal() {
    static int x = 50;
    cout << "\nlocal static x is " << x << " on entering useStaticLocal" << endl;
    ++x;
    cout << "local static x is " << x << " on exiting useStaticLocal" << endl;
}
void useGlobal() {
    cout << "\nGlobal x is " << x << " on entering useGlobal" << endl;
    x *= 10;
    cout << "Global x is " << x << " on exiting useGlobal" << endl;
}
