// 1. Write two different classes A and B. Each of them have private data member data1,
// data2 respectively. Write a function addBoth( ) to add the values contained in data1
// and data2.

#include <iostream>
using namespace std;

class B;
class A
{
    int data1;

public:
    A(int a)
    {
        data1 = a;
    }
    friend void addboth(A &, B &);
};
class B
{
    int data2;

public:
    B(int b)
    {

        data2 = b;
    }
    friend void addboth(A &, B &);
};
void addboth(A &a, B &b)
{
    cout << "both class addtion is\n"
         << "data1 :: " << a.data1 + b.data2 << endl;
}

int main()
{
    A a(5);
    B b(6);
    addboth(a, b);
}