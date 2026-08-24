/* A function is a named block of reusable code. It follows Don't Repeat Yourself(DRY) principle.

Functions Provide:
1. Reusability: Write one, use many times
2. Modularity: Break a large program into smaller pieces.
3. Readability: sortArray(), printArray(), is mucg easier to understand than one huge main()
4. Easy Debugging: We can isolate problems inside inidividual functions.
5. Abstraction: You don't necessarily need to know how a function works internally.

return_type function_name(parameters){
    // function body
}


Parameter -> Variable declared in function
Argument -> Actual value passed to the function.

Three concepts of functions:
Declaration
    |
Definition
    |
Call

What is the purpose of return function:
1. It send a value back
2. It terminates the function

Function Overloading: C++ allows multiple functions to have the same name as long as their parameter lists differ.

*/
#include <iostream>
using namespace std;

// int add(int, int); // function prototype/declaration: This tells that there exisits a function called add that takes two int's and returns an int.
// return type function with parameters
// int add(int num1, int num2)
// {
//     return num1 + num2;
// }
// int add(double num1, double num2)
// {
//     return num1 + num2;
// }
// int add(int num1, int num2, int num3)
// {
//     return num1 + num2 + num3;
// }

// You cannot overload a function only by return type
// int add(int num1, int num2)
// {
//     return num1 + num2;
// }
// double add(int num1, int num2)
// {
//     return num1 + num2;
// }

// void function
// void greet()
// {
//     cout << "Greetings User " << endl;
// }
// function with no parameters
// int getNumber()
// {
//     return 100;
// }

// multiple return statements
// int max(int num1, int num2)
// {
//     if (num1 > num2)
//         return num1;
//     return num2;
// }
// int absolute(int num)
// {
//     if (num < 0)
//         return -num;
//     return num;
// }

// void greeting(int age, int year, string name = "User", int marks = 100, string job = "SDE") // default arguments
// {
//     cout << "Welcome, " << name << endl;
//     cout << "Age: " << age << endl;
// }
// If a parameter has a default value, parameters to it's right generally must also have defaults.
int val2 = 0; // global function;
// void counter(){
//     static int val = 0; // A local static variable preserves it's value between function falls
//     val++;
//     cout << "Counter: " << val << endl;
// }

// Closure function
//  The return function remembers x, even though outer() has ended
//  auto outer(){
//      int x = 10;
//      return [x](){
//          cout << "Counter: " << x << endl;
//      };
//  }

// recursion
int factorial(int num)
{
    if (num == 1 || num == 0)
        return 1;                    // base case
    return num * factorial(num - 1); // return value which is calling itseft
}

int main()
{
    int num = 5;
    cout << num << "! = " << factorial(num) << endl;
    // auto fn = outer();
    // fn();

    // counter();
    // counter();
    // counter();
    // counter();
    // counter();
    // counter();
    // greeting(28, 2026, "Biprosom");
    // int num1 = 5, num2 = 7, num3 = 10;
    // double num4 = 1.5, num5 = 5.3;
    // function call
    // greet();
    // cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
    // cout << num4 << " + " << num5 << " = " << add(num4, num5) << endl;
    // cout << num1 << " + " << num2 << " + " << num3 << " = " << add(num1, num2, num3) << endl;
    // int x = getNumber();
    // cout << x;
    return 0;
}