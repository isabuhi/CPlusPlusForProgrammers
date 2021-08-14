//
//  Gradebook.hpp
//  Class_Gradebook
//
//  Created by Sabuhi Ibrahimov on 20.02.21.
//

#include <string>
#include <array>

class Gradebook
{
public:
    static const size_t students = 10;
    Gradebook(const std::string &, const std::array<int, students> &);
    void setCourseName(const std::string &);
    std::string getCourseName() const;
    void displayMessage() const;
    void processGrades() const;
    int getMinimum() const;
    int getMaximum() const;
    double getAverage() const;
    void outputBarChat() const;
    void outputGrades() const;
private:
    std::string courseName;
    std::array<int, students> grades;
};
