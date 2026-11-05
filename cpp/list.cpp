/*
A list is a STL sequence container generally implemented as a doubly linked list
Unlike vectors, it's elements are not stored in contiguous memory block.
Each node contains:
1. Data
2. Pointer to the previous node
3. pointer to the next node
*/
/*
List Functions
push_back() - Add element at the end
push_front() - Add element at the brginning
pop_back() - Remove the last element
pop_front() - Remove the first element
size() - return no of elements
empty() - Checks whether the list is empty
front() - Return the first element
back() - Return the last element
insert() - inserts an element at a position
erase() - Removes an element at a position
remove() - Remove all the elements equal to the value
sort() - sort the list
reverse() - reverse the list
clear() - remove all the elements
*/
#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l1;
    // push_back()
    l1.push_back(30);
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(50);
    l1.push_back(40);

    // push_front()
    l1.push_front(40);
    for (int element : l1)
        cout << element << " ";
    cout << endl;

    // pop back
    l1.pop_back();
    for (int element : l1)
        cout << element << " ";
    cout << endl;

    // pop front
    l1.pop_front();
    for (int element : l1)
        cout << element << " ";
    cout << endl;

    // insert
    auto it = l1.begin();
    advance(it, 1); // move the iterator forward by n positions
    l1.insert(it, 50);
    for (int element : l1)
        cout << element << " ";
    cout << endl;

    // remove
    l1.remove(50);
    for (int element : l1)
        cout << element << " ";
    cout << endl;

    // sort
    l1.sort();
    for (int element : l1)
        cout << element << " ";
    cout << endl;
    
    // reverse
    l1.reverse();
    for (int element : l1)
        cout << element << " ";
    cout << endl;
    return 0;
}