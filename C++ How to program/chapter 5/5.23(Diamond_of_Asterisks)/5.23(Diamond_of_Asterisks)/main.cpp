//
//  main.cpp
//  5.23(Diamond_of_Asterisks)
//
//  Created by Ibrahimov Sabuhi on 10/22/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int taskB = 1;
    while (taskB != -1){
         cout << "Enter 1 for continuation or -1 for end task: ";
         cin >> taskB;
         if (taskB != -1){
            int x1 = 1;
            int y1 = 1;
            int z1 = 1;
            cout << "\nEnter odd integer for diamond shape size: ";
            cin >> z1;
            
            for ( int z = z1 ; z >= 1; --z){
                if ((z - x1)/2 >= 0){
                    for (int x = 1; x <= (z - x1)/2; ++x)
                        cout << " ";
                    for (int y = 1; y <= y1; ++y)
                        cout << "*";
                    if ((z - x1)/2 == 0)
                        y1 -= 2;
                    else
                        y1 += 2;
                }
                else {
                    for (int x = -1; x >= (z - x1)/2; --x )
                        cout << " ";
                    for (int y = 1; y <= y1; ++y)
                        cout << "*";
                    y1 -= 2;
                }
                ++x1;
                cout << "\n";
            }
        }
    }
}
