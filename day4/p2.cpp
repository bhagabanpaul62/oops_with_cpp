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

    string1(const char *a)
    {
        strcpy(arr, a);
    }

    void display()
    {
        cout << arr;
    }

    string1 operator+(string1 &s)
    {
        string1 temp;
        strcpy(temp.arr, arr);
        strcat(temp.arr, s.arr);
        return temp;
    }

    bool operator==(string1 &s)
    {
        return strcmp(arr, s.arr) == 0;
    }
};

int main()
{
    string1 s("apple");
    string1 s1("nice");
    string1 s3;
    s3 = s1 + s;

    s3.display();

    if (s1 == s)
    {
        cout << "\nmatch";
    }
    else
    {
        cout << "\nnot same";
    }
}