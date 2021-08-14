//
//  main.cpp
//  Class_Gradebook
//
//  Created by Sabuhi Ibrahimov on 20.02.21.
//

#include<iostream>
#include "Gradebook.hpp"

using namespace std;
  

  
int main() {
    
    const array<int, Gradebook::students> grades = {8, 28, 34, 40, 53, 68, 75, 81, 96, 100};
    string courseName = "CS101 Introduction to C++ Programming";
    Gradebook gradeBook(courseName, grades);
    gradeBook.displayMessage();
    gradeBook.processGrades();
    
    
}
