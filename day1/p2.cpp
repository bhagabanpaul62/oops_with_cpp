#include <iostream>
#include <cstring>
using namespace std;

struct Student
{

    string name;

    int roll;

    void accept(string n, int r)
    {
        name = n;
        roll = r;
    }
    void display()
    {
        cout << "name is ::" << name << endl;
        cout << "roll no is ::" << roll << endl;
    }
};

int main()
{
    Student s1;
    s1.accept("bhagban", 12);
    s1.display();
}
