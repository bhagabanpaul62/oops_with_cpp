#include <iostream>
#include <cstring>
using namespace std;
struct Student
{
private:
    int salary;

public:
    void accept(int s)
    {
        salary = s;
    }
    void display()
    {
        cout << "salay is " << salary << endl;
    }
};
int main()
{
    Student s1;
    s1.accept(100000);
    s1.display();
}