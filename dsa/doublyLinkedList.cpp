#include <iostream>
using namespace std;
class Node
{
public:
    Node *prev;
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        prev = nullptr;
        next = nullptr;
    }
};

void traversal(Node *head)
{
    Node *temp = head;
    cout << endl
         << "Traversal:" << endl;
    while (temp != nullptr)
    {
        cout << temp->data << " --> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void reverseTraversal(Node *tail)
{
    Node *temp = tail;
    cout << endl
         << "Reverse Traversal:" << endl;
    while (temp != nullptr)
    {
        cout << temp->data << " --> ";
        temp = temp->prev;
    }
    cout << "NULL" << endl;
}
void insertAtTheBeginning(){}
void insertAtTheEnd(){}
void insertAfter(){}
void insertAtPosition(){}

void deleteATheBeginning(){}
void deleteAtTheEnd(){}
void deleteAtPosition(){}
void insertBefore(Node *node, int value)
{
    if (node == nullptr)
        return;
    Node *newNode = new Node(value);
    newNode->next = node;
    newNode->prev = node->prev;
    if (node->prev != nullptr)
        node->prev->next = newNode;
    node->prev = newNode;
}
int main()
{
    Node *n1 = new Node(10);
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);

    n1->next = n2;

    n2->next = n3;
    n2->prev = n1;

    n3->prev = n2;

    traversal(n1);
    reverseTraversal(n3);
    insertBefore(n2, 40);
    traversal(n1);
    return 0;
}