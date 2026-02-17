#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <Person.h>
using namespace std;


class Student:public Person
{
private:

    string gradeLevel;
    float gpa;
public:
    Student()
    {

    }
    Student(string name,int age,string gender,
            string address,string phoneNumber,string email,int id,string gradeLevel, float gpa)
    {
        this->name= name;
        this->age= age;
        this->gender= gender;
        this->address= address;
        this->phoneNumber= phoneNumber;
        this->email =email;
        this->id =id;

        this->gradeLevel = gradeLevel;
        this->gpa = gpa;
    }

    void setGradelevel(string gradeLevel)
    {
        this-> gradeLevel= gradeLevel;
    }
    void setGpa(float gpa)
    {
        this->gpa = gpa;
    }
    //=============================

    string getGradeLevel()
    {
        return gradeLevel;
    }
    float getGpa ()
    {
        return gpa;
    }
    //==============================
    void print()
    {
        /*cout<<"NAME : "<<name<<endl;
        cout<<"AGE : "<<age<<endl;
        cout<<"GENDER : "<<gender<<endl;
        cout<<"ADDRESS : "<<address<<endl;
        cout<<"PHNE NUMBER : "<<phoneNumber<<endl;
        cout<<"E-MAIL : "<<email<<endl;
        cout<<"ID : "<<id<<endl;*/
        Person::print();
        cout<<"grade level : "<<gradeLevel<<endl;
        cout<<"GPA : "<<gpa<<endl;
    }
    void information()
    {
        Person::information();
        cout<<"PLZ ENTER YOUR GRADE LEVEL : "<<endl;
        cin>>gradeLevel;
        cout<<"PLZ ENTER YOUR GPA : "<<endl;
        while(true)
        {
            cin >> gpa;

            if(cin.fail())
            {
                cin.clear();
                cin.ignore(10000, '\n');
                cout<<"Invalid input. Enter a number: "<<endl;
            }
            else
            {
                break;
            }
        }
    }
    virtual ~Student() {}

protected:


};

#endif // STUDENT_H
