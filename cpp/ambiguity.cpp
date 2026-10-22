#include <iostream>
using namespace std;

class A
{
public:
    int value = 10;
    void display()
    {
        cout << "Display from A" << endl;
    }
};
class B
{
public:
    int value = 20;
    void display()
    {
        cout << "Display from B" << endl;
    }
};

class C : public A, public B
{
};

int main()
{
    C obj;
    obj.A::display();
    obj.B::display();
    cout << obj.A::value << endl;
    cout << obj.B::value << endl;
    return 0;
}