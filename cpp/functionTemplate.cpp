#include <iostream>

using namespace std;

// template <typename T>

// int add(int a, int b){
//     return a + b;
// }
// float add(float a, float b){
//     return a + b;
// }
// double add(double a, double b){
//     return a + b;
// }
// template function
/*
template - declares a template
typename - specifies a template type
T - represends a generic data type. T can be replaced by int, float, double or any other compatible type during template instatiation.
*/
// template <typename T>
// T add(T a, T b)
// {
//     return a + b;
// }

// function template with multiple parameters
// template <typename T1, typename T2>
// void display(T1 a, T2 b)
// {
//     cout << "First Value: " << a << endl;
//     cout << "Second Value: " << b << endl;
// }

// class template
template <typename T>
class Calculator
{
    T a, b;

public:
    Calculator(T x, T y)
    {
        a = x;
        b = y;
    }
    T add()
    {
        return a + b;
    }
    T substract()
    {
        return a - b;
    }
};
int main()
{
    Calculator<int> obj1(10, 2);
    Calculator<double> obj2(10.5, 5.2);

    cout << "Integer Addition: " << obj1.add() << endl;
    cout << "Double Substraction: " << obj2.substract() << endl;

    // display(10, 5.5);

    // cout << add(10, 20) << endl;
    // cout << add(10.2, 20.5) << endl;
    // cout << add(5.5f, 7.4f) << endl;
    return 0;
}