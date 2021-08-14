//
//  main.cpp
//  5.26(What_Does_This_Code_Do?)
//
//  Created by Ibrahimov Sabuhi on 10/23/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    for ( unsigned int i = 1; i <= 5; ++i ) {
        for ( unsigned int j = 1; j <= 3; ++j ) {
            for ( unsigned int k = 1; k <= 4; ++k )
                cout << '*';
            cout << endl;
        } // end inner for
    }
    cout << endl;
}
