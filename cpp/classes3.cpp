#include <iostream>
using namespace std;

/*
    Inline Member function: It is a member function where the computer is requested to replace the function call with the function's actual code.
    A function defined inside the class definition is inplicitly inline.

    Consider - obj.showAge()
    Normally this involdes a function call
    With inlining, the compiler may effectively replace it with - cout << obj.age;
    This can reduce function-call overhead

    Important point: inline is a request to the compiler, not a command. The compiler may decide not to inline this function, especially if the function is large or complex.

    Best case: inline fuinctions are generally used for small, frequently called functions.

    Function-call overhead is the extra time and resources needed to call and return from a function, beyond the actual work done inside the functions.

    When a function is called, the program may need to:
    1. pass arguments
    2. save the current execution state
    3. jump from function's memory location
    4. create a stack frame for local variables
    5. execute the function
    6. return the retult and restore the previous state.

    int add(int a, int b){
    return a + b;
    }
    int main(){
        int x = add(5, 6);
    }
    the a + b, is the actual work. The operations required to enter add() and comeback to main() are the function call overhead.

    Non-inline Member functions
    It is a normal function that isn't treated as inline.

*/

// inline member function
//  class Student{
//      public:
//          int age;
//          void showAge(){
//              cout << age;
//          }

// };

// non-inline member function
// here, showAge() is declared in the class but defined outside of it.
// class Student{
//     public:
//         int age;
//         void showAge();
// };
// void Student::showAge(){
//     cout << age;
// }

/*
    Static Data members
    It belongs to the class, not to the individual objects
    Obj1 - count
    Obj2 - count
    Obj3 - count

    if it is static

    obj1 \
    obj2 - count
    obj3 /

*/
// class Student{
//     public:
//         static int count;
// };
// int Student::count = 0;

/*
 Static member function
 It is a function that belongs to the class rather than a particular object

 //no object is required

 Important rule
 A static mdember function does not have a 'this' pointer.
 therefore, it can directly access:
 1. static data members
 2. other static member functions

 but it cannot directly access normal non-static members.
*/

// class Student{
//     public:
//         static int count;
//         static void showCount(){
//             cout << "Count: " << count << endl;
//         }
//         static void increase(){
//             count++;
//         }
// };
// int Student::count = 0;

int main()
{

    // static data member
    // Student s1;
    // Student s2;
    // Student s3;
    // s1.count = 1;
    // s1.count += 1;
    // s2.count += 3;
    // cout << "S1 count: " << s1.count << endl;
    // cout << "S2 count: " << s2.count << endl;
    // cout << "S3 count: " << s3.count << endl;

    // static member function
    // Student::showCount();
    // Student::increase();
    // Student::showCount();
    // Student::increase();
    // Student::showCount();
    // Student::increase();
    // Student::showCount();
    // Student::increase();
    // Student::showCount();

    // reference variable: A reference variable is another name, alias for an existing variable.
    int x = 10;
    int &ref = x;

    cout << x << endl;
    cout << ref << endl;

    return 0;
}