//
//  GradeBook.h
//  Chapter_6_GradeBook_modi
//
//  Created by Ibrahimov Sabuhi on 10/27/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>

class GradeBook
{
public:
    explicit GradeBook(std::string);
    void setCourseName(std::string);
    std::string getCourseName() const;
    void displayMessage() const;
    void inputGrade();
    void displayGradeReport() const;
    int maximum(int, int, int) const;
private:
    std::string courseName;
    int maximumGrade;
};
