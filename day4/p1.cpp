// 1. WAP in C++ to create a class MyComplex which has the two member variables
// real and imagnr (both of type “float). The class should have the following
// features:

// a) real and imagnr are initialized to default values 0.0 and 0.0 when no
// parameters are supplied, or ,
// b) real and imagnr are initialized to the supplied parameter values, or
// c) they derive their values from the supplied object of type MyComplex
// In addition to the above features, the following should be also supported:
// d) Two MyComplex objects should use the “+” , “-“ and “*” operators to
// perform addition / subtraction and multiplication according to standard
// rules for Complex numbers. Using concept of operator overloading

#include <iostream>
using namespace std;

class MyComplex
{
    float real, imagner;

public:
    MyComplex();
    MyComplex(float r, float i);
    MyComplex operator+(MyComplex &);
    MyComplex operator-(MyComplex &);
    MyComplex operator*(MyComplex &);
    void display();
};
MyComplex::MyComplex()
{
    real = 0.0;
    imagner = 0.0;
}
MyComplex::MyComplex(float r, float i)
{
    real = r;
    imagner = i;
}
void MyComplex::display()
{
    cout << real << " + " << imagner << "i" << endl;
}
MyComplex MyComplex::operator+(MyComplex &c)
{
    MyComplex temp;
    temp.real = real + c.real;
    temp.imagner = imagner + c.imagner;
    return temp;
}
MyComplex MyComplex::operator-(MyComplex &c)
{
    MyComplex temp;
    temp.real = real - c.real;
    temp.imagner = imagner - c.imagner;
    return temp;
}
MyComplex MyComplex::operator*(MyComplex &c)
{
    MyComplex temp;
    temp.real = real * c.real;
    temp.imagner = imagner * c.imagner;
    return temp;
}

int main()
{
    MyComplex m1(5, 6);
    m1.display();
    MyComplex m2(6, 5);
    m2.display();
    MyComplex m3;
    m3 = m1 + m2;
    m3.display();
    MyComplex m4;
    m4 = m1 - m2;
    m4.display();
    MyComplex m5;
    m5 = m1 * m2;
    m5.display();
    MyComplex c1;
    MyComplex c2(6, 7);
    MyComplex c3;
    c3 = c1 + c2;
    c3.display();
}
