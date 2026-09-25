#include <iostream>
#define MAX 10
using namespace std;
class Stack
{
    int arr[MAX];
    int top;

public:
    Stack()
    {
        top = -1;
    }
    void push(int value)
    {
        if (top == MAX - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = value;
    }
    int pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        return arr[top--];
    }
    void peek()
    {
        if (top == -1)
        {
            cout << "Stack is Empty" << endl;
            return;
        }
        cout << " TOP = " << arr[top];
    }
    void display()
    {
        if (top == -1)
        {
            cout << "Stack is Empty" << endl;
            return;
        }
        cout << "Stack:" << endl;
        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main()
{
    Stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(60);
    s1.push(70);
    s1.push(80);
    s1.push(90);
    s1.push(100);

    s1.display();
    s1.peek();
    cout << endl << s1.pop() << " Popped from the Stack" << endl;
    s1.push(110);
    s1.push(120);
    cout << s1.pop();
    
    return 0;
}