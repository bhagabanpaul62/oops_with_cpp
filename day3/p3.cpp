// Write a program in C++ to swap the private data members of two classes using
// FRIEND function

#include <iostream>
using namespace std;
class B;
class A
{
    int x, y;

public:
    A(int, int);
    void Display();
    friend class B;
};
A::A(int a, int b)
{
    x = a;
    y = b;
}
void A::Display()
{
    cout << "x = " << x << " y = " << y << endl;
}
class B
{
public:
    A swap(A &obj);
};

A B ::swap(A &obj)
{
    int temp;
    temp = obj.x;
    obj.x = obj.y;
    obj.y = temp;
}

int main()
{
    A a(5, 6);
    a.Display();
    B b;
    b.swap(a);
    a.Display();
}
