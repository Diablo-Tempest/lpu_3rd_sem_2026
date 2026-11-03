#include <iostream>
using namespace std;
class Student
{
    int age;

public:
    void setAge(int a)
    {
        if (a > 0 && a < 100)
        {
            age = a;
        }
        else
            cout << "Invalid Age!" << endl;
    }
    int getAge()
    {
        return age;
    }
};

int main()
{
    Student s1;
    s1.setAge(28);
    cout << "Age: " << s1.getAge() << endl;
    return 0;
}