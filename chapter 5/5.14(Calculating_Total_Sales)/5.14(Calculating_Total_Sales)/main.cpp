//
//  main.cpp
//  5.14(Calculating_Total_Sales)
//
//  Created by Ibrahimov Sabuhi on 10/19/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    double a = 0;
    int b = 0;
    int nP = 1;
    while ( nP != 0){
        cout << "Enter product number: ";
        cin >> nP;
        switch (nP) {
            case 1:
                a = 2.98;
                break;
            case 2:
                a = 4.50;
                break;
            case 3:
                a = 9.98;
                break;
            case 4:
                a = 4.49;
                break;
            case 5:
                a = 6.87;
                break;
                
            default:
                a = 0;
                cout << "^Invalid product number\n\n";
                break;
        }
        if (nP != 0){
            if (a != 0){
                cout << "Enter quantity sold: ";
                cin >> b;
                cout << "Total retail value: " << a * b << "\n" << endl;
                
            }
        }
    }
}
