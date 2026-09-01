#include <iostream>
using namespace std;

// method 1
// struct Node{
//     int data;
//     Node* next;
// };

// method 2
class Node
{
public:
    int data;
    Node *next;
};

void traversal(Node *head)
{
    Node *temp = head;
    cout << "Traversal:" << endl;
    while (temp != nullptr)
    {
        cout << temp->data << " --> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void insertAtTheBeginning(Node *&head, int value)
{
    // Node*& -> because the function needs to modify the actual head pointer. If we passed Node* head, by value, this function would receive a copy.
    //  Using Node*& head, allows modification of the original pointer.

    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}
void insertAtTheEnd(Node *&head, int value)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;
    if (head == nullptr)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != nullptr)
        temp = temp->next;
    temp->next = newNode;
}
int main()
{
    // new keyword allocates memory dynamically
    Node *head = new Node;
    head->data = 10;

    Node *l2 = new Node;
    l2->data = 20;

    Node *l3 = new Node;
    l3->data = 30;

    Node *l4 = new Node;
    l4->data = 40;

    head->next = l2;
    l2->next = l3;
    l3->next = l4;
    l4->next = nullptr;

    traversal(head);
    insertAtTheBeginning(head, 50);
    traversal(head);
    insertAtTheEnd(head, 60);
    traversal(head);

    /*insertion
    Insertion means adding a new node
    1. Insert at the beginning
    2. Insert at the end
    3. Insert at a particular position
    */

    // insert at the beginning

    return 0;
}