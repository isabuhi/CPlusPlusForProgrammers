//
//  main.cpp
//  7.32(Find_the_Minimum_Value_in_an_array)
//
//  Created by Sabuhi Ibrahimov on 03.05.21.
//

#include <iostream>
#include <array>

using namespace std;
const size_t SIZE = 9;
int recursiveMinimum (array<int, SIZE> numbers, size_t start, size_t end){
    if(start == end){
        return numbers[start];
    }
    if(numbers[start] < numbers[start+1])
        numbers[start+1] = numbers[start];
    
    return recursiveMinimum(numbers, ++start, end);

}
int main() {
    array<int, SIZE> number = {23, 55, 4, 9 , 1, 3,55, 43, 6};
    for (int b:number)
        cout << b << " ";
    cout << endl;
    cout << "Smallest number: " <<recursiveMinimum(number, 0, SIZE - 1) << endl;
    
    
}
