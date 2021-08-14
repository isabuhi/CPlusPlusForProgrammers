//
//  main.cpp
//  5.25(Removing_break_and_continue)
//
//  Created by Ibrahimov Sabuhi on 10/23/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    unsigned int count;
    unsigned int breakPoint = 10;
    
    for  (count = 1; count <= breakPoint; ++count){
        if (count == 8)
        {
            --count;
            breakPoint = count;
        }
        else
        {
            cout << count << " ";
        }
    }
    cout << "\nBroke out of loop at count = " << count << endl;
    
    /*------------------------------------------------------------*/
    
    for  (int count = 1; count <= breakPoint; ++count){
       if (count == 8)
           break;
            cout << count << " ";
    }
    cout << "\nBroke out of loop at count = " << count << endl;
}
