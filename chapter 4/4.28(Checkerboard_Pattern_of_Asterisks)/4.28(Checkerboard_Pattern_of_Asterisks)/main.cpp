//
//  main.cpp
//  4.28(Checkerboard_Pattern_of_Asterisks)
//
//  Created by Ibrahimov Sabuhi on 8/19/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // insert code here...
    int x = 1;
    
    while (x<=32){
        
        if(x%2 == 0)
        cout<< " ";
        int y = 1;
        while (y<=32){
            
            cout<< "* ";
            ++y;
        }
        cout<<endl;
        ++x;
    }
    
    
    
    
}
