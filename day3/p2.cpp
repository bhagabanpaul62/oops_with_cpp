// 2. Write a C++ program to make a class overloaded with the following specification:

// a. Area(int) :- to calculate area of square
// b. Area(int,int) :- to calculate area of rectangle
// c. Area(float) :- to calculate area of circle
// Make the program menu based using proper functions.

#include <iostream>
using namespace std;
class Overloaded
{
    int a, l, w;
    float r;

public:
    void area(int);
    void area(int, int);
    void area(float);
};
void Overloaded::area(int x)
{
    a = x;
    cout << "\nArea of a Square :: " << a * a << endl;
}
void Overloaded::area(int x, int y)
{
    l = x;
    w = y;
    cout << "\nArea of a Rectangle :: " << l * w << endl;
}
void Overloaded::area(float f)
{
    r = f;
    cout << "\nArea of a Circle :: " << 3.14 * r * r << endl;
}

int main()
{
    int c, n, n1;
    float n2;

    Overloaded obj;
    while (true)
    {

        cout << "1.Area of a Square\n2.Area of a Rectangle\n3.Area of a Circle\n0.exit" << endl;
        cout << "enter the choice ::";
        cin >> c;
        switch (c)
        {
        case 1:
            cout << "enter the side::";
            cin >> n;
            obj.area(n);
            break;
        case 2:
            cout << "enter the length::";
            cin >> n;
            cout << "enter the width::";
            cin >> n1;
            obj.area(n, n1);
            break;
        case 3:
            cout << "enter the radius::";
            cin >> n2;
            obj.area(n2);
            break;
        case 0:
            exit(0);

        default:
            cout << "\nenter the valid input " << endl;
            break;
        }
    }
}