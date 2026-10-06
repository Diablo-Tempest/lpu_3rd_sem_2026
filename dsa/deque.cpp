#include <iostream>
#include <cstdlib>   // for exit()
using namespace std;

#define MAX 5

class Deque {
private:
    int arr[MAX];
    int front;
    int rear;

public:
    // Constructor
    Deque() {
        front = -1;
        rear = -1;
    }

    // Check whether deque is empty
    bool isEmpty() {
        return (front == -1);
    }

    // Check whether deque is full
    bool isFull() {
        return ((front == 0 && rear == MAX - 1) ||
                (front == rear + 1));
    }

    // Insert element at front
    void insertFront(int value) {

        if (isFull()) {
            cout << "\nDeque Overflow! Cannot insert at front.\n";
            return;
        }

        // First element
        if (isEmpty()) {
            front = rear = 0;
        }
        // Circular movement
        else if (front == 0) {
            front = MAX - 1;
        }
        else {
            front--;
        }

        arr[front] = value;

        cout << "\n" << value << " inserted at front.\n";
    }

    // Insert element at rear
    void insertRear(int value) {

        if (isFull()) {
            cout << "\nDeque Overflow! Cannot insert at rear.\n";
            return;
        }

        // First element
        if (isEmpty()) {
            front = rear = 0;
        }
        // Circular movement
        else if (rear == MAX - 1) {
            rear = 0;
        }
        else {
            rear++;
        }

        arr[rear] = value;

        cout << "\n" << value << " inserted at rear.\n";
    }

    // Delete element from front
    void deleteFront() {

        if (isEmpty()) {
            cout << "\nDeque Underflow! Nothing to delete.\n";
            return;
        }

        int value = arr[front];

        // Only one element
        if (front == rear) {
            front = rear = -1;
        }
        // Circular movement
        else if (front == MAX - 1) {
            front = 0;
        }
        else {
            front++;
        }

        cout << "\n" << value << " deleted from front.\n";
    }

    // Delete element from rear
    void deleteRear() {

        if (isEmpty()) {
            cout << "\nDeque Underflow! Nothing to delete.\n";
            return;
        }

        int value = arr[rear];

        // Only one element
        if (front == rear) {
            front = rear = -1;
        }
        // Circular movement
        else if (rear == 0) {
            rear = MAX - 1;
        }
        else {
            rear--;
        }

        cout << "\n" << value << " deleted from rear.\n";
    }

    // Get front element
    void getFront() {

        if (isEmpty()) {
            cout << "\nDeque is empty.\n";
            return;
        }

        cout << "\nFront element = " << arr[front] << endl;
    }

    // Get rear element
    void getRear() {

        if (isEmpty()) {
            cout << "\nDeque is empty.\n";
            return;
        }

        cout << "\nRear element = " << arr[rear] << endl;
    }

    // Display deque
    void display() {

        if (isEmpty()) {
            cout << "\nDeque is empty.\n";
            return;
        }

        cout << "\nDeque elements: ";

        int i = front;

        while (true) {
            cout << arr[i] << " ";

            if (i == rear)
                break;

            i = (i + 1) % MAX;
        }

        cout << endl;
    }

    // Clear deque
    void clearDeque() {
        front = -1;
        rear = -1;

        cout << "\nDeque cleared successfully.\n";
    }
};


// Function to clear terminal
void clearTerminal() {

#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif

}


// Main function
int main() {

    Deque dq;

    int choice;
    int value;

    while (true) {


        cout << "\n\n1. Insert at Front";
        cout << "\n2. Insert at Rear";
        cout << "\n3. Delete from Front";
        cout << "\n4. Delete from Rear";
        cout << "\n5. Get Front Element";
        cout << "\n6. Get Rear Element";
        cout << "\n7. Display Deque";
        cout << "\n8. Check if Deque is Empty";
        cout << "\n9. Check if Deque is Full";
        cout << "\n10. Clear Deque";
        cout << "\n11. Clear Terminal";
        cout << "\n12. Exit";


        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "\nEnter value to insert at front: ";
                cin >> value;
                dq.insertFront(value);
                break;

            case 2:
                cout << "\nEnter value to insert at rear: ";
                cin >> value;
                dq.insertRear(value);
                break;

            case 3:
                dq.deleteFront();
                break;

            case 4:
                dq.deleteRear();
                break;

            case 5:
                dq.getFront();
                break;

            case 6:
                dq.getRear();
                break;

            case 7:
                dq.display();
                break;

            case 8:
                if (dq.isEmpty())
                    cout << "\nDeque is EMPTY.\n";
                else
                    cout << "\nDeque is NOT EMPTY.\n";
                break;

            case 9:
                if (dq.isFull())
                    cout << "\nDeque is FULL.\n";
                else
                    cout << "\nDeque is NOT FULL.\n";
                break;

            case 10:
                dq.clearDeque();
                break;

            case 11:
                clearTerminal();
                break;

            case 12:
                cout << "\nExiting program...\n";
                exit(0);

            default:
                cout << "\nInvalid choice! Please try again.\n";
        }

        cout << "\n";
        system("pause");
        clearTerminal();
    }

    return 0;
}