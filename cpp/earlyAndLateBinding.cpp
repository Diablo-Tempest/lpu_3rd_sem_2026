// Early Binding(static binding): means a functinos call is resolved during compilation. Eg: function overloading.
// Late binding(dynamic binding): It means the final function implementation is selected based on the object's dynamic type during execution.



// #include <iostream>

// using namespace std;
// early binding
// class Calculator
// {
// public:
//     void show(int value)
//     {
//         cout << "Integer: " << value << endl;
//     }
//     void show(double value)
//     {
//         cout << "Double: " << value << endl;
//     }
// };
// int main()
// {
//     Calculator c1;
//     c1.show(10);
//     c1.show(5.5);
//     return 0;
// }

// late binding
// class Animal
// {
// public:
//     virtual void sound()
//     {
//         cout << "Animal sound" << endl;
//     }
//     virtual ~Animal() = default;
// };
// class Dog : public Animal
// {
// public:
//     void sound() override
//     {
//         cout << "Bark" << endl;
//     }
// };
// class Cat : public Animal
// {
// public:
//     void sound() override
//     {
//         cout << "Meow" << endl;
//     }
// };
// int main()
// {
//     Animal *ptr1 = new Dog();
//     Animal *ptr2 = new Cat();
//     ptr1->sound();
//     ptr2->sound();
//     delete ptr1;
//     delete ptr2;
//     return 0;
// }