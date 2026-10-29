// Memory leak: It occurs when dynamically allocated memory is no loner needed but remains allocated because the program has failed to release it ot has lost, or otherwise failed to use, the means to release it. Leaks can cause increasing memory usage and may eventually affect performance or cause a program to run out of memory.

/* Allocation failues
What is allocation failure?
An alllocation failure happens when a request for dynamic memory cannot be satisfied.
If sufficient memory cannot be obtained, ordinary throwing (new) will generally report the failure by throwing std::bad_alloc
*/

//smart memory management
// #include <iostream>
// #include<memory>
// using namespace std;
// int main(){
//     unique_ptr<int> ptr = make_unique<int>(100);
//     cout << *ptr << endl;
//     // the memory is released automatically when ptr goes out of scope.
//     return 0;
// }

#include <iostream>

using namespace std;

int main(){
    // try
    // {
    //     int* ptr = new int[100000000];
    //     cout << "Memory allocated successfully" << endl;
    // }
    // catch(const bad_alloc& e)
    // {
    //     cout << "Memory allocation failed" << endl;
    // }
    // notthrow - if allocation failure happens, then it is reported by returning nullptr for the allocation request instead of throwing styd::bad_alloc.
        int* ptr = new (notthrow) int;
        if(ptr == nullptr)
            cout << "Memory allocation failed" << endl;
        else{
            *ptr = 100;
            cout << *ptr << endl;
            cout << "Memory allocated successfully" << endl;
        }
    
    return 0;
}