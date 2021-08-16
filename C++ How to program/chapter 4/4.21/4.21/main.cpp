//
//  main.cpp
//  4.21
//
//  Created by Ibrahimov Sabuhi on 8/15/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int count = 1;
    // insert code here...
    while ( count <= 10 )  {
          // output line of text
    cout << ( count % 2 ? "****" : "++++++++" ) << endl;
          ++count; // increment count
       } // end while
}
