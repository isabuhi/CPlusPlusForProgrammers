#include <iostream>
using namespace std;

int main () {
	int x = 0;
	int y = 0;
	int z = 0;
    
	cout << "Input three different integers: ";
	cin >> x >> y >> z;
	cout << "Sum is " << x + y + z << "\n";
	cout << "Average is " << (x + y + z)/3 << "\n";
	cout << "Product is " << x * y * z << "\n";
	if (x > y)
		if(y > z)
	      cout << "Smallest is " << z << "\n";
	if (x > z) 
		if(z > y)
	      cout << "Smallest is " << y << "\n";
	if (z > y) 
		if(y > x)
	      cout << "Smallest is " << x << "\n";
	if (y > x) 
		if(x > z)
	      cout << "Smallest is " << z << "\n";
	if (z > x) 
		if(x > y)
	      cout << "Smallest is " << y << "\n";
	if (y > z) 
		if(z > x)
	      cout << "Smallest is " << x << "\n";


	if (x < y)
		if(y < z)
	      cout << "Largest is " << z << "\n";
	if (x < z) 
		if(z < y)
	      cout << "Largest is " << y << "\n";
	if (z < y) 
		if(y < x)
	      cout << "Largest is " << x << "\n";
	if (y < x) 
		if(x < z)
	      cout << "Largest is " << z << "\n";
	if (z < x) 
		if(x < y)
	      cout << "Largest is " << y << "\n";
	if (y < z) 
		if(z < x)
	      cout << "Largest is " << x << "\n";

}
