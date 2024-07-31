#include <iostream>
using namespace std;

class BankAccount
{
    int account_number;
    double blance;

public:
    void assing_value(int a, double b);
    void display();
    void money_Transfer(BankAccount &obj);
};
void BankAccount::assing_value(int a, double b)
{
    account_number = a;
    blance = b;
}
void BankAccount::display()
{
    cout << "account number is ::" << account_number << endl;
    cout << "account blance is ::" << blance << endl;
}
void BankAccount ::money_Transfer(BankAccount &obj)

{
    int w;
    cout << "enter the amount :: ";
    cin >> w;
    if (obj.blance > 0 && w < obj.blance)
    {
        obj.blance -= w;
        blance += w;
        cout << "sucsfull transfer" << endl;
    }
    else
    {
        cout << "insufisent blance"<<endl;
    }
}
int main()
{
    BankAccount b1, b2;
    b1.assing_value(10, 1000);
    b2.assing_value(12, 500);
    b1.display();
    b2.display();
    b2.money_Transfer(b1);
    b2.display();
    b1.display();
}