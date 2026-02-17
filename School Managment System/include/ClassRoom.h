#ifndef CLASSROOM_H
#define CLASSROOM_H
#include <iostream>
using namespace std;


class ClassRoom
{
private:
    int roomNumber;
    int capacity;
public:
    ClassRoom()
    {

    }
    ClassRoom(int roomNumber, int capacity)
    {
        this->roomNumber=roomNumber;
        this->capacity=capacity;
    }
    void setRoomNumber(int roomNumber)
    {
        this-> roomNumber = roomNumber;
    }
    void setCapacity(int capacity)
    {
        this-> capacity = capacity;
    }
    //========================================
    int getRoomNumber()
    {
        return roomNumber;
    }
    int getCapacity ()
    {
        return capacity;
    }
    void information()
    {
        cout<<"PLZ ENTER YOUR ROOM NUMBER : "<<endl;
        while(true)
        {
            cin >> roomNumber;

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
        cout<<"PLZ ENTER YOUR CAPACITY : "<<endl;
        while(true)
        {
            cin >> capacity;

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
    void print()
    {
        cout<<"ROOM NUMBER : "<<roomNumber<<endl;
        cout<<"CAPACITY : "<<capacity<<endl;
    }
};

#endif // CLASSROOM_H
