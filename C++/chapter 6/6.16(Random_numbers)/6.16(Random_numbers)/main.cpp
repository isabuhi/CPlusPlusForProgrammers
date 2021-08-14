//
//  main.cpp
//  6.16(Random_numbers)
//
//  Created by Sabuhi Ibrahimov on 19.01.21.
//

#include <iostream>
#include <cstdlib>
using namespace std;


int main() {
    cout << "(1 <= n <= 2)" << "\n";
    for (unsigned int i = 1; i < 10; ++i){
        int n = 0;
        n = 1 + rand() % 2;
        cout << n << endl;
    }
    cout << "\n";
    
    cout << "(1 <= n <= 100)" << "\n";
    for (unsigned int i = 1; i < 20; ++i){
        int n = 0;
        n = 1 + rand() % 100;
        cout << n << endl;
    }
    cout << "\n";
    
    cout << "(0 <= n <= 9)" << "\n";
    for (unsigned int i = 1; i < 10; ++i){
        int n = 0;
        n = rand() % 10;
        cout << n << endl;
    }
    cout << "\n";
    
    cout << "(1000 <= n <= 1112)" << "\n";
    for (unsigned int i = 1; i < 20; ++i){
        int n = 0;
        n = 1000 + rand() % 113;
        cout << n << endl;
    }
    cout << "\n";
    
    cout << "(-1 <= n <= 1)" << "\n";
    for (unsigned int i = 1; i < 30; ++i){
        int n = 0;
        n = -1 + rand() % 3;
        cout << n << endl;
    }
    cout << "\n";
    
    cout << "(-3 <= n <= 11)" << "\n";
    for (unsigned int i = 1; i < 20; ++i){
        int n = 0;
        n = -3 + rand() % 15;
        cout << n << endl;
    }
    cout << "\n";
    cout << endl;
}
