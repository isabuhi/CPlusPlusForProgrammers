//
//  main.cpp
//  6.50(Pass-by-Value_vs._Pass-by-Reference)
//
//  Created by Sabuhi Ibrahimov on 14.02.21.
//

#include <iostream>
int tripleByValue (int count){
    count = count * count * count;
    return count;
}
void tripleByReference (int& count){
    count = count * count * count;
}
int main() {
    int x = 5;
    std::cout << tripleByValue(x) << " " << x;
    tripleByReference(x);
    std::cout<<"\n" << x;
}
