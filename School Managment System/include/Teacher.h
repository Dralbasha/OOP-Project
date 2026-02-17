#ifndef TEACHER_H
#define TEACHER_H
#include <iostream>
#include <Person.h>
using namespace std;


class Teacher:public Person
{
private:

    string subjectSpecialization;
    float salary;
    //=====================================
public:
    Teacher()
    {

    }
    Teacher(string name,int age,string gender,
            string address,string phoneNumber,string email,int id,string subjectSpecialization,float salary)
    {
        this->name= name;
        this->age= age;
        this->gender= gender;
        this->address= address;
        this->phoneNumber= phoneNumber;
        this->email =email;
        this->id =id;
        this->subjectSpecialization =subjectSpecialization;
        this->salary =salary;

    }
    //=====================================================
    void setSubjectSpecialization(string subjectSpecialization)
    {
        this-> subjectSpecialization= subjectSpecialization;
    }
    void setSalary(float salary)
    {
        this->salary = salary;
    }
    //======================================================
    string getSubjectSpecialization()
    {
        return subjectSpecialization;
    }
    float getSalary ()
    {
        return salary;
    }
    //========================================
    void print()
    {
        Person::print();
        cout<<"SUBJECT SECIALIZATION : "<<subjectSpecialization<<endl;
        cout<<"SALARY : "<<salary<<endl;
    }
    void information()
    {
        Person::information();
        cout<<"PLZ ENTER YOUR SUBJECT SECIALIZATION : "<<endl;
        cin>>subjectSpecialization;
        cout<<"PLZ ENTER YOUR SALARY : "<<endl;
        while(true)
        {
            cin >> salary;

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







    virtual ~Teacher() {}


};

#endif // TEACHER_H
