// Write a C++ program to perform pop operation from stack.
#include <iostream>
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
        void pop();
        void display();
};

void Stack::pop()
{
    if (top == -1)
    {
        std::cout << "Stack Underflow" << std::endl;
        return;
    }
    int item = A[top--];
    std::cout << "Item popped: " << item << std::endl;
}

void Stack::display()
{
    if (top == -1)
    {
        std::cout << "Stack is empty" << std::endl;
        return;
    }
    std::cout << "Stack elements: ";
    for (int i = top; i >= 0; i--)
    {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    Stack s;
    int choice;

    do
    {
        std::cout << "1. Pop" << std::endl;
        std::cout << "2. Display" << std::endl;
        std::cout << "3. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice)
        {
            case 1:
                s.pop();
                break;
            case 2:
                s.display();
                break;
            case 3:
                std::cout << "Exiting..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 3);

    return 0;
}
