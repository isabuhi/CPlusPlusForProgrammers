//
//  Gradebook_2.hpp
//  Class_Gradebook_2
//
//  Created by Sabuhi Ibrahimov on 23.02.21.
//

#include <string>
#include <array>

class Gradebook
{
public:
    static const size_t students = 10;
    static const size_t tests = 3;
    Gradebook(const std::string &, const std::array<std::array<int, tests>, students> &);
    void setCourseName(const std::string &);
    std::string getCourseName() const;
    void displayMessage() const;
    void processGrades() const;
    int getMinimum() const;
    int getMaximum() const;
    double getAverage(const std::array<int, tests> &) const;
    void outputBarChat() const;
    void outputGrades() const;
private:
    std::string courseName;
    std::array<std::array<int, tests>, students> grades;
};

