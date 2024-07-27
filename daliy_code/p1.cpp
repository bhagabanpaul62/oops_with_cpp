#include <iostream>
#include <cstring>
using namespace std;

class fruit
{
    string name;
    string color;
    int price;

public:
    void getdata()
    {
        cout << "\nenter the fruit name :: ";
        cin >> name;
        cout << "\nenter the fruit color :: ";
        cin >> color;
        cout << "\nenter the fruit price :: ";
        cin >> price;
    }
    void dispaly()
    {
        cout << "fruit name :: " << name << endl;
        cout << "fruit color :: " << color << endl;
        cout << "fruit price :: " << price << endl;
    }
};

int main()
{

    int size, i;
    cout << "enter the size of array objects";
    cin >> size;
    fruit *arr = new fruit[size];

    for (i = 0; i < size; i++)
    {
        // initlize the objects
        arr[i].getdata();
    }
    for (i = 0; i < size; i++)
    {
        // call display function
        arr[i].dispaly();
    }

    delete[] arr;
    return 0;
}