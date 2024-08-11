// A class Test is derived from a base class Student with data member rollno and
// member functions getnum() to input rollno and putnum() to display rollno. with data
// member marks and member functions getmarks() to input marks and putmarks() to
// display marks. Class Sports is also derived from class Student with data member
// score and member functions getscore() to input score and putscore() to display score.
// The class Result is inherited from two base classes, class Test and class Sports with
// data member total and a member function display() to display rollno, marks, score
// and the total(marks + score).

#include<iostream>
using namespace std;
class Sports;
class Test;
class Student{
    int rollno;
    public:
    void getmarks();
    void putnum();//display rollno.
};
class Test{
    int marks;
    public:
    void getmarks();
    void putmarks();
};
class Sports{
    int score;
    public:
    void getmarks();
    void putmarks();
};



