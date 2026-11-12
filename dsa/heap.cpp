#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

class MaxHeap
{
    vector<int> heap;

public:
    // 1. Insertion
    void insert(int value)
    {
        heap.push_back(value);
        int i = heap.size() - 1;

        // heapify up
        while (i > 0)
        {
            int parent = (i - 1) / 2;
            if (heap[i] > heap[parent])
            {
                swap(heap[i], heap[parent]);
                i = parent;
            }
            else
                break;
        }
    }
    void deletion(){
        if(heap.empty()){
            cout << "Heap is Empty!" << endl;
            return;
        }
        cout << "Deleted Element: " << heap[0] << endl;

        heap[0] = heap.back();
        // remove the last element
        heap.pop_back();

        // heapify down
        int i = 0;
        int n = heap.size();

        while(true){
            int left = 2 * i + 1;
            int right = 2 * i + 2;

            int largest = i;

            // check the left child
            if(left < n && heap[left] > heap[largest]){
                largest = left;
            }
            // check the right child
            if(right < n && heap[right] > heap[largest]){
                largest = right;
            }

            // stop the loop if parent is largest
            if(largest == i)
                break;
            swap(heap[i], heap[largest]);

            i = largest;
        }
    }
    void display(){
        if(heap.empty()){
            cout << "Heap is Empty!" << endl;
            return;
        }
        cout << "Heap Elements: ";
        for(int x: heap)
            cout << x << " ";
        cout << endl;
    }
    // return a copy of heap elements
    vector<int> getElements() const {
        return heap;
    }
};

// Heapify function for heap sort
void heapify(vector<int>& arr, int n, int i){
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    // check the left child
    if (left < n && arr[left] > arr[largest])
        largest = left;
    // check the right child
    if (right < n && arr[right] > arr[largest])
        largest = right;
    // if largest is not the root
    if(largest != i){
        swap(arr[i], arr[largest]);
        // recursively heapify
        heapify(arr, n, largest);
    }
}

void heapSort(vector<int>& arr){
    int n = arr.size();

    // step 1: Build Max heap
    for(int i = n/2; i >= 0; i--)
        heapify(arr, n, i);
    
    // step 2: Extract elements one by one
    for(int i = n-1; i>0; i--){
        // move largest element to the end
        swap(arr[0], arr[i]);
        // restore Max heap property
        heapify(arr, i, 0);
    }
}

void clearTerminal()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main()
{
    MaxHeap heap;
    int choice;
    int value;

    while (true)
    {
        cout << endl
             << "Max Heap Menu\n";
        cout << endl
             << "\n1. Insert Element";
        cout << endl
             << "\n2. Delete Root";
        cout << endl
             << "\n3. Display Heap";
        cout << endl
             << "\n4. Heap Sort";
        cout << endl
             << "\n5. Exit";
        cout << endl
             << endl
             << "Enter Your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter Value: ";
            cin >> value;
            heap.insert(value);
            break;
        case 2:
            heap.deletion();
            break;
        case 3:
            heap.display();
            break;
        case 4:
        {
            vector<int> arr = heap.getElements();
            if (arr.empty())
            {
                cout << "Heap is Empty!" << endl;
                break;
            }
            heapSort(arr);

            cout << "Sorted Array: ";
            for(int x: arr)
                cout << x << " ";
            cout << endl;
            break;
        }
        case 5:
            system("pause");
            cout << "Program Exited!";
            exit(1);
        default:
            cout << "Invalid Choice!" << endl;
        }
        system("pause");
        cout << endl;
        clearTerminal();
    }
    return 0;
}