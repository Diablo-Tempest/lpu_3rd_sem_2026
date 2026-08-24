/* Object-Oriented Programming(OOPS) is a programming paradigm that organizes code into objects.
 An object is a self-contained unit that contains data(attributes) and function(methods) that operates on that data.
For example: Car
Attributes: color, model, speed
Methods: start(), stop(), accelerate(), clutch, brakes(), horn(), etc

Class: It is a bluprint/template for creating objects/instances.
Object: It is an anctual instance of a class.
Data members: These represents the object's state
Member function: These defines what an object can do.

An object contains:
1. Data: properties/attributes
2. Functions: methods/behaviors

Access modifiers
1. Public
2. Private
3. Protected

*/

#include <iostream>
using namespace std;

/*
class Car{
   // Classes are private by default.
   public:
       string color;
       string model;

       void start(){
       cout << "Car is Starting" << endl;
   }
};
class Vehicle{
   private:
       string name;
       int price;
       void evaluate(){
           cout << "This car is newly launched";
       }
   };

   class Parent{
       protected:
       int value;
   };
*/

/*Getter and setter methods
Because private data cannot normally be accessed directly, we often use getters and setters

Constructor: It is a special member function that is automatically called when an object/instance is created.
Rules of Contructor:
The constructor:
1. has the name as the class
2. has no return value
3. runs automatically when object is created
4. can be overloaded
*/

// class Student{
//     private:
//     int age;
//     public:
//         // default constructor
//         Student(){
//             // constructor
//             cout << "Constructor is called";
//         }
//         void setAge(int a){
//             //setter function
//             age = a;
//         }
//         int getAge(){
//             //getter function
//             return age;
//         }
// };

// class Student{
//     private:
//         string name;
//         int age;

//     public:
//     // constructor overloading
//         Student()
//         {
//            cout << "Default constructor" << endl;
//         }
//         Student(string name)
//         {
//             cout << "Name: " << name << endl;
//         }
//     // paramerterized constructor
//         Student(string n, int a){
//             name = n;
//             age = a;
//         }
//         void display(){
//             cout << name << " " << age << endl;
//         }
// };

/*
this pointer
Every non-static member function has access to a special pointer called 'this'
*/

// class Student{
//     private:
//         string name;
//     public:
//         Student(string name){
//             // string name = parameter
//             // this->name = member variable
//             this->name = name; // current object's name = paramter name
//             cout << "Name: " << name;
//         }
// };

class Student
{
private:
    string name;
    int age;

public:
    // Student(string n, int a){
    //     name = n;
    //     age = a;
    // }
    // Contructor initialization list
    Student(string n, int a) : name(n), age(a)
    {
        cout << "Name: " << name << "\tAge: " << age << endl;
    }
};

int main()
{
    // Car car1; // object/instance
    // Car car2;
    // car1.color = "Red";
    // car1.model = "BMW";

    // car2.color = "Olive";
    // car2.model = "Mercedes Benz";

    // cout << "The 1st car is a " << car1.color << " " << car1.model << endl;
    // cout << "The 2nd car is a " << car2.color << " " << car2.model << endl;
    // car1.start();
    // car2.start();
    // Vehicle v1;
    // v1.name = "Ferrari";
    // v1.price = 10000000;

    // Student s1;
    // s1.setAge(28);
    // cout << s1.getAge();
    // cout << s1.age; // this will not be accessible because age is private
    // Student s1("Biprosom", 28);
    // s1.display();
    Student s1("Biprosom", 28);

    return 0;
}

/*
 Car: class
 car1, car2: Objects/instances
 color, model: data members
 start(): member function
 car1.color: accessing an object's data
 car1.start: calling an object's methods
*/

/*
The four pillars of OOP:
Encapsulation - Combining data and function together
Abstraction - Hiding unnecessary implementation details
Inheritance - Creating a new class from an existing class
Polymorphism - One interface, different behaviors.
*/