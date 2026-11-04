// Vector is an stl sequence container that works like a dynamic array
/*
Vector functions:
push_back() - add an element at the end
pop_back() - revome the last end
size() - return the no of elements
capacity() - return allocated element capacity
empty() - check whether the vector is empty
front() - return the first element
back() - return the last element
at() - accesses an element with bounds checking
clear() - remove all the elements
insert() - inserts an element at a position
erase() - remove an element or range
resize() - changes the vector size
reserve() - requests capacity for at least a specified no of elements

*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // method 1
    //  vector<int> arr1; // initialize dynamic array
    //  vector<float> arr2; // float type vector
    //  vector<double> arr3; // double type vector
    //  vector<string> arr4; // string type vector

    // method 2
    // vector<int> arr1(5); // initialize with a size of 5

    // method 3
    // vector<int> arr1(5, 100); // vector with size 5 and default initialized value as 100

    // initialize vector
    vector<int> v1;

    // add element at the end()
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    for (int element : v1)
        cout << element << " ";
    cout << endl;
    // remove the last element
    v1.pop_back();
    for (int element : v1)
        cout << element << " ";
    cout << endl;

    // insert at a specific position
    v1.insert(v1.begin() + 1, 30);
    for (int element : v1)
        cout << element << " ";
    cout << endl;

    // delete elements using erase()
    v1.erase(v1.begin());
    for (int element : v1)
        cout << element << " ";
    cout << endl;

    cout << "Capacity: " << v1.capacity() << endl; // capacity
    cout << "Size: " << v1.size() << endl;         // size
    return 0;
}