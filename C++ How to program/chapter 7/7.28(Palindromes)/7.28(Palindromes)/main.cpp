//
//  main.cpp
//  7.28(Palindromes)
//
//  Created by Sabuhi Ibrahimov on 26.04.21.
//

#include <iostream>
using namespace std;



bool testPalindrome(string text, size_t i = 0) {
    if(text.size() % 2 != 1){
        return false;
    }
    else if (text[i] != text[text.size() - 1 - i]){
        return false;
    }
    else if( i == text.size() - 1 - i)
        return true;
    
    else{
        ++i;
        return testPalindrome(text, i);
    }
}


int main() {
    string d = "xaable was i ere i saw elbaat";
    
    cout << (testPalindrome(d)? "true" : "false") << endl;
}
