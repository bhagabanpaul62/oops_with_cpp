// WAP to implement two classes Employee and Boss. Boss has the capability to
// increase the salary (Employee has a variable named salary) of the Employee.

#include <iostream>
using namespace std;
class Employee
{
    int id, salary;

public:
    Employee(int i, int s);
    void display();
    friend class Boss;
};
class Boss
{
    int id, salary;

public:
    Boss(int i, int s);
    void display();
    void incsalary(Employee &);
};
Boss ::Boss(int i, int s)
{
    id = i;
    salary = s;
}
void Boss::display()
{
    cout << "id :: " << id << " Salary ::" << salary << endl;
}
void Boss::incsalary(Employee &obj)
{
    int w;
    cout << "enter amout want to add ::";
    cin >> w;
    obj.salary = obj.salary + w;
    cout << "update successful" << endl;
}

Employee ::Employee(int i, int s)
{
    id = i;
    salary = s;
}
void Employee::display()
{
    cout << "id :: " << id << " Salary ::" << salary << endl;
}

int main()
{
    Employee e(1223, 50);
    Boss b(1232, 100);
    b.display();
    e.display();
    b.incsalary(e);
    e.display();

}