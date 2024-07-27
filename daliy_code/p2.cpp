#include <iostream>
#include <cstring>
using namespace std;

class Student
{
    string name, roll;
    int marks;

public:
    void getdata();
    void display();
    int getmarks();
};

void Student ::getdata()
{
    cout << "\nenter the name ::";
    cin >> name;
    cout << "\nenter the roll ::";
    cin >> roll;
    cout << "\nenter the marks ::";
    cin >> marks;
}

void Student ::display()
{
    cout << "enter the " << name << endl;

    cout << "enter the" << roll << endl;

    cout << "enter the" << marks << endl;
}

int Student ::getmarks()
{
    return marks;
}

int main()
{
    int i, size;
    cout << "enter the number of student::" << endl;
    cin >> size;
    Student s[size]; // s is our object;
    cout << "***********enter student deteils*************\n";
    for (i = 0; i < size; i++)
    {
        s[i].getdata();
    }

    cout << "***********topper in class************\n";
    int high = s[0].getmarks();
    int index = 0;
    for (i = 0; i < size; i++)
    {

        if (s[i].getmarks() > high)
        {
            high = s[i].getmarks();
            index = i;
        }
    }
    s[index].display();
}