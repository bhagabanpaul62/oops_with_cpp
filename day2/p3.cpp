// using friend funciton add complex
#include <iostream>
using namespace std;
class Complex
{
    int x, y;

public:
    void getdata(int a, int b);
    void showdata();
    friend void addcomplex(Complex obj1, Complex obj2);
};
void Complex::getdata(int a, int b)
{
    x = a;
    y = b;
}
void addcomplex(Complex obj1, Complex obj2)
{
    cout << "first complex number is ( " << obj1.x << " + " << obj1.y << "i )" << endl;
    cout << "sceond complex number is ( " << obj2.x << " + " << obj2.y << "i )" << endl;
    cout << "addtion of complex number is ( " << obj1.x + obj2.x << " + " << obj1.y + obj2.y << "i )" << endl;
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
    addcomplex(c1, c2);
}