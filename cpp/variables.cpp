#include <iostream>
#include<string>
// #include <iomanip>
using namespace std;
int main()
{
    /*
    Data types
    1. Fundamental/basic - int, char, float, double, bool, void
    2. Derived - Array, Pointer, Reference, Function
    3. User-defined - Struct, Class, union, enum
    4. Standard Library Types - std::string, std::vector, etc
    */
    // int age = 28;     // declaration and initialization
    // int lucky_number; // declaration
    // cout << "Age: " << age << '\n';
    // char character = 'A';
    // cout << "Character: " << character << "\n";
    // float num = 12.53f;
    // cout << "Num: " << num << '\n';
    // double num2 = 3.1423456789098765432;
    // cout << "Num2: " << std::setprecision(17) << num2 << '\n';
    // bool completed = true;
    // short int age2 = 32767;
    // cout << "Age2: " << age2 << '\n';
    // short int : -32,768 - 32,767
    // long population = 1400000000000000;
    // long long population2 = 1400000000000000;
    // unsigned int age3 = 30;
    // 0 to 4,294,697,295
    // cout << "Age3: " << age3 << '\n';
    // Type modifiers: short, long, signed, unsigned
    // negative -- 0 -- positive
    // 0 -- positive

    // char name1[9] = "Biprosom"; // using array
    // std::string name = "Biprosom"; // using standard library
    // cout << "Name: " << name;

    // int numbers[] = {1, 2, 3, 4, 5};
    // int numbers2[5] = {10, 20, 30, 40, 50}; 
    // int numbers3[5]; 
    // cout << numbers[1] << '\n';
    // cout << numbers2[1] << endl;
    // cout << numbers3[1] << '\n';
    int num1, num2;
    cout << "Num 1: ";
    cin >> num1;
    cout << "Num 2: ";
    cin >> num2;
    cout << num1 << " + " << num2 << " = " << num1+num2 << endl;

    int * addr1 = &num1;
    cout << *addr1;
    return 0;
}