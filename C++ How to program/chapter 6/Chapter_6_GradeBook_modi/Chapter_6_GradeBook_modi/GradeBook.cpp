//
//  GradeBook.cpp
//  Chapter_6_GradeBook_modi
//
//  Created by Ibrahimov Sabuhi on 10/27/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
#include "GradeBook.h"
#include <cstdlib>
using namespace std;


GradeBook::GradeBook(string name):maximumGrade(0){
    setCourseName(name);
}

void GradeBook::setCourseName(string name){
    if ( name.size() <= 25 )
        courseName = name;
    else
    {
    courseName = name.substr( 0, 25 );
        cerr << "Name \"" << name << "\" exceeds maximum length (25).\n"
    << "Limiting courseName to first 25 characters.\n" << endl;
        
    }

}

string GradeBook::getCourseName() const {
    return courseName;
}


void GradeBook::displayMessage() const
{
    cout << "Welcome to the grade book for\n" << getCourseName() << "!\n"<< endl;
}


void GradeBook::inputGrade() {
    int grade1;
    int grade2;
    int grade3;
    
    cout << "Enter three integer grades: ";
    cin >> grade1 >> grade2 >> grade3;
    
    maximumGrade = maximum(grade1, grade2, grade3);
}

int GradeBook::maximum(int x, int y, int z) const {
    int maximumValue = x;
    if (y > maximumValue)
        maximumValue = y;
    if (z > maximumValue)
        maximumValue = z;
    return maximumValue;
}
void GradeBook::displayGradeReport() const{
    cout << "Maximum of grades entered: " << maximumGrade << endl;  
}
