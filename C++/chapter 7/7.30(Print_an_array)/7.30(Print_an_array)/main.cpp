//
//  main.cpp
//  7.30(Print_an_array)
//
//  Created by Sabuhi Ibrahimov on 01.05.21.
//

#include <iostream>
#include <array>
using namespace std;
const size_t SIZE = 8;

void printArray(array < int , SIZE> array, size_t start, size_t end ){
    if (start == end){
        cout << array[end] << endl;
        return;
    }
    else{
    cout << array[start] << " ";
    printArray(array, ++start, end);
    }
}
int main() {
    array < int , SIZE> arrayTest = {3,4,5,2,6,3,5,6};
    printArray(arrayTest, 0, SIZE-1);
}
