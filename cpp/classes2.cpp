#include <iostream>
using namespace std;

/*
 Destructor: It is called when an object is automatically destroyed.

 In OOPS, object lifetime means the period when an object is created until when it is destroyed.

 Creation -> Object exixts -> Object is used -> Destruction

 Conceptually:
 Object is created
       |
 Contructor runs
       |
 Object exists
       |
 Program leaves object's lifetime
       |
 Object Destroyed
       |
 Destructor runs

 Why destructors are important
 They're especially important for resource management.

*/

// class Student
// {
// public:
//     Student()
//     {
//         cout << "Contructor is initiated\n";
//     }
//     ~Student()
//     {
//         cout << "Destructor is initiated\n";
//     }
// };

// class Test
// {
// private:
//     int *data;

// public:
//     Test()
//     {
//         data = new int;
//     }
//     ~Test()
//     {
//         delete data;
//     }
// };
/*
The destructor releases dynamically allocated memory
in modern c++, RAII and smart pointers are generally preferred over manually managing mremory with the new/delete.
RAII - Resource Aquisition is Initialization
The idea is:
Acquire a resource when an object is created, and release it automatically when the object is destroyed.

Smart pointers: It use RAII to manage dynamically allocated memory.
    Insted of:
    Student * s1 = new Student();
    delete s;

    you can use:

    unique_ptr<Student> s = make_unique<Student>()

    Three types of smart pointers:
    1. unique_ptr --> One owner
    2. shared_ptr --> multiple owners
    3. weak_ptr --> non-owning reference to a shared_ptr object

*/

/*
   Types of user-defined variables:
   1. struct
   2. union
   3. enum
   4. class

   A structure allows you to group different types of data together
   With a structure, all related information become one logical entity

   */

//    In modern c++, structures can contain member functions

// struct Student
// {
//     string name;
//     int age;
//     float marks;

//     void display()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//         cout << "Marks: " << marks << endl;
//     }
// };
/*
Union: It is also a group a different data types, but there is a major difference which is that it can only store one member at a time.
*/
// union Data
// {
//     int i;
//     float f;
//     char c;
// };

/*
Enumeration: It represents a set of named integral values
*/
enum Day
{
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

// explicitly assigning values
enum ErrorCode
{
    OK = 200,
    CREATED = 201,
    NOT_FOUND = 404,
    SERVER_ERROR = 500
};

/*
    Difference between struct and class
    1. struct doesn't have constructors or destructors while class has.
    2. struct doesn't have access control like public, private, proted while class has.
    3. Inheritance is public by default in struct which can lead to data leak while in classes, inheritance is private by default.
    4. strucxt is typically used for simple data records while classes are typically used for encapsulation and OOP.
*/

int main()
{
    // Student s1;
    // s1.name = "Biprosom";
    // s1.age = 28;
    // s1.marks = 85.5;

    // s1.display();

    // Data d1;
    // d1.i = 10;
    // cout << "Number: " << d1.i << endl;
    // d1.c = 'a';
    // cout << "Number: " << d1.i << endl;
    // cout << "Character: " << d1.c << endl;

    Day today = MONDAY;
    ErrorCode e1 = SERVER_ERROR;
    cout << "Today: " << today << endl;
    cout << "Status: " << e1 << endl;
    return 0;
}