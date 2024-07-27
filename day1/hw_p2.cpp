/*2. Raising a number n to the power p is the same as multiplying n by itself p times. Write a function called power
 () that takes a double value for n and an integer value for p,and that returns the result as a double value. Use
 a default argument of 2 for p, so that if this argument is omitted, the number will be squared. Write a main ()
  function that gets values from the user to test the function.*/
#include <iostream>
#include <limits>
using namespace std;

double power(int n, double p = 2)
{
    double result = 1.0;
    for (int i = 0; i < p; i++)
    {
        result = result * n;
    }
    return result;
}

int main()
{
    int n;
    double p;
    cout << "enter the value of n :: " << endl;
    cin >> n;
    cout << "enter the power ::" << endl;
    cin >> p;
    if (cin.fail())
    {
        // If cin failed to read a valid integer for p
        cin.clear(); // Clear the error state
        cout << n << " squared is: " << power(n) << endl;
    }
    else
    {
        // If cin successfully read a valid integer for p
        cout << n << " raised to the power " << p << " is: " << power(n, p) << endl;
    }
}