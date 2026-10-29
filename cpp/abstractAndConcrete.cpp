// Abstract class is a class that cannot be instantiated directly. They are useful when you want to define a common interface for different derived classes.

// Concrete class is a class that can be instantiated all because all of it's inherited pure virtual functions have appropriate final overriders.

// self referential class is a class contains a pointer or reference to an object of the same class type. Eg: Linked list, trees, and mant graph representations

// Pure virtual functions: It expresses that the base class requires a corresponding implementation in a concrete class, although a pure virtual function can also have a definition in the base class; 
#include <iostream>

using namespace std;
class Shape{
    public:
    // default is used to force the compiler to generate standard implementations for special member functions.
        virtual double area() const = 0; // pure virtual function
        virtual ~Shape() = default;
};

class Rectangle : public Shape{
    double length, breadth;
    public:
        Rectangle(double l, double b) : length(l), breadth(b){}
        double area() const override{
            return length * breadth;
        }
};

int main(){
    // Shape s1; // Error: Shape is abstract
    Rectangle r1(5, 7);
    cout << "Area: " << r1.area() << endl;
    return 0;
}