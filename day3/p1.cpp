// Create a class QUEUE to implement queue data structure with constructors &amp;
// destructors. Define suitable member functions for insertion &amp; deletion of elements to
// &amp; from the queue. Write a program in C++ to do this by clearly specifying the
// overflow &amp; underflow conditions.

#include <iostream>
using namespace std;

class Queue
{
    int front, rear, size;
    int *arr;

public:
    Queue(int s);
    void enq(int data);
    void deq();
    void display();
    ~Queue();
};

Queue ::Queue(int s)
{
    size = s;
    arr = new int[size];
    front = rear = -1;
    cout << "queue created with size" << size << endl;
}
Queue ::~Queue()
{
    delete[] arr;
    cout << "queue destroyed" << endl;
}
void Queue::enq(int data)
{
    // check queue is empty or not(overdlow)
    if (rear == size - 1)
    {
        cout << "overflow" << endl;
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        arr[++rear] = data;
    }
}
void Queue::deq()
{
    // check queue is empty or not(underflow)
    if (front == -1)
    {
        cout << "underflow" << endl;
        return;
    }
    int i = arr[front];
    front++;
    if (front > rear)
    {
        front = rear = -1;
    }

    cout << i << " deleted " << endl;
}
void Queue::display()
{
    int i;
    if (front == -1)
    {
        cout << "queue is empty" << endl;
    }
    else
    {
        for (i = front; i <= rear; i++)
        {
            cout << "index :: " << i << " element :: " << arr[i] << endl;
        }
    }
}

int main()
{
    Queue q(5);
    q.enq(10);
    q.enq(20);
    q.enq(30);
    q.enq(40);
    q.enq(50);
    q.display();
    q.deq();
    q.deq();
    q.deq();
    q.deq();
    q.deq();
    q.display();
    q.deq();
    q.display();
    Queue v(5);
    v.enq(10);
    v.enq(20);
    v.enq(30);
    v.enq(40);
    v.enq(50);
    v.display();
    v.deq();
    v.deq();
    v.deq();
    v.deq();
    v.deq();
    v.display();
    v.deq();
    v.display();
}
