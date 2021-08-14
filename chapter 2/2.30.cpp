#include <iostream>
using namespace std;



int main () {
    int a = 0;
    int b = 0;
    int BMI = 0;
    cout << "Enter your weight in kg: ";
    cin >> a;
    cout << "Enter your height in m: ";
    cin >> b;
    BMI = a / b / b;
    cout << "BMI value: " << BMI << "\nUnderweight: less than 18.5\nnormal: between 18.5 and 24.9\noverweight: between 25 and 29.9\nobese: 30 or greater\n";

}

