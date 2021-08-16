//
//  main.cpp
//  5.15(GradeBook_Modification)
//
//  Created by Ibrahimov Sabuhi on 10/20/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
#include "GradeBook_Modi.h"
using namespace std;

int main() {
    // insert code here...
    GradeBook myGradeBook{"CS101 C++ Programming"};
    myGradeBook.displayMessage();
    myGradeBook.inputGrade();
    myGradeBook.displayGradeReport();
    myGradeBook.grade_point_average();
}
