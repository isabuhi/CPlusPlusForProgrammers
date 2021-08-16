#include <iostream>
using namespace std;

int main () {
	cout << "Enter two integers: ";
	int x = 0;
	int y = 0;
     
    cin >> x >> y;

	if ( x > y ) {
       cout << "is larger. " << x << endl;
	};
	if ( y > x ) {
       cout << "is larger. " << y << endl;
	};
	if ( y == x ) {
       cout << "These numbers are equal." << endl;
	};
}