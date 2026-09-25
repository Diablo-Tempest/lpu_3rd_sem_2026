#include <iostream>
using namespace std;

class Stack
{
    class Node
    {
    public:
        int data;
        Node *next;
    };
    Node *top;

public:
    Stack()
    {
        top = nullptr;
    }
    void push(int value)
    {
        Node *newNode = new Node;
        newNode->data = value;
        newNode->next = top;

        top = newNode;
    }
    int pop()
    {
        if (top == nullptr)
        {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        Node *temp = top;
        int value = temp->data;
        top = top->next;
        delete temp;
        return value;
    }
    void peek()
    {
        if (top == nullptr)
        {
            cout << "Stack is Empty" << endl;
            return;
        }

        cout << "Top = " << top->data << endl;
    }
    void display()
    {
        if (top == nullptr)
        {
            cout << "Stack is Empty" << endl;
            return;
        }
        Node *temp = top;
        cout << endl
             << "Stack:" << endl;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
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
    s1.display();
    s1.peek();
    cout << s1.pop() << " Popped from the Stack" << endl;
    s1.display();
    return 0;
}