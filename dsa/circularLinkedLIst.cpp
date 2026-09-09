#include <iostream>
#include <cstdlib>
using namespace std;
void createList();
void insertNode();
void deleteNode();
void countNodes();
void display();

class Node
{
public:
    int data;
    Node *next;
};

Node *last = nullptr;
void createList()
{
    int n, value;
    if (last != nullptr)
    {
        cout << "List already exists!" << endl;
        return;
    }
    cout << "Enter No. of Nodes: ";
    cin >> n;
    if (n == 0)
    {
        cout << "Invalid No. of Nodes!" << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Data for Node " << i + 1 << ": ";
        cin >> value;
        Node *newNode = new Node;
        newNode->data = value;
        if (last == nullptr)
        {
            last = newNode;
            last->next = last;
        }
        else
        {
            newNode->next = last->next;
            last->next = newNode;
            last = newNode;
        }
    }
    cout << "Circular Linked List created successfully!" << endl;
}
void insertNode() {
    int value, position;
    cout << "Enter value to insert: ";
    cin >> value;
    cout << "Enter Position: ";
    cin >> position;
    if(position < 1){
        cout << "Invalid Position!" << endl;
        return;
    }
    Node* newNode = new Node;
    newNode->data = value;

    if(last == nullptr){
        if(position == 1){
            last = newNode;
            last->next = last;
            cout << "Node Inserted Successfully!" << endl;
        }
        else{
            delete newNode;
            cout << "Invalid Position!" << endl;
        }
        return;
    }
    if(position == 1){
        newNode->next = last->next;
        last->next = newNode;
        cout << "Node inserted Successfully at position " << position << endl;
        return;
    }
    Node* temp = last->next;
    for(int i = 1; i<position-1 && temp != last; i++)
        temp = temp->next;
    if(temp == last){
        delete newNode;
        cout << "Invalid Position" << endl;
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    if(temp == last)
        last = newNode;
    cout << "Node Inserted Successfully at position " << position << endl;
}
void deleteNode() {
    int position;
    if(last == nullptr){
        cout << "List is Empty!" << endl;
        return;
    }
    cout << "Enter the position to Delete: ";
    cin >> position;
    if(position < 1){
        cout << "Invalid Position!" << endl;
        return;
    }
    Node* first = last->next;
    if(first == last){
        if(position == 1){
            cout << last->data << " Deleted from position " << position << endl;
            delete last;
            last = nullptr;
        }
        else{
            cout << "Invalid Input!" << endl;
        }
        return;
    }
    if(position == 1){
        Node* temp = first;
        last->next = first->next;
        cout << temp->next->data << " Deleted from position " << position << endl;
        delete temp;
        return;
    }
    Node* temp = first;
    for (int i = 1; i<position - 1; i++)
        temp = temp->next;
    if(temp->next == first){
        cout << "Invalid Position" << endl;
        return;
    }
    Node* deleteNode = temp->next;
    if(deleteNode == last)
    last = temp;
    temp->next = deleteNode->next;
    cout << temp->next->data << " Deleted from position " << position << endl;
    delete deleteNode;
}
void countNodes()
{
    if (last == nullptr)
    {
        cout << "No. of Nodes: 0";
        return;
    }
    int count = 0;
    Node *temp = last->next;
    do
    {
        count++;
        temp = temp->next;
    } while (temp != last->next);
    cout << "No. of Nodes: " << count << endl;
}
void display()
{
    if (last == nullptr)
    {
        cout << "The List is Empty";
        return;
    }
    Node *temp = last->next;
    cout << "Circular Linked List:" << endl;
    do
    {
        cout << temp->data << " --> ";
        temp = temp->next;
    } while (temp != last->next);
    cout << "(Back to First Node)" << endl;
}

int main()
{

    int choice;
    while (1)
    {
        cout << endl << "Circular Linked List Menu:" << endl;
        cout << "1. Create List" << endl;
        cout << "2. Insert Node" << endl;
        cout << "3. Delete Node" << endl;
        cout << "4. Count Nodes" << endl;
        cout << "5. Display List" << endl;
        cout << "6. Clear Terminal" << endl;
        cout << "7. Exit" << endl;
        cout << endl
             << "Enter your Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            createList();
            break;
        case 2:
            insertNode();
            break;
        case 3:
            deleteNode();
            break;
        case 4:
            countNodes();
            break;
        case 5:
            display();
            break;
        case 6:
            system("cls");
            break;
            case 7:    
            system("cls");
            return 0;
        default:
            cout << "Invalid Choice!!!" << endl;
            break;
        }
    }
    return 0;
}