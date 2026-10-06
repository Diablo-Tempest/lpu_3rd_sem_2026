#include <iostream>
#include <cstdlib> // for exit()
using namespace std;

#define MAX 5

class Queue
{
private:
    int arr[MAX];
    int front;
    int rear;

public:
    // Constructor
    Queue()
    {
        front = -1;
        rear = -1;
    }

    // Check whether queue is empty
    bool isEmpty()
    {
        return (front == -1);
    }

    // Check whether queue is full
    bool isFull()
    {
        return (rear == MAX - 1);
    }

    // Insert element into queue
    void enqueue(int value)
    {

        if (isFull())
        {
            cout << "\nQueue Overflow! Queue is full.\n";
            return;
        }

        // First element
        if (front == -1)
        {
            front = 0;
        }

        rear++;
        arr[rear] = value;

        cout << "\n"
             << value << " inserted into queue.\n";
    }

    // Delete element from queue
    void dequeue()
    {

        if (isEmpty())
        {
            cout << "\nQueue Underflow! Queue is empty.\n";
            return;
        }

        int value = arr[front];

        // If only one element is present
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front++;
        }

        cout << "\n"
             << value << " deleted from queue.\n";
    }

    // Display front element
    void getFront()
    {

        if (isEmpty())
        {
            cout << "\nQueue is empty.\n";
            return;
        }

        cout << "\nFront element = " << arr[front] << endl;
    }

    // Display rear element
    void getRear()
    {

        if (isEmpty())
        {
            cout << "\nQueue is empty.\n";
            return;
        }

        cout << "\nRear element = " << arr[rear] << endl;
    }

    // Display all queue elements
    void display()
    {

        if (isEmpty())
        {
            cout << "\nQueue is empty.\n";
            return;
        }

        cout << "\nQueue elements: ";

        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    // Clear all queue elements
    void clearQueue()
    {

        front = -1;
        rear = -1;

        cout << "\nQueue cleared successfully.\n";
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

// Main function
int main()
{

    Queue q;

    int choice;
    int value;

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

        switch (choice)
        {

        case 1:
            cout << "\nEnter value to enqueue: ";
            cin >> value;
            q.enqueue(value);
            break;

        case 2:
            q.dequeue();
            break;

        case 3:
            q.getFront();
            break;

        case 4:
            q.getRear();
            break;

        case 5:
            q.display();
            break;

        case 6:
            if (q.isEmpty())
                cout << "\nQueue is EMPTY.\n";
            else
                cout << "\nQueue is NOT EMPTY.\n";
            break;

        case 7:
            if (q.isFull())
                cout << "\nQueue is FULL.\n";
            else
                cout << "\nQueue is NOT FULL.\n";
            break;

        case 8:
            q.clearQueue();
            break;

        case 9:
            clearTerminal();
            break;

        case 10:
            cout << "\nExiting program...\n";
            exit(0);

        default:
            cout << "\nInvalid choice! Please enter a valid option.\n";
        }

        cout << "\n";
        system("pause");
        clearTerminal();
    }

    return 0;
}