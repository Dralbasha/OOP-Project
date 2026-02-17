#include <iostream>
#include <Person.h>
#include <Student.h>
#include <Teacher.h>
#include <Staff.h>
#include <Course.h>
#include <School.h>
#include <ClassRoom.h>


using namespace std;

int main()
{
    School sh;
    int n;

    do
    {


        cout<<"SCHOOL MANAGMENT SYSTEM : "<<endl;
        cout<<"======================================="<<endl;
        cout<<"PRESS 0 TO EXIT"<<endl;
        cout<<"PRESS 1 TO ADD STUDENT"<<endl;
        cout<<"PRESS 2 TO ADD TEACHER"<<endl;
        cout<<"PRESS 3 TO ADD STAFF"<<endl;
        cout<<"PRESS 4 TO ADD COURSE"<<endl;
        cout<<"PRESS 5 TO ADD CLASS ROOMS"<<endl;
        cout<<"PRESS 6 TO PRINT ALL STUDENTS"<<endl;
        cout<<"PRESS 7 TO PRINT ALL TEACHERS"<<endl;
        cout<<"PRESS 8 TO PRINT ALL STAFF"<<endl;
        cout<<"PRESS 9 TO PRINT ALL COURSES"<<endl;
        cout<<"PRESS 10 TO PRINT ALL CLASSROOMS"<<endl;
        cout<<"PRESS 11 TO PRINT NO. OF STUDENTS"<<endl;
        cout<<"======================================="<<endl;
        cout<<"YOUR CHOICE IS : "<<endl;

        cin>>n;
        system("cls");
        switch(n)
        {
        case 0:
            break;
        case 1:
        {
            Student s;
            s.information();
            sh.addStudent(Student(s));
            break;
        }

        case 2:
        {
            Teacher t;
            t.information();
            sh.addTeacher(Teacher(t));
            break;
        }
        case 3:
        {
            Staff st;
            st.information();
            sh.addStaff(Staff(st));
            break;
        }
        case 4:
        {
            Course c;
            c.information();
            sh.addCourse(Course(c));
            break;
        }
        case 5:
        {
            ClassRoom cl;
            cl.information();
            sh.addClassRoom(ClassRoom(cl));
            break;
        }
        case 6:
        {
            sh.printAllStudents();
            break;
        }
        case 7:
        {
            sh.printAllTeachers();
            break;
        }
        case 8:
        {
            sh.printAllStaff();
            break;
        }
        case 9:
        {
            sh.printAllCourses();
            break;
        }
        case 10:
        {
            sh.printAllClasRooms();
            break;
        }
        case 11:
        {
            sh.printStudentCounter();
            break;
        }
        default:
        {
            cout<<"invalid input"<<endl;
        }

        }


    }
    while(n !=0);

    return 0;

}

