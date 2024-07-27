#include <iostream>
#include <cstring>

using namespace std;
class Student
{

public:
    string name;
    int roll;
};
int main()
{
    Student s1;
    s1.name = "bhagaban";
    s1.roll = 55;
    cout << s1.name << " \n";
    cout << s1.roll << endl;
    return 0;
}