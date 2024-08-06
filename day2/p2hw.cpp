// Create a class called TIME that has separate data member for hours, minutes and
// seconds. A member function should display the time in the format hh:mm:ss. Another
// member function should add two objects of type TIME passed as arguments. Write a
// program in C++ to do this.
#include <iostream>
using namespace std;

class Time
{
    int hour, minutes, second;

public:
    Time()
    {
        hour = 0;
        minutes = 0;
        second = 0;
    }
    Time(int h, int m, int s);
    void display();
    Time addtime(Time &obj1, Time &obj2);
};
Time ::Time(int h, int m, int s)
{
    hour = h;
    minutes = m;
    second = s;

}
void Time::display()
{
    cout << hour << ":" << minutes << ":" << second << endl;
}
Time Time::addtime(Time &obj1, Time &obj2)
{
    Time temp;
    temp.second = obj1.second + obj2.second;
    int c_m = temp.second / 60;
    temp.second = temp.second % 60;

    temp.minutes = obj1.minutes + obj2.minutes + c_m;
    int c_h = temp.minutes / 60;
    temp.minutes = temp.minutes % 60;

    temp.hour = obj1.hour + obj2.hour + c_h;
    temp.hour = temp.hour % 24;

    return temp;
}
int main()
{
    Time t1(8, 8, 9);
    Time t2(1, 1, 1);
    Time t3;
    t3=t3.addtime(t1, t2);
    t3.display();
}