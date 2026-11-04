/*
Three main components of STL:
1. Containers
Containers are objects that stores and organize collections of data

Some common containers are:
Vector - Dynamic array
List - Doubly Linked List
Deque - Double-ended sequence
Stack - First-in, Last-Out (FiLO)
Queue - First-In, First-Out (FIFO)
Set - Stores unique sorted elements
Map - Store key-value pairs in a sorted key order.

Types of containers
1. Sequence Containers: Stores elements in a linear sequence. vector, list, deque, array
2. Associative containers: Store elements based on keys, generally in sorted order. Eg: set, map, multiset, multimap
3. Unorderdered Associative Containers: Store elements using hashing rather than maintaining sorted order. Eg: unordered_set, unordered_map
4. Container adapters: Provide restricted interfaces over underlying containers. Eg. stack, queue, priority_queue

2. Algorithms: Algorithms are predefined functions that perform operations on container elements.

Some common algorithms:
sort() - sort the elements
find() - search for an element
reverse() - reverse the elements
count() - count occurences
min_element() - finds minimum element
max_element() - finds maximum element
accumulate() - calculate the sum
binary_search() - seaches in sorted data

3. Iterators: Iterators are objects that allows us to access and traverse elements stored in containers.
Some iterator functions are:
begin() - return iterator to the first element
end() - return iterator to the last element
rbegin() - return reverse iterator to the last element
rend() - return reverse iterator to the first element
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v1 = {30, 20, 50, 10, 40};
    cout << "Before Sorting: ";
    for (int element : v1)
        cout << element << " ";
    cout << endl;

    sort(v1.begin(), v1.end()); // sort using stl

    cout << "After Sorting: ";
    for (int element : v1)
        cout << element << " ";
    cout << endl;
    return 0;
}