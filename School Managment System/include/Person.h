#ifndef PERSON_H
#define PERSON_H
#include <iostream>

using namespace std;


class Person
{
protected:
    string name;
    int age;
    string gender;
    string address;
    string phoneNumber;
    string email;
    int id;

public:
    Person()
    {

    }

    Person(string name,int age,string gender,
           string address,string phoneNumber,string email,int id)
    {
        this->name= name;
        this->age= age;
        this->gender= gender;
        this->address= address;
        this->phoneNumber= phoneNumber;
        this->email =email;
        this->id =id;
    }

    ~Person()
    {

    }
    //========================
    void setName(string name)
    {
        this-> name=name;
    }
    void setAge(int age)
    {
        this-> age= age;
    }
    void setGender(string gender)
    {
        this-> gender = gender;
    }
    void setAddress(string address)
    {
        this-> address= address;
    }
    void setPhoneNumber(string phoneNumber)
    {
        this-> phoneNumber= phoneNumber;
    }
    void setEmail(string email)
    {
        this->email = email;
    }
    void setId(int id)
    {
        this->id = id;
    }
    //=============================

    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    string getGender()
    {
        return gender;
    }
    string getAddress()
    {
        return address;
    }
    string getPhoneNumber()
    {
        return phoneNumber;
    }
    string getEmail()
    {
        return email;
    }
    int getId()
    {
        return id;
    }
    //===================================
    void print()
    {
        cout<<"NAME : "<<name<<endl;
        cout<<"AGE : "<<age<<endl;
        cout<<"GENDER : "<<gender<<endl;
        cout<<"ADDRESS : "<<address<<endl;
        cout<<"PHNE NUMBER : "<<phoneNumber<<endl;
        cout<<"E-MAIL : "<<email<<endl;
        cout<<"ID : "<<id<<endl;
    }

    void information()
    {
        cout<<"PLZ ENTER YOUR NAME : "<<endl;
        cin>>name;
        cout<<"PLZ ENTER YOUR AGE : "<<endl;
        while(true)
        {
            cin >> age;

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

        cout<<"PLZ ENTER YOUR GENDER : "<<endl;
        cin>>gender;
        cout<<"PLZ ENTER YOUR ADDRESS : "<<endl;
        cin>>address;
        cout<<"PLZ ENTER YOUR PHONE NUMBER : "<<endl;
        cin>>phoneNumber;
        cout<<"PLZ ENTER YOUR EMAIL : "<<endl;
        cin>>email;
        cout<<"PLZ ENTER YOUR ID : "<<endl;
        while(true)
        {
            cin >> id;

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

#endif // PERSON_H
