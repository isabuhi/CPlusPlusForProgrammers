//
//  main.cpp
//  4.22
//
//  Created by Ibrahimov Sabuhi on 8/15/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int row = 10;
    while ( row >= 1 )  {
    unsigned int column = 1; // set column to 1 as iteration begins
    while ( column <= 10 )  {
    cout << ( row % 2 ? "<" : ">" ); // output
    ++column;
    } // end inner while
     
    --row;
    cout << endl;
    } // end outer while
}
