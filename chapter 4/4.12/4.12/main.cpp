//
//  main.cpp
//  4.12
//
//  Created by Ibrahimov Sabuhi on 8/12/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    unsigned int y = 0;
    unsigned int x = 1;
    unsigned int total = 0;
    
    while (x<=10){
        y = x*x;
        cout<<y<<endl;
        total+=y;
        ++x;
    }
    cout<<"Total is "<<total<<endl;
};
