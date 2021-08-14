
class GradeBook
{
public:
    explicit GradeBook(string, string);
    void setCourseName(string);
    void setCourseInstructorName(string);
    string getCourseName()const;
    string getCourseInstructorName()const;
    void displayMessage()const;
private:
    string courseName;
    string courseInstructorName;
};
