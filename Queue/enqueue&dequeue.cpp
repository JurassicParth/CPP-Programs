// Write a C++ program enqueue and dequeue.
#include <iostream>
#define QUEUE_SIZE 3
using namespace std;

class Queue
{
    private:
        int front;
        int rear;
        int A[QUEUE_SIZE];
    public:
        Queue()
        {
            front = -1;
            rear = -1;
        }
        void enqueue(int item);
        void dequeue();
        void display();
};

void Queue::enqueue(int item)
{
    if (rear == QUEUE_SIZE - 1)
    {
        cout << "Queue Overflow" << endl;
        return;
    }
    if (front == -1)
    {
        front = 0;
    }
    A[++rear] = item;
    cout << "Item enqueued: " << item << endl;
}

void Queue::dequeue()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue Underflow" << endl;
        return;
    }
    int item = A[front++];
    cout << "Item dequeued: " << item << endl;
}

void Queue::display()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Queue elements: ";
    for (int i = front; i <= rear; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}