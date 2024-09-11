// single inheritance

#include <iostream>
using namespace std;

class Base
{
    int data1; // private by default

public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};
void Base ::setData(void)
{
    data1 = 10;
    data2 = 20;
}

int Base ::getData1()
{
    return data1;
}

int Base ::getData2()
{
    return data2;
}
class Derive : public Base
{ // class is being derives publically
    int data3;

public:
    void process();
    void display();
};

void Derive ::process()
{
    data3 = data2 * getData1();
}
void Derive ::display()
{
    cout << "value of data 1 is " << getData1() << endl;
    cout << "value of data 2 is " << data2 << endl;
    cout << "value of data 3 is " << data3 << endl;
}
int main()
{
    Derive der;
    der.setData();
    der.display();
    der.process();
    der.display();
}