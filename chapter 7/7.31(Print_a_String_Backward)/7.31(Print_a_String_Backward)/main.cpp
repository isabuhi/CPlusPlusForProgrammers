//
//  main.cpp
//  7.31(Print_a_String_Backward)
//
//  Created by Sabuhi Ibrahimov on 03.05.21.
//

#include <iostream>
using namespace std;

void stringReverse(string a, size_t start){
    if (start == 0){
        cout << a[0] << endl;
        return;
    }
    else{
    cout << a[start];
        stringReverse(a, --start);
    }
}
int main() {
    string b = "asdfghjjk3";
    size_t c = b.size();
    
    stringReverse(b, c - 1);
}
