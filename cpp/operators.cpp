#include <iostream>
using namespace std;
/*
    Operators are symbols the perform operations on variables and values. They are classifies into several types
    1. Arithmetic - +, -, *, /, %, ++, --
    2. Relational/Comparision - ==, !=, >, >=, <, <=
    3. Logical - &&, !, ||
    4. Assignment - =, +=, -=, *=, /=, %=
    5. Bitwise - &, |, ^, ~, <<,  >>
    6. Unary - +, -, ++, --, !
    7. Ternary - condition ? expression1 : expression2
    8. sizeOf - Returns the size of a data type or variable in bytes
    9. Comma - Evaluates expressions from left to right and returns the last value
    10. Scope Resolution - :: Access global variable or class members
    11. Member Access - ., ->
    12. Others - [], (), new, delete
*/
int x = 100;
int main()
{
    int num1 = 10, num2 = 23;
    // Arithmetic Operators
    //  cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
    //  cout << num1 << " - " << num2 << " = " << num1-num2 << endl;
    //  cout << num1 << " x " << num2 << " = " << num1*num2 << endl;
    //  cout << num1 << " / " << num2 << " = " << num1/num2 << endl;
    //  cout << num1 << " % " << num2 << " = " << num1%num2 << endl;
    //  cout << "Post Increment" << num1++ << endl;
    //  cout << "Post Decrement" << num2-- << endl;
    //  cout << "Pre Increment" << ++num1 << endl;
    //  cout << "Pre Decrement" << --num2 << endl;

    // Relational/Comparision
    //  cout << (num1==num2) << endl;
    //  cout << (num1!=num2) << endl;
    //  cout << (num1>num2) << endl;
    //  cout << (num1>=num2) << endl;
    //  cout << (num1<num2) << endl;
    //  cout << (num1<=num2) << endl;

    // Logical
    // int n1 = 1, n2 = 0, n3 = 1, n4 = 0, n5 = 50;
    // cout << "AND GATE:" << (n1 && n3) << endl;
    // cout << "OR GATE:" << (n4 || n2) << endl;
    // cout << (!n5) << endl;

    // Assignment
    //  int a = 10;
    //  a += 10; // a = a + 10
    //  a -= 10; // a = a - 10
    //  a *= 10; // a = a * 10
    //  a /= 10; // a = a / 10
    //  a %= 10; // a = a % 10

    // Bitwise
    // int a = 5, b = 3;
    // cout << (a & b) << endl;
    // cout << (a | b) << endl;
    // cout << (a ^ b) << endl;
    // cout << (a << b) << endl;
    // cout << (a >> b) << endl;

    // Ternary
    //  int max = (num1 > num2)? num1 : num2;
    //  cout << "Maximum Number: " << max;

    // sizeof
    //  cout << "sizeOf(int): " << sizeof(int) << endl;
    //  cout << "sizeOf(double): " << sizeof(double) << endl;
    //  cout << "sizeOf(char): " << sizeof(char) << endl;

    // comma
    //  int a;
    //  a = (2, 4, 6, 13);
    //  cout << a;

    // Scope resolution
    //  int x = 50;
    //  cout << ::x;

    // Understanding Bitwise
    int a = 5, b = 3;
    /*
         5 = 0 1 0 1
      &  3 = 0 0 1 1
      ----------------
             0 0 0 1

         5 = 0 1 0 1
      |  3 = 0 0 1 1
      ----------------
             0 1 1 1

         5 = 0 1 0 1
      ^  3 = 0 0 1 1
      ----------------
             0 1 1 0

        5 = 0 0 0 0 0 1 0 1
        -5 = 1 1 1 1 1 0 1 0

        -x = -(x + 1)

    */

    // cout << (a & b) << endl;
    // cout << (a | b) << endl;
    // cout << (a ^ b) << endl;
    // cout << (~5) << endl;

    // left shift - move all the bits to the left
    //  5 << 1 - 0 1 0 1 - 1 0 1 0
    cout << "Left Shift" << (5 << 1) << endl;

    // Right shift - move bits to the right
    //  20 = 1 0 1 0 0 - 0 1 0 1 0
    cout << "Right Shift" << (20 >> 1) << endl;

    return 0;
}