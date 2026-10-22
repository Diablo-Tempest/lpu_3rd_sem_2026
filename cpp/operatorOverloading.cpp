// Operator overloading is a feature in C++ that allows us to define how an existing operator behaves when it is used with objects of a class.

// int a = 10;
// int b = 20;
// int c = a + b;

/* Syntax for operator overloading

return_type operator symbol(parameters){
    // define the operator's behaviour
}
*/

// Complex operator+(const Complex& obj){
//     // addition logic
// }
// Complex us a built-in standard library class template designed to represent and manipulate complex numbers.
// Complex numbers: (a + bi)

/*
Types of operator overloading
1. Unary Operator overloading: An operator works on one operand. Ex, -a, ++a, --a, !a
2. Binary Operator Overloading: An operator works on two operands. Ex, a + b, a - b, a * b, a == b
*/

// Unary operator overloading

// #include <iostream>
// using namespace std;
// class Number
// {
//     int value;

// public:
//     Number(int y)
//     {
//         value = y;
//     }
//     Number operator-()
//     {
//         return Number(-value);
//     }
//     void display()
//     {
//         cout << value << endl;
//     }
// };
// int main()
// {
//     // int a = 10;
//     // cout << -a << endl; // the unary minus changes the sign of the operand.
//     Number n1(10);
//     Number n2 = -n1;
//     n1.display();
//     n2.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Counter
// {
//     int value;

// public:
//     Counter(int v)
//     {
//         value = v;
//     }

//     // prefix increment
//     Counter &operator++(){
//         ++value;
//         return *this;
//     }
//     // postfix increment
//     Counter operator++(int){
//         Counter old = *this;
//         value++;
//         return old;
//     }
//     void display(){
//         cout << value << endl;
//     }
// };
// int main()
// {
//     Counter c1(5);
//     ++c1;
//     c1.display();
//     c1++;
//     c1.display();
//     return 0;
// }

// Binary operator overloading

// #include <iostream>
// using namespace std;

// class Number
// {
//     int value;

// public:
//     Number(int v)
//     {
//         value = v;
//     }
//     Number operator+(const Number &obj)
//     {
//         return Number(value + obj.value);
//     }
//     void display()
//     {
//         cout << value << endl;
//     }
// };
// int main()
// {
//     Number n1(10);
//     Number n2(20);
//     Number n3 = n1 + n2;
//     n3.display();
//     return 0;
// }

/*
in C++, we can also define conversions involving user-defined classes
Categories:
1. Basic type to class type - double -> Distance
2. class type to basic type - Distance -> double
3. One class type to another - Meters -> centemeters
*/

// Basic type to class type

// #include <iostream>
// using namespace std;

// class Distance
// {
//     double meters;

// public:
//     explicit Distance(double m) // explicit prevents unintended implicit conversions
//     {
//         meters = m;
//     }
//     void display() const
//     {
//         cout << meters << " meters" << endl;
//     }
// };
// int main()
// {
//     // Distance d1 = 5.5; // wrong approach
//     Distance d1(5.5);            // right approach
//     Distance d2 = Distance(6.5); // right approach
//     d1.display();
//     d2.display();
//     return 0;
// }

// class type to basic type
#include <iostream>
using namespace std;
class Distance
{
    double meters;

public:
    // Member initiializer list initializes the class data member meters with the value of the parameter m.
    /*
    Steps:
    1.Distance(double m) is a constructor that receives a double value.
    2. : meters(m) initializes the data member meters using the parameter m.
    3. {} is the empty constructor body because initialization is already done.
    */
    Distance(double m) : meters(m) {} // member initializer list
    operator double()
    {
        return meters;
    }
};
int main()
{
    Distance d1(12.5);
    double value = d1;
    cout << value << endl;
    return 0;
}