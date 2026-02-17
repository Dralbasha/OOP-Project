#ifndef SCHOOL_H
#define SCHOOL_H
#include <iostream>
#include <Person.h>
#include <Student.h>
#include <Teacher.h>
#include <Staff.h>
#include <Course.h>
#include <ClassRoom.h>
using namespace std;


class School
{
private:
    string schoolName;
    string address;
    string principalName;
    Student students[1000];
    Teacher teachers[50];
    Staff staffMembers[50];
    Course courses[100];
    ClassRoom classrooms[100];
    int studentCounter=0;
    int teacherCounter=0;
    int staffCounter=0;
    int courseCounter=0;
    int classRoomCounter=0;

public:
    School()
    {

    }
    void addStudent(Student s)
    {
        students[studentCounter]=s;
        studentCounter++;
    }
    void addTeacher(Teacher t)
    {
        teachers[teacherCounter]=t;
        teacherCounter++;
    }
    void addStaff(Staff st)
    {
        staffMembers[staffCounter]=st;
        staffCounter++;
    }
    void addCourse(Course c)
    {
        courses[courseCounter]=c;
        courseCounter++;
    }
    void addClassRoom(ClassRoom cl)
    {
        classrooms[classRoomCounter]=cl;
        classRoomCounter++;
    }

    void printAllStudents()
    {
        for(int i=0; i<studentCounter; i++)
        {
            students[i].print();
            cout<<endl;
        }
    }
    void printAllTeachers()
    {
        for(int i=0; i<teacherCounter; i++)
        {
            teachers[i].print();
            cout<<endl;
        }
    }
    void printAllStaff()
    {
        for(int i=0; i<staffCounter; i++)
        {
            staffMembers[i].print();
            cout<<endl;
        }
    }
    void printAllCourses()
    {
        for(int i=0; i<courseCounter; i++)
        {
            courses[i].print();
            cout<<endl;
        }
    }
    void printAllClasRooms()
    {
        for(int i=0; i<classRoomCounter; i++)
        {
            classrooms[i].print();
            cout<<endl;
        }
    }
    void printStudentCounter()
    {
        cout<<"NUMBER OF STUDENTS IS : "<<studentCounter<<endl;
        cout<<endl;
    }

};

#endif // SCHOOL_H
