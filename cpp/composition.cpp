/*
Composition: Composition is a stronger HAS-A relationship in which one object is tied to another one as part of it's own. The containerd object is typically a member object whose lifetime is tied to the ownig object's lifetime.
Eg: A car has engine. An engine can be treated as a component of particular car. When a car object is destroyed, it's embedded engine member is destroyed automatically.
*/

#include <iostream>
using namespace std;
class Engine
{
public:
    Engine()
    {
        cout << "Engine created" << endl;
    }
    ~Engine()
    {
        cout << "Engine Destroyed" << endl;
    }
    void start()
    {
        cout << "Engine started" << endl;
    }
};

class Car
{
    Engine engine;

public:
    Car()
    {
        cout << "Car Created" << endl;
    }
    ~Car()
    {
        cout << "Car Destroyed" << endl;
    }
    void startCar()
    {
        engine.start();
    }
};
int main()
{
    {
        Car c1;
        c1.startCar();
    }
    cout << "End of program" << endl;
    return 0;
}