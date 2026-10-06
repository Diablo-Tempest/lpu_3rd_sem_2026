#include <iostream>
#include <cstdlib> // for exit()

using namespace std;

// Node structure
struct Node
{
    int data;
    Node *next;
};

// Queue class
class Queue
{
private:
    Node *front;
    Node *rear;

public:
    // Constructor
    Queue()
    {
        front = nullptr;
        rear = nullptr;
    }

    // Check whether queue is empty
    bool isEmpty()
    {
        return (front == nullptr);
    }

    // Check whether queue is full
    // Linked List Queue has no fixed size.
    bool isFull()
    {
        return false;
    }

    // Enqueue operation
    void enqueue(int value)
    {

        // Create a new node
        Node *newNode = new Node;

        newNode->data = value;
        newNode->next = nullptr;

        // If queue is empty
        if (front == nullptr)
        {

            front = newNode;
            rear = newNode;
        }

        // If queue is not empty
        else
        {

            rear->next = newNode;
            rear = newNode;
        }

        cout << "\n"
             << value << " inserted into queue.\n";
    }

    // Dequeue operation
    void dequeue()
    {

        // Check underflow
        if (isEmpty())
        {

            cout << "\nQueue Underflow! Queue is empty.\n";
            return;
        }

        // Store the front node
        Node *temp = front;

        int value = front->data;

        // Move front to the next node
        front = front->next;

        // If queue becomes empty
        if (front == nullptr)
        {
            rear = nullptr;
        }

        // Delete old front node
        delete temp;

        cout << "\n"
             << value << " deleted from queue.\n";
    }

    // Get front element
    void getFront()
    {

        if (isEmpty())
        {

            cout << "\nQueue is empty.\n";
            return;
        }

        cout << "\nFront element = "
             << front->data << endl;
    }

    // Get rear element
    void getRear()
    {

        if (isEmpty())
        {

            cout << "\nQueue is empty.\n";
            return;
        }

        cout << "\nRear element = "
             << rear->data << endl;
    }

    // Display queue
    void display()
    {

        if (isEmpty())
        {

            cout << "\nQueue is empty.\n";
            return;
        }

        Node *temp = front;

        cout << "\nQueue elements: ";

        while (temp != nullptr)
        {

            cout << temp->data << " ";

            temp = temp->next;
        }

        cout << endl;
    }

    // Clear all elements from queue
    void clearQueue()
    {

        while (front != nullptr)
        {

            Node *temp = front;

            front = front->next;

            delete temp;
        }

        rear = nullptr;

        cout << "\nQueue cleared successfully.\n";
    }

    // Destructor
    ~Queue()
    {

        clearQueue();
    }
};

// Function to clear terminal
void clearTerminal()
{

#ifdef _WIN32

    system("cls");

#else

    system("clear");

#endif
}

// Function to pause screen
void pauseScreen()
{

#ifdef _WIN32

    system("pause");

#else

    cout << "\nPress Enter to continue...";

    cin.ignore();

    cin.get();

#endif
}

// Main function
int main()
{

    Queue q;

    int choice;
    int value;

    // Infinite menu
    while (true)
    {

        cout << "\n\n1. Enqueue";
        cout << "\n2. Dequeue";
        cout << "\n3. Get Front Element";
        cout << "\n4. Get Rear Element";
        cout << "\n5. Display Queue";
        cout << "\n6. Check if Queue is Empty";
        cout << "\n7. Check if Queue is Full";
        cout << "\n8. Clear Queue";
        cout << "\n9. Clear Terminal";
        cout << "\n10. Exit";


        cout << "\nEnter your choice: ";
        cin >> choice;

        // Switch case
        switch (choice)
        {

        // Enqueue
        case 1:

            cout << "\nEnter value to enqueue: ";
            cin >> value;

            q.enqueue(value);

            break;

        // Dequeue
        case 2:

            q.dequeue();

            break;

        // Front
        case 3:

            q.getFront();

            break;

        // Rear
        case 4:

            q.getRear();

            break;

        // Display
        case 5:

            q.display();

            break;

        // Is Empty
        case 6:

            if (q.isEmpty())
            {

                cout << "\nQueue is EMPTY.\n";
            }
            else
            {

                cout << "\nQueue is NOT EMPTY.\n";
            }

            break;

        // Is Full
        case 7:

            if (q.isFull())
            {

                cout << "\nQueue is FULL.\n";
            }
            else
            {

                cout << "\nQueue is NOT FULL.\n";
                cout << "Linked List Queue has no fixed capacity.\n";
            }

            break;

        // Clear Queue
        case 8:

            q.clearQueue();

            break;

        // Clear Terminal
        case 9:

            clearTerminal();

            break;

        // Exit
        case 10:

            cout << "\nExiting program...\n";

            exit(0);

        // Invalid choice
        default:

            cout << "\nInvalid choice! Please try again.\n";
        }

        // Pause after every operation
        cout << "\n";

        pauseScreen();

        // Clear previous output
        clearTerminal();
    }

    return 0;
}