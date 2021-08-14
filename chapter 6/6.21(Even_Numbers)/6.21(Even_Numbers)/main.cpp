//
//  main.cpp
//  6.21(Even_Numbers)
//
//  Created by Sabuhi Ibrahimov on 23.01.21.
//

#include <iostream>
#include <iomanip>
using namespace std;

bool isEven(int i){
    return (i % 2 == 0);
}

int main() {
    int i = 0;
    cout << "Enter integer: ";
    cin >> i;
    while (i != EOF){
        cout << isEven(i) << endl;
        cout << "Enter integer: ";
        cin >> i;
    }
    
}
