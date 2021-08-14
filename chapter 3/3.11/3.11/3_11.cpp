//
//  3_11.cpp
//  3.11
//
//  Created by Ibrahimov Sabuhi on 7/29/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//
#include<iostream>
using namespace std;
#include "3_11.hpp"


GradeBook::GradeBook(string name, string name2)
:courseName(name), courseInstructorName(name2)
{  }
void GradeBook::setCourseName(string name) {
    courseName = name;
}
void GradeBook::setCourseInstructorName(string name) {
    courseInstructorName = name;
}
string GradeBook::getCourseName() const {
    return courseName;
}
string GradeBook::getCourseInstructorName() const {
    return courseInstructorName;
}
void GradeBook::displayMessage() const {
    cout << "Welcome to the grade book for\n" << getCourseName()<<"!\n"<<"This course is presented by: "<<getCourseInstructorName()
    << "!" << endl;
}
