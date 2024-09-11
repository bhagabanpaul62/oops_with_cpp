// A class Test is derived from a base class Student with data member rollno and
// member functions getnum() to input rollno and putnum() to display rollno. with data
// member marks and member functions getmarks() to input marks and putmarks() to
// display marks. Class Sports is also derived from class Student with data member
// score and member functions getscore() to input score and putscore() to display score.
// The class Result is inherited from two base classes, class Test and class Sports with
// data member total and a member function display() to display rollno, marks, score
// and the total(marks + score).

// #include<iostream>
// using namespace std;
// class Sports;
// class Test;
// class Student{
//     int rollno;
//     public:
//     void getmarks();
//     void putnum();//display rollno.
// };
// class Test{
//     int marks;
//     public:
//     void getmarks();
//     void putmarks();
// };
// class Sports{
//     int score;
//     public:
//     void getmarks();
//     void putmarks();
// };

#include <iostream>
using namespace std;

// Base class Student with virtual inheritance
class Student
{
protected:
    int rollno;

public:
    void getnum()
    {
        cout << "Enter roll number: ";
        cin >> rollno;
    }

    void putnum()
    {
        cout << "Roll Number: " << rollno << endl;
    }
};

// Derived class Test with virtual inheritance from Student
class Test : virtual public Student
{
protected:
    float marks;

public:
    void getmarks()
    {
        cout << "Enter marks: ";
        cin >> marks;
    }

    void putmarks()
    {
        cout << "Marks: " << marks << endl;
    }
};

// Derived class Sports with virtual inheritance from Student
class Sports : virtual public Student
{
protected:
    float score;

public:
    void getscore()
    {
        cout << "Enter score: ";
        cin >> score;
    }

    void putscore()
    {
        cout << "Score: " << score << endl;
    }
};

// Derived class Result from both Test and Sports
class Result : public Test, public Sports
{
private:
    float total;

public:
    void display()
    {
        total = marks + score; // Total is sum of marks and score
        putnum();              // Now ambiguity is resolved
        putmarks();            // Display marks from Test class
        putscore();            // Display score from Sports class
        cout << "Total (Marks + Score): " << total << endl;
    }
};

// Main function
int main()
{
    Result studentResult;

    // Input roll number, marks, and score
    studentResult.getnum();   // Input roll number (from Student)
    studentResult.getmarks(); // Input marks (from Test)
    studentResult.getscore(); // Input score (from Sports)

    // Display result details
    cout << "\n--- Student Result ---" << endl;
    studentResult.display(); // Display roll number, marks, score, and total

    return 0;
}
