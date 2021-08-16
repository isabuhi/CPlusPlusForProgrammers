//
//  Gradebook.cpp
//  Class_Gradebook
//
//  Created by Sabuhi Ibrahimov on 20.02.21.
//

#include <iostream>
#include <iomanip>
#include "Gradebook.hpp"

using namespace::std;

Gradebook::Gradebook(const string &name, const array<int, students> &gradesArray)
:courseName(name), grades(gradesArray)
{}
void Gradebook::setCourseName(const string &name)
{
    courseName = name;
}

string Gradebook::getCourseName() const
{
    return courseName;
}

void Gradebook::displayMessage() const
{
    cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
}

void Gradebook::processGrades() const
{
    outputGrades();
    
    cout << setprecision(2) << fixed;
    cout << "\nClass average is " << getAverage() << endl;
    
    cout << "Lowest grade is " << getMinimum() << "\nHighest grade is "
    << getMaximum() << endl;
    
    outputBarChat();
}

int Gradebook::getMinimum() const
{
    int lowest = 100;
    for (int grade : grades){
        if(grade < lowest)
            lowest = grade;
    }
    return lowest;
}

int Gradebook::getMaximum() const
{
    int highest = 0;
    for (int grade : grades){
        if(grade > highest)
            highest = grade;
    }
    return highest;
}

double Gradebook::getAverage() const
{
    int total = 0;
    for (int grade : grades){
        total += grade;
    }
    return static_cast<double>(total)/grades.size();
}

void Gradebook::outputBarChat() const
{
    const size_t frequencySize = 11;
    array<unsigned int , frequencySize> frequency = {};
    
    for (int grade: grades)
        ++frequency[grade / 10];
    
    for (size_t count = 0; count < frequencySize; ++count){
        if (0==count) cout << "  0-9: ";
        else if ( 10 == count ) cout << "  100: ";
        else
        cout << count * 10 <<"-"<<(count*10)+9<<": ";
        for ( unsigned int stars = 0; stars < frequency[ count ]; ++stars ) cout << '*';
        cout << endl;
    }
   
}
void Gradebook::outputGrades() const {
    cout << "\nThe grades are:\n\n";
    for ( size_t student = 0; student < grades.size(); ++student )
    cout << "Student " << setw( 2 ) << student + 1 << ": " << setw( 3 )
             << grades[ student ] << endl;
}
