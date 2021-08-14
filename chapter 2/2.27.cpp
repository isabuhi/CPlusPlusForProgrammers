#include <iostream>
using namespace std;

int main () {
    char a = 0;
    
    cout << "Enter character: ";
    cin >> a;
    
    cout << static_cast<int>(a) << endl;
}
