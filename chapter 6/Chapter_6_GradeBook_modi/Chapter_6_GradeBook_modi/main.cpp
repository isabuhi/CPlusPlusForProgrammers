//
//  main.cpp
//  Chapter_6_GradeBook_modi
//
//  Created by Ibrahimov Sabuhi on 10/27/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include "GradeBook.h"
int main() {
    GradeBook myGradeBook{"CS101 C++ Programming"};
    myGradeBook.displayMessage();
    myGradeBook.inputGrade();
    myGradeBook.displayGradeReport();
}
