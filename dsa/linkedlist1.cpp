#include <iostream>
#include <cstdlib> // exit(0) - normal/successfull termination, exit(1) - Termination with an error/falure status
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
void insertAfter(Node *&head, int value, int target)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;
    Node *temp = head;
    while (temp->data != target)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void insertBefore(Node *&head, int value, int target)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;
    Node *temp = head;
    while (temp->next->data != target)
        temp = temp->next;
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteAtTheBeginning(Node *&head)
{
    Node *temp = new Node;
    temp = head;
    head = head->next;
    delete temp;
}
void deleteAtTheEnd(Node *&head)
{
    Node *temp = head;
    Node *prev = nullptr;

    while (temp->next != nullptr)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = nullptr;
    delete temp;
}
void deleteInBetween(Node *&head, int target)
{
    Node *temp = head;
    Node *prev = nullptr;
    while (temp->data != target)
    {
        prev = head;
        temp = temp->next;
    }
    prev->next = temp->next;
    delete temp;
}
void search(Node *&head, int target){
    Node* temp = head;
    int position = 0;
    while(temp != nullptr){
        if(temp->data == target){
            cout << target << " found at position " << position << endl;
            return;
        }
            temp = temp->next;
            position++;
    }
        cout << target << " Doesn't exist in the list." << endl;
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
    insertAfter(head, 50, 30);
    traversal(head);
    insertBefore(head, 60, 30);
    traversal(head);
    deleteAtTheBeginning(head);
    traversal(head);
    deleteAtTheEnd(head);
    traversal(head);
    deleteInBetween(head, 20);
    traversal(head);
    search(head, 80);

    /*insertion
    Insertion means adding a new node
    1. Insert at the beginning
    2. Insert at the end
    3. Insert at a particular position
    */

    // insert at the beginning

    return 0;
}