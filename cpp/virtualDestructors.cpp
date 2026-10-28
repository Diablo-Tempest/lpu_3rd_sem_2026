#include <iostream>
using namespace std;
// virtual destructors
class Animal
{
public:
    virtual ~Animal()
    {
        cout << "Animal Destructor" << endl;
    }
};
class Dog : public Animal
{
public:
    ~Dog() override
    {
        cout << "Dog destructor" << endl;
    }
};
int main()
{
    Animal *ptr = new Dog();
    delete ptr;
    return 0;
}