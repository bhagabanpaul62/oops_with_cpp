/*normal way we done(0.1)
 1. a) Define a class to represent a bank account. Include the following members. Data members
 a) Name of the depositor.
 b) Account number
 c) Balance amount in the account.
 Member functions.
 a) To assign initial values
 b) To deposit an amount.
 c) To withdraw an amount after checking the balance d) To display name and balance.
 Write a program in C++ to test the program for any number of customers.*/
#include <iostream>
using namespace std;
class bank_account
{
    string name;
    int ac_number;
    double blance;

public:
    void assing_initial_values(string name, int ac_number, double blance);
    void deposite_an_amount(double blance);
    void withdraw_an_amount(double blance);
    void display();
};
void bank_account ::assing_initial_values(string n, int ac_n, double b)
{
    name = n;
    ac_number = ac_n;
    blance = b;
}
void bank_account ::deposite_an_amount(double b)
{
    blance = blance + b;
    cout << " after deposit ::" << b << " current blance is ::" << blance << endl;
}
void bank_account ::withdraw_an_amount(double b)
{
    blance = blance - b;
    cout << " after  withdraw ::" << b << " current blance is ::" << blance << endl;
}
void bank_account ::display()
{
    cout << "account name is ::" << name << endl;
    cout << "account current blance is ::" << blance << endl;
}
int main()
{
    bank_account ac1;
    ac1.assing_initial_values("bhagaban", 78, 500.00);
    ac1.display();
    ac1.deposite_an_amount(600);
    ac1.withdraw_an_amount(2000);
}