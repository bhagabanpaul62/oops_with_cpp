// 3. Create a class named as COUNTER to keep track of a count.Write two different
// operator function to increment C1 by prefix increment operator and decrement C2 by
// postfix decrement operator where C1, C2 are two objects of the class COUNTER.

#include <iostream>
using namespace std;

class Counter
{
    int count;

public:
    Counter()
    {
        count = 0;
    }

    void Display()
    {
        cout << count;
    }

    Counter &operator++()
    { // pre
        ++count;
        return *this;
    }
    Counter operator++(int)
    { // post
        Counter temp = *this;
        ++count;
        return temp;
    }
    Counter operator--(int)
    { // post
        Counter temp = *this;
        --count;
        return temp;
    }
    Counter &operator--()
    { // pre
        --count;
        return *this;
    }
};

int main()
{
    Counter c1;
    ++c1;
    ++c1;
    c1++;
    --c1;
    c1.Display();
}