#ifndef COURSE_H
#define COURSE_H
#include <iostream>
using namespace std;

class Course
{
private:
    string courseCode;
    string courseName;
    string teacherName;

public:
    Course()
    {

    }
    Course(string courseCode, string courseName, string teacherName)
    {
        this->courseCode=courseCode;
        this->courseName=courseName;
        this->teacherName=teacherName;
    }
    void setCourseCode(string courseCode)
    {
        this->courseCode=courseCode;
    }
    void setCourseName(string courseName)
    {
        this->courseName=courseName;
    }
    void setTeacherNmae(string teacherName)
    {
        this->teacherName=teacherName;
    }
    //========================================
    string getCourseCode()
    {
        return courseCode;
    }
    string getCourseName ()
    {
        return courseName;
    }
    string getTeacherNmae ()
    {
        return teacherName;
    }
    void information()
    {
        cout<<"PLZ ENTER YOUR COURSE CODE : "<<endl;
        cin>>courseCode;
        cout<<"PLZ ENTER YOUR COURSE NAME : "<<endl;
        cin>>courseName;
        cout<<"PLZ ENTER YOUR TEACHER NAME : "<<endl;
        cin>>teacherName;
    }
    void print()
    {
        cout<<"COURSE CODE : "<<courseCode<<endl;
        cout<<"COURSE NAME : "<<courseName<<endl;
        cout<<"TEACHER NAME : "<<teacherName<<endl;
    }

};

#endif // COURSE_H
