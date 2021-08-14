//
//  GradeBook_Modi.cpp
//  5.15(GradeBook_Modification)
//
//  Created by Ibrahimov Sabuhi on 10/20/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
#include "GradeBook_Modi.h"
using namespace std;


GradeBook::GradeBook(string name)
{
    setCourseName(name);
}
void GradeBook::setCourseName(string name) {
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

void GradeBook::displayMessage() const {
    cout << "Welcome to the grade book for\n" << getCourseName() << "!\n"
    << endl;
}

void GradeBook::inputGrade() {
    int grade;
    
    cout << "Enter the letter grades." << endl
    << "Enter the EOF character to end input." << endl;
    
    while ((grade = cin.get()) != EOF){
        switch (grade) {
            case 'A':
            case 'a':
                ++aCount;
                break;
                
            case 'B':
            case 'b':
                ++bCount;
                break;
                
            case 'C':
            case 'c':
                ++cCount;
                break;
                
            case 'D':
            case 'd':
                ++dCount;
                break;
                
            case 'F':
            case 'f':
                ++fCount;
                break;
                
            case '\n':
            case '\t':
            case ' ':
                break;
                
            default: // catch all other characters
            cout << "Incorrect letter grade entered."
            << " Enter a new grade." << endl;
                break;
        }
    }
}

void GradeBook::displayGradeReport() const {
    cout << "\n\nNumber of students who received each letter grade:"
    << "\nA: " << aCount
    << "\nB: " << bCount
    << "\nC: " << cCount
    << "\nD: " << dCount
    << "\nF: " << fCount
    << endl;
}

void GradeBook::grade_point_average() const {
    cout << "\n\nGrade point average: " << (aCount * 4 + bCount * 3 + cCount * 2 + dCount * 1)/5 << endl;
}
