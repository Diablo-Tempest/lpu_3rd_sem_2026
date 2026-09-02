#include <iostream>
using namespace std;
// int *func()
// {
//     int *x = new int(100);
//     return x;
// }

// Classes containing pointers

// class Student
// {
//     int *marks; // storing the address
// public:
//     Student(int m)
//     {
//         marks = new int(m);
//     }
//     ~Student()
//     {
//         delete marks;
//     }
//     void display()
//     {
//         cout << "Marks: " << *marks << endl;
//     }
// };

// class A{
//     public:
//         int* p;
//         A(int x){
//             p = new int(x);
//         }
//         ~A(){
//             delete p;
//         }
// };

// class A
// {
//     int *p;

// public:
//     A(int x)
//     {
//         p = new int(x);
//     }
//     ~A()
//     {
//         delete p;
//     }
//     A(const A &other)
//     {
//         p = new int(*other.p);
//     }
//     void display()
//     {
//         cout << *p << endl;
//     }
// };

// pointer to objects
// A pointer can point to an object

// class Student
// {
// public:
//     void display()
//     {
//         cout << "Hello" << endl;
//     }
// };

// Array of objects

class Student
{
public:
    int age;
    void display()
    {
        cout << age << '\t';
    }
};
int main()
{
    Student arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i].age;
    }
    for (int i = 0; i < 5; i++)
    {
        arr[i].display();
    }

    // Student s1;
    // Student *ptr = &s1;

    // ptr->display();
    // (*ptr).display();

    // A a1(70);
    // a1.display();
    // A b1 = a1;
    // b1.display();

    /*
        a1.p = [10]
        a2.p = [10]
    */
    /*
    Shallow copy vs Deep copy
    Shalow Copy - Only the pointer/address value is copied
    Deep Copy - A new object is created;
    */
    // deep copy

    // Student s1(70);
    // s1.display();

    // A a1(10);
    // A b1 = a1;
    /*
        It copies the pointer value, not the actual data.
        This is called shallow copy
    */

    // Dangling Pointer: It is a pointer that points to a memory that is no longer valid for the object it originally referred to.

    // int* func(){
    //     int x = 100;
    //     return &x;
    // }
    // This is wrong
    // x is a local variablde and is destroyed when func() returns
    // This is correct

    // int *p = func();
    // cout << *p << endl;
    // delete p;
    // p = nullptr;
    // cout << *p << endl;

    // Wild pointer: It is a pointer that has not been initialized

    // p contains some indeterminate address
    // p -> ????????. So, p ≠ nullptr
    // int *p;
    // cout << *p;
    // int *p = 0; // null pointer but very dangerous initialization

    // void func(int);
    // void func(int*);

    // func(0); // call func(int)
    // func(nullptr); // call func(int*)
    // So, nullptr communicates to the null pointer value

    // Memory Leak
    // int *p = new int(100);
    // cout << *p << endl;
    // p = new int(200);
    // cout << *p << endl;

    /*
    There is no pointer throug which we can reach 100
    Therefore, it can no longer be released with delete
    That's a memory leak
    */
    // int *p = new int(100);
    // delete(p);
    // cout << *p << endl;
    // p = new int(200);
    // cout << *p << endl;

    return 0;
}