#include <iostream>
using namespace std;
int main()
{
    int n = 153;
    int rev = 0;
    while (n > 0)
    {
        int lastDig = n % 10;
        rev = (rev * 10) + lastDig;
        n = n / 10;
    }
    cout << rev;
}