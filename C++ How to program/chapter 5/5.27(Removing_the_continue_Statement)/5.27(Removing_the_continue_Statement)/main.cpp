//
//  main.cpp
//  5.27(Removing_the_continue_Statement)
//
//  Created by Ibrahimov Sabuhi on 10/24/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {

    for (unsigned int count = 1; count <= 10; ++count){
        if ( count != 5 ){
            cout << count << " ";
        }
    }
    cout << "\nUsed continue to skip printing 5" << endl;
}

