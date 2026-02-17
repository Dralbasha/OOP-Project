#ifndef STAFF_H
#define STAFF_H
#include <iostream>
#include <Person.h>
using namespace std;


class Staff:public Person
{
private:
    string role;
    float Salary;
public:
    Staff()
    {

    }

    Staff(string name,int age,string gender,
          string address,string phoneNumber,string email,int id,string role,float Salary)
    {
        this->name= name;
        this->age= age;
        this->gender= gender;
        this->address= address;
        this->phoneNumber= phoneNumber;
        this->email =email;
        this->id =id;
        this->role =role;
        this->Salary =Salary;

    }
    //=====================================================
    void setRole(string role)
    {
        this-> role= role;
    }
    void setSalary(float Salary)
    {
        this->Salary = Salary;
    }
    //======================================================
    string getRole()
    {
        return role;
    }
    float getSalary ()
    {
        return Salary;
    }
    //========================================
    void print()
    {
        Person::print();
        cout<<"ROLE : "<<role<<endl;
        cout<<"SALARY : "<<Salary<<endl;
    }
    void information()
    {
        Person::information();
        cout<<"PLZ ENTER YOUR ROLE : "<<endl;
        cin>>role;
        cout<<"PLZ ENTER YOUR SALARY : "<<endl;
        while(true)
        {
            cin >> Salary;

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









};

#endif // STAFF_H
