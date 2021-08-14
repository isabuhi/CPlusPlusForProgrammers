//
//  main.cpp
//  4.18(Tabular_Output)
//
//  Created by Ibrahimov Sabuhi on 8/14/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    // insert code here...
    int counter = 1;
    cout << "N\t\t"<<"10*N\t"<<"100*N\t"<<"1000*N\n"<<endl;
    while (counter <= 5){
        cout << counter<<"\t\t"<<10*counter<<"\t\t"<<100*counter<<"\t\t"<<1000*counter<<"\n";
        ++counter;
    }
    cout<<endl;
}

