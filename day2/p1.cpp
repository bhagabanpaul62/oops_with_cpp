// 1. Write a class Time which has three data member hour, minute and second and
// three member functions: setTime(list of arguments) : Which set three data
// members of class addTime( Time): To add two time values where one time
// value(object) is passed as argument of addTime().showTime(): To display the
// time information.

#include <iostream>
using namespace std;

class Time
{
    int hour, minute, second;

public:
    void setTime(int h, int m, int s);
    void addTime(Time &t2);
    void showTime();
};
void Time ::setTime(int h, int m, int s)
{
    hour = h;
    minute = m;
    second = s;
}

void Time ::addTime(Time &t)
{
    second = second + t.second;
    int c_m = second / 60;
    second = second % 60;

    minute = minute + t.minute + c_m;
    int c_h = minute / 60;
    minute = minute % 60;

    hour = hour + t.hour + c_h;
    hour = hour % 24;
}

void Time ::showTime()
{
    cout << hour << ":" << minute << ":" << second << endl;
}

int main()
{
    Time t1, t2;
    t1.setTime(22, 56, 55);
    t2.setTime(10, 15, 17);
    t1.showTime();
    t2.showTime();
    t1.addTime(t2);
    t1.showTime();
}