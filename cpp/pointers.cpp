#include <iostream>
using namespace std;
int main()
{
    // Pointer: A pointer is a variab;le that stores the memory address of another variable.
    //  Derefenceing, pointer arthmetic, array, dynamic memory, double pointers, function pointers, smart pointers

    int num = 10;
    int *ptr1 = &num;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;
    int ****ptr4 = &ptr3;

    /*
    declaring pointers
    int* p;
    float* f;
    double* d;
    char* c;
    bool* b;
    */
    // cout << "Address: " << ptr1 << endl;
    // cout << "Value: " << *ptr1 << endl;  // derefencing the value from the address
    // cout << "Value: " << **ptr2 << endl; // derefencing the value from the address
    // cout << "Value: " << ***ptr3 << endl; // derefencing the value from the address
    // cout << "Value: " << ****ptr4 << endl; // derefencing the value from the address
    // int* ptr, int * ptr, int *ptr, int*ptr
    //& -- address-of operator
    //* -- Dereference operator

    // Null pointer - A pointer that points to nothing
    // int* p = NULL;
    // int * p = nullptr;

    // Pointer arithmetic

    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr; // 10
    // cout << sizeof(p);

    // generic pointer(void pointer): A void pointer can store address of an object of essentially any object type.

    int x = 10;
    void *ptr = &x;

    cout << *(static_cast<int *>(ptr)); // use this for void pointer

    /*
        p++ = 1000 + 4
    */
    // int n = 8;
    // p++;
    // p++;
    // p--;
    // p - n;

    // cout << *(p + 0) << endl;
    // cout << *(p + 1) << endl;
    // cout << *(p + 2) << endl;
    // cout << *(p + 3) << endl;
    // cout << *p;

    // traversing an array usiong pointer

    // for(int i = 0; i < 5; i++)
    //     cout << *(p+i) << "\t";

    return 0;
}