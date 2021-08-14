//
//  main.cpp
//  7.19(Converting_vector_Example_of_Section_7.10_to_array)
//
//  Created by Sabuhi Ibrahimov on 09.03.21.
//

#include <iostream>
#include <iomanip>
#include <array>
#include <stdexcept>
using namespace std;


const size_t arraySize = 3;

void outputArray(array<int, arraySize> &);
void inputArray(array<int, arraySize> &);


int main() {
    array<int, arraySize> integers1={};
    array<int, arraySize> integers2={};
    
    cout << "Size of array integers1 is " << integers1.size()
    << "\narray after initialization:" << endl;
    outputArray( integers1 );
    
    cout << "Size of array integers2 is " << integers2.size()
    << "\narray after initialization:" << endl;
    outputArray( integers2 );
    
    cout << "\nEnter 6 integers:" << endl;
    inputArray( integers1 );
    inputArray( integers2 );
    
    cout << "\nAfter input, the arrays contain:\n"
    << "integers1:" << endl;
    outputArray( integers1 );
    cout << "integers2:" << endl;
    outputArray( integers2 );
    
    cout << "\nEvaluating: integers1 != integers2" << endl;
    
    if (integers1 != integers2)
        cout << "integers1 and integers2 are not equal" <<endl;
    
    
    array< int, arraySize > integers3( integers1 );
    cout << "\nSize of array integers3 is " << integers3.size()
    << "\narray after initialization:" << endl;
    outputArray( integers3 );
    
    cout << "\nAssigning integers2 to integers1:" << endl;
    integers1 = integers2; // assign integers2 to integers1
    
    cout << "integers1:" << endl;
    outputArray( integers1 );
    cout << "integers2:" << endl;
    outputArray( integers2 );
    
    cout << "\nEvaluating: integers1 == integers2" << endl;
    
     if ( integers1 == integers2 )
     cout << "integers1 and integers2 are equal" << endl;
    
    cout << "\nintegers1[1] is " << integers1[ 1 ];
    
    cout << "\n\nAssigning 1000 to integers1[5]" << endl;
    integers1[ 1 ] = 1000;
    cout << "integers1:" << endl;
    outputArray( integers1 );
    
    try {
        cout << "Atempting to display integers1.at( 15 )" << endl;
        cout << integers1.at(1) << endl;
    } catch (out_of_range &ex) {
        cerr << "An exception occurred: " << ex.what() << endl;
    }
    cout << "\nCurrent integers3 size is: " << integers3.size() << endl;
        integers3.at(arraySize - 1) = 1000; // add 1000 to the end of the array
        cout << "New integers3 size is: " << integers3.size() << endl;
        cout << "integers3 now contains: ";
        outputArray(integers3);
    
}



void outputArray(array<int, arraySize> &array)
{
    for (int item:array)
        cout << item << " ";
    
    cout << endl;
}


void inputArray(array<int, arraySize> &array)
{
    for (int &item:array)
        cin >> item;
}
