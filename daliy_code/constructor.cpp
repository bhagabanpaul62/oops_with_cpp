// constructor program

#include <iostream>
using namespace std;
class complex
{
    int x;

public:
    complex()
    {
        cout << "defualt constructor" << endl;
    }
    complex(int v)
    {
        x = v;
        cout << "paramitrized constructor" << endl;
    }
    ~complex()
    {
        cout << "Destroy" << endl;
    }
    void display()
    {
        cout << "value of x is ::" << x << endl;
    }
};

int main()
{
    complex s(5);
    s.display();
    complex *s1 = new complex[5];

    for (int i = 0; i < 5; i++)
    {
        s1[i] = complex(i);
    }
    for (int i = 0; i < 5; i++)
    {
        s1[i].display();
    }
}
