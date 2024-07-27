#include<iostream>
#include<cstring>
using namespace std;

struct student {
    int roll;
    string name;

    student() {
        cout << "def constructor" << endl;
    }
    student(int r, string n): roll(r), name(n) {
        cout << "parameterized constructor called" << endl;
    }
    ~student() {
        cout << "object destroyed" << endl;
    }
    void set_data(int r, string n) {
        name = n;
        roll = r;
    }
    void display() {
        cout << "name ::" << name << "\n";
        cout << "roll ::" << roll << "\n";
    }
};

int main() {
    string n;
    int r, i;
    student* s = new student[5];

    for (i = 0; i < 5; i++) {
        cout << "enter student roll:: " << "\n";
        cin >> r;
        cin.ignore();
        cout << "enter student name:: " << "\n";
        getline(cin, n);

        s[i].set_data(r, n);
    }
    for (i = 0; i < 5; i++) {
        s[i].display();
    }
    delete[] s;
}
