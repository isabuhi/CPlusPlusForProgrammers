#include <iostream>
using namespace std;

int main () {
    int x = 0;
    
    cout << "Enter a five digit integer: ";
    cin >> x;
    cout << x/10000 << "   " << x%10000/1000 << "   " << x%10000%1000/100 << "   " << x%10000%1000%100/10 << "   " << x%10000%1000%100%10 << "\n";
}
