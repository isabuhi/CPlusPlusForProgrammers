//
//  GradeBook_Modi.h
//  5.15(GradeBook_Modification)
//
//  Created by Ibrahimov Sabuhi on 10/20/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <string>

class GradeBook {
private:
    int aCount, bCount, cCount, dCount, fCount = 0;
    std::string courseName;
    
public:
    explicit GradeBook(std::string);
    void setCourseName(std::string);
    std::string getCourseName() const;
    void displayMessage() const;
    void inputGrade();
    void displayGradeReport() const;
    void grade_point_average() const;
};
