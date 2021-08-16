//
//  Gradebook_2.cpp
//  Class_Gradebook_2
//
//  Created by Sabuhi Ibrahimov on 23.02.21.
//

#include <iostream>
#include <iomanip>
#include "Gradebook_2.hpp"

using namespace::std;

Gradebook::Gradebook(const string &name, const std::array<std::array<int, tests>, students> &gradesArray)
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
    
    cout << "\nLowest grade is " << getMinimum() << "\nHighest grade is "
    << getMaximum() << "\n" << endl;
    
    outputBarChat();
}

int Gradebook::getMinimum() const
{
    int lowest = 100;
    for (auto const &grade : grades){
        for(auto const &items : grade){
            if(items < lowest)
            lowest = items;
        }
    }
    return lowest;
}

int Gradebook::getMaximum() const
{
    int highest = 0;
    for (auto const &grade : grades){
        for (auto const &items : grade){
            if(items > highest)
               highest = items;
        }
    }
    return highest;
}

double Gradebook::getAverage(const array<int, tests> &grades) const
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
    
    for (auto grade: grades){
        for (auto items : grade)
        ++frequency[items / 10];
    }
        
    
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
    cout << "            ";
    for ( size_t test = 0; test < tests; ++test ) cout<<"Test "<<test+1<<"  ";
    cout << "Average" << endl;
    for (size_t students = 0; students < grades.size(); ++students){
        cout << "Student " << setw(2) << students + 1;
        for (size_t test = 0; test < grades[students].size(); ++test){
            cout << setw(8) << grades[students][test];
        }
        double average = getAverage(grades[students]);
        cout << setw(9) << setprecision(2) << fixed << average << endl;
    }
}
    

