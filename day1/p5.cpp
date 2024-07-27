#include <iostream>
#include <cstring>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int classs;
    int marks;
    void getdata(string n, int r, int c, int m)
    {
        name = n;
        roll = r;
        classs = c;
        marks = m;
    }
    void display()
    {
        cout << "name ::" << name << endl;
        cout << "roll ::" << roll << endl;
        cout << "class ::" << classs << endl;
        cout << "marks ::" << marks << endl;
    }
};

int main()
{

    int i, size, roll, classs, marks;
    string name;

    size = 5;
    Student obj[size];
    for (i = 0; i < 5; i++)
    {
        cin >> name;
        cin >> roll;
        cin >> classs;
        cin >> marks;
        obj[i].getdata(name, roll, classs, marks);
    }
    for (i = 0; i < 5; i++)
    {
        obj[i].display();
    }
    return 0;
}