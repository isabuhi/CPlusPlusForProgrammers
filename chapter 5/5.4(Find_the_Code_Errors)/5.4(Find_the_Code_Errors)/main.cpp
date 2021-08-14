//
//  main.cpp
//  5.14(Find_the_Code_Errors)
//
//  Created by Ibrahimov Sabuhi on 10/2/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
using namespace std;


int main() {
    // insert code here...
//(a)
    for (unsigned int x = 1; x <= 100; ++x)
        cout << x << endl;
    
//(b) The following code should print whether integer value is odd or even:
    cout << "\n" <<endl;
    
    
    int value = 17;
    
    switch (value % 2) {
        case 1:
            cout << value << " is odd number.";
            break;
            
        case 0:
            cout << value << " is even number.";
    }

//(c) The following code should output the odd integers from 19 to 1:
    cout << "\n" << endl;
    
    for (unsigned int x = 1; x <= 19; x += 2)
        cout << x << endl;
    
//(d) The following code should output the even integers from 2 to 100:
    cout << "\n" << endl;
    
    
    unsigned int counter = 2;
    do
    {
    cout << counter << endl; counter += 2;
    } while ( counter <= 100 );
    
    
    cout << "\n" <<endl;
}
