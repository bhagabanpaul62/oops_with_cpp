// 1. Suppose you have pairs of numbers in your program, and you want to be sure that the
// smaller one always precedes the larger one. Write a C++ program that calls a function
// order () which checks two numbers passed to it by reference and swaps the originals if
// the first is larger than the second.
#include <iostream>
using namespace std;

void order(int &a, int &b)

{
    int temp;
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
}
int main()
{
    int a, b, c;
    a = 10;
    b = 9;
    cout << "before swap" << endl;
    cout << "a is :: " << a << " b is :: " << b << endl;
    order(a, b);
    cout << "after swap" << endl;
    cout << "a is :: " << a << " b is :: " << b << endl;
}