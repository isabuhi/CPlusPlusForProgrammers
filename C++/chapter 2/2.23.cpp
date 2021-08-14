#include <iostream>
using namespace std;

int main () {
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    
    cout << "Enter 5 integers: ";
    cin >> a >> b >> c >> d >> e;
    
    if (b > a && c > a && d > a && e > a)
        cout << "smallest is " << a << endl;
    if (a > b && c > b && d > b && e > b)
        cout << "smallest is " << b << endl;
    if (a > c && b > c && d > c && e > c)
        cout << "smallest is " << c << endl;
    if (a > d && b > d && c > d && e > d)
        cout << "smallest is " << d << endl;
    if (a > e && b > e && c > e && d > e)
        cout << "smallest is " << e << endl;
    
    
    if (b < a && c < a && d > a && e > a)
        cout << "biggest is " << a << endl;
    if (a < b && c < b && d < b && e < b)
        cout << "biggest is " << b << endl;
    if (a < c && b < c && d < c && e < c)
        cout << "biggest is " << c << endl;
    if (a < d && b < d && c < d && e < d)
        cout << "biggest is " << d << endl;
    if (a < e && b < e && c < e && d < e)
        cout << "biggest is " << e << endl;
}
