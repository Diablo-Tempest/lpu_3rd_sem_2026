#include <iostream>
using namespace std;
int main()
{
    // int num1 = 10;
    // cout << "num1: " << num1 << endl;
    // int *ptr1 = &num1;
    // int **ptr2 = &ptr1;
    // int *ptr3 = &ptr1;
    // cout << "Address of num1: " << ptr1 << endl;
    // cout << "Value of num1 using Pointer: " << *ptr1 << endl;
    // cout << "Address of ptr1: "<< ptr2 << endl;
    // cout << "Value of num1 using Double Pointer: " << **ptr2 << endl;
    // int *ptr1 = nullptr;
    // cout << "Value of ptr1: " << *ptr1;
    // if (ptr1 == nullptr)
    // {
    //     cout << "Pointer is Empty" << endl;
    // }
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    cout << "Value of ptr: " << *ptr << endl;
    cout << "Value of ptr: " << *ptr + 1 << endl;
    cout << "Value of ptr: " << *(ptr + 2) << endl;
    cout << 4 * sizeof(int);
    return 0;
}