// WAP in C++ to create a class String1 which has a character array.
// a) Concatenate two strings by overloading ‘+’ operator.
// b) Check equality of two strings by overloading ‘==’ operator.

#include <iostream>
#include <cstring>
using namespace std;

class string1
{
    char arr[100];

public:
    string1()
    {
        arr[0] = '\0';
    }
    string1(char arr)
    {

        cin >> arr;
    }
    void display()
    {
        cout << arr;
    }
};

int main()
{
    string1 s("apple");
    s.display();
}