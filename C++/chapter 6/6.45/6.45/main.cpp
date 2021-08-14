//
//  main.cpp
//  6.45
//
//  Created by Sabuhi Ibrahimov on 12.02.21.
//

#include <iostream>
using namespace std;

int mystery(int, int);

int main(){
    int x = 0;
    int y = 0;
    cout << "Enter two integers: ";
    cin>>x>>y;
    cout << "The result is " << mystery( x, y ) << endl;
}


int mystery( int a, int b ) {
    if (b > 0){
        if ( 1 == b ) // base case
            return a;
        else // recursion step
        return a + mystery( a, b - 1 );
    }
    else{
        if ( -1 == b ) // base case
            return -a;
        else // recursion step
        return -a + mystery( a, b + 1 );
    }
    
}
