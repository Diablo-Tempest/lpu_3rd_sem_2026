#include <iostream>
#include <iomanip>
#define NUM 10
using namespace std;

// user-defined manipulator
// ostream &line(ostream &out)
// {
//     out << "---------------\n";
//     return out;
// }

/* Friend of a class: normally, private members of a class can be accessed only by member functions of that class.
A friend is given speciasl permission to access private and protected members.
Therenare two major type:
1. Friend function
2. Friend class
*/

// friend function
// class Student{
//     private:
//         int marks = 100;
//     public:
//         void display(){
//             cout << marks;
//         }
//         friend void fDisplay(Student s);
// };

// void fDisplay(Student s){
//     cout << "Marks: " << s.marks;
// }

// friend class
// class A{
//     private:
//         int x = 50;
//         friend class B;
// };

// class B{
//     public:
//         void display(A obj){
//             cout << obj.x;
//         }
// };

// call by address
// int change(int *x){
//     *x = 100;
// }

// call by reference
//  int change(int &x){
//      x = 100;
//  }
// Recursive member function
class Number
{
public:
    int factorial(int n)
    {
        if (n == 0 || n == 1)
            return 1;
        else
            return n * factorial(n - 1);
    }
};

int main()
{
    Number n1;

    cout << n1.factorial(6);

    // int num = 10;
    // int &n = num;
    // change(&num);
    // change(num);
    // cout << num;
    // friend function
    // Student s;
    // fDisplay(s);

    // friend class
    //  A a1;
    //  B b1;
    //  b1.display(a1);

    // cout << NUM;
    // const int num = 10;
    // Mapipulators are funstions or objects used with streams such cin, cout. They modify the way input or output is performed.

    // cout << "Hello" << endl;
    // cout << "World" << endl;
    // // setw() is used to set the width od the next output field
    // cout << setw(10) << 25;

    // setprecision() control the number og digits displayed
    // cout << setprecision(3) << 3.14159;3

    // left and right - control alignment
    // cout << right << setw(10) << "hello";

    // setfill() changes the filling character

    // cout << setfill('*') << setw(10) << 25;

    // boolean manipulator
    // cout << true;
    // cout << boolalpha << true;

    // user defined manipulator: to create our own manipulator

    // cout << "Hello" << line;
    return 0;
}