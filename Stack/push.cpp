// Write a C++ program to perform push operation into stack.
#include <iostream>
#include <ctype>
#include <iomanip>
using namespace std;

#define MAX 3

class Stack
{
    private:
        int top;
        int A[MAX];
    public:
        Stack()
        {
            top = -1;
        }
        void push(int item);
        void display();
};

void Stack::push(int item)
{
    if (top == MAX - 1)
    {
        cout << "Stack Overflow" << endl;
        return;
    }
    A[++top] = item;
    cout << "Item pushed: " << item << endl;
}

void Stack::display()
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "Stack elements: ";
    for (int i = top; i >= 0; i--)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main()
{
    Stack s;
    int choice, item;

    do
    {
        cout << "1. Push" << endl;
        cout << "2. Display" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter item to push: ";
                cin >> item;
                s.push(item);
                break;
            case 2:
                s.display();
                break;
            case 3:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 3);

    return 0;
}