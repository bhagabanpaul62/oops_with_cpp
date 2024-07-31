// Write a class (named Complex) consisting of two member variable to represent
// real part and imaginary part of a complex number and it has three member
// functions: void getData(): to take input at runtime for data members. void
// showData(): to display the complex number. Complex addComplex(Complex):
// to add two complex number and return the result through object.
// using namespace std;
#include <iostream>
using namespace std;
class Complex
{
    int x, y;

public:
    void getdata(int a, int b);
    void showdata();
    void addcomplex(Complex &obj);
};
void Complex::getdata(int a, int b)
{
    x = a;
    y = b;
}
void Complex::addcomplex(Complex &obj)
{
    cout << "addtion of complex number is ( " << obj.x + x << " + " << obj.y + y << "i )" << endl;
}
void Complex::showdata()
{
    cout << "complex number is ( " << x << " + " << y << "i )" << endl;
}
int main()
{
    Complex c1, c2;
    c1.getdata(5, 6);

    c2.getdata(6, 5);
    c2.addcomplex(c1);
    c1.showdata();
    c2.showdata();
}