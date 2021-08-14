#include <iostream>
 // include definition of class GradeBook

using namespace std;
#include "3_11.hpp"

// function main begins program execution
 int main()
 {
     string newCourseName;
     
 // create two GradeBook objects
 GradeBook gradeBook1( "CS101 Introduction to C++ Programming","John Travolta" );
 GradeBook gradeBook2( "CS102 Data Structures in C++","Leile Strasburg" );
     
     
 cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
 << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
 << "\n\ngradeBook1 created course instructor name: " << gradeBook1.getCourseInstructorName()
 << "\ngradeBook2 created course instructor name:" << gradeBook2.getCourseInstructorName()
 << endl;
 
 cout<<"\nCreate new course name for gradeBook1: "<<endl;
 getline(cin, newCourseName);
 gradeBook1.setCourseName(newCourseName);
 
 
 cout<<"Create new course name for gradeBook2: "<<endl;
 getline(cin, newCourseName);
 gradeBook2.setCourseName(newCourseName);
 
 cout<<"Create new course instructor name for gradeBook1: "<<endl;
 getline(cin, newCourseName);
 gradeBook1.setCourseInstructorName(newCourseName);
 
 
 cout<<"Create new course instructor name for gradeBook2: "<<endl;
 getline(cin, newCourseName);
 gradeBook2.setCourseInstructorName(newCourseName);
 
 // display initial value of courseName for each GradeBook
 cout << "\nadNew gradeBook1 created for course: " << gradeBook1.getCourseName()
 << "\nNew gradeBook2 created for course: " << gradeBook2.getCourseName()
 << "\n\nNew gradeBook1 created course instructor name: " << gradeBook1.getCourseInstructorName()
 << "\nNew gradeBook2 created course instructor name:" << gradeBook2.getCourseInstructorName()
 << endl;
 }//endmain
