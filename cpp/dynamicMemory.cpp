#include <iostream>
using namespace std;
int main()
{

    // using new in single variable
    // int* ptr = new int;
    // *ptr = 100;
    // cout << "Value: " << *ptr << endl;
    // delete ptr;
    // ptr = nullptr;

    // using new with initialization
    // int* ptr = new int(100); // calling the int constructor
    // cout << "Value: " << *ptr << endl;
    // delete ptr;
    // ptr = nullptr;

    // Dynamic memory allocation for arrays
    int n;
    cout << "Length of array: ";
    cin >> n;
    int *arr = new int[n]{};
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
        cout << "arr[" << i << "]: " << arr[i] << endl;

    delete[] arr; // free array
    return 0;
}