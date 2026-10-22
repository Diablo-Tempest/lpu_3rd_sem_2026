/*
Inheritance: Inheritance allows a new class(subclass or child class) to inherit properties and methods from an existing class(superclass or parent class).
1. Code Reusability: It eliminates code duplication by letting shared logic live in a base class
2. Hierarchies: It builds logical "is-a" relationship between different types of objects.

Types of inheritance in C++:

1. Single Inheritance: One derived class inherits from one base class
2. Multiple Inheritance: One derived class inherits two or more base classes
3. Multilevel Inheritance: A class inherits from a derived class, forming a chain.
4. Heirarchical Inheritance: Multiple derived classes inherit from the same base class.
5. Hybrid Inheritance: A combination of two or more inheritance types.
For example, hierarchical and mulyiple inheritance combined.

Protected Specifier: Accicible inside a class and it's derived class, but not directly through an ordinary external object.
*/

#include <iostream>
#include <string>
using namespace std;
// base class
// class Person
// {
// public:
//     string name;
//     int age;
//     void displayPerson()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//     }
// };

// class Student : public Person
// {
// public:
//     int rollNo;
//     void displayStudent()
//     {
//         cout << "Roll No: " << rollNo << endl;
//     }
// };
// int main()
// {
//     Student s1;
//     cout << "Enter Name: ";
//     getline(cin, s1.name);
//     cout << "Enter Age: ";
//     cin >> s1.age;
//     cout << "Enter Roll No: ";
//     cin >> s1.rollNo;

//     cout << endl
//          << "Student Details:" << endl;
//     s1.displayPerson();
//     s1.displayStudent();

//     return 0;
// }

// multilevel inheritance
// class Animal
// {
// public:
//     void eat()
//     {
//         cout << "Animal is eating" << endl;
//     }
// };
// class Dog : public Animal
// {
// public:
//     void bark()
//     {
//         cout << "Dog is barking" << endl;
//     }
// };
// class Puppy : public Dog
// {
// public:
//     void weep()
//     {
//         cout << "Puppy is weeping" << endl;
//     }
// };

// int main()
// {
//     Puppy p1;
//     p1.eat();
//     p1.bark();
//     p1.weep();

//     return 0;
// }

// Protected specifier
// class Base
// {
// public:
//     int a = 10;

// protected:
//     int b = 20;

// private:
//     int c = 30;
// };
// class Derived : public Base
// {
// public:
//     void display()
//     {
//         cout << "Public: " << a << endl;
//         cout << "Protected: " << b << endl;
//         // cout << "Private: " << c << endl; // throws an error
//     }
// };
// int main()
// {
//     Derived d1;
//     cout << d1.a << endl;
//     d1.display();

//     return 0;
// }

/*
Constructors in inheritance.
A consrtuctor initilizes an object. When an object of derived class is created, it's base-class constructor runs first, followed by derived-class constructor.
*/
// class Base
// {
// public:
//     Base()
//     {
//         cout << "Base Constructor" << endl;
//     }
//     ~Base(){
//         cout << "Base Destroyed" << endl;
//     }
// };
// class Derived : public Base
// {
// public:
//     Derived()
//     {
//         cout << "Derived Constructor" << endl;
//     }
//     ~Derived()
//     {
//         cout << "Derived destroyed" << endl;
//     }

// };

// int main()
// {
//     Derived d1;
//     return 0;
// }

// Function Overriding: A derived class can have it's own version of inherited function. This is called function overriding when it provides a matching virtual member function in a derived class.

class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal Makes a sound" << endl;
    }
};
class Dog : public Animal
{
public:
    void sound() override
    {
        cout << "Dog barks" << endl;
    }
};
class Cat : public Animal
{
public:
    void sound() override
    {
        cout << "Cat meows" << endl;
    }
};

int main()
{
    Dog d1;
    Cat c1;
    d1.sound();
    c1.sound();
}
