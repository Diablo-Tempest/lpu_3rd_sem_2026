/*
Aggregation: Aggregation is a HAS-A relationship in which one class refers to or uses another class, but the contained onject can exists independently.

Eg: A department can have teachers. A teacher can exists even if the department is removed. The department does not necessarily own the teacher's entire lifetime.
*/

#include <iostream>
#include <string>
using namespace std;
class Teacher
{
public:
/*
    Teacher(string n) - constructor that receiuves a string parameter
    : - start a member initilizer list
    name(n): initilizes a data member name using the parameter n
    {} - the constructor body, is empty
*/
    string name;
    // Teacher(string n) : name(n)
    // {
    // }
    Teacher(string n)
    {
        name = n;
    }
    void display()
    {
        cout << "Teacher: " << name << endl;
    }
};

class Department
{
    Teacher *teacher;

public:
    Department(Teacher *t) : teacher(t)
    {
    }
    void showTeacher()
    {
        if (teacher != nullptr)
            teacher->display();
    }
};
int main()
{
    Teacher t("Satyam");
    {
        Department d(&t);
        d.showTeacher();
    }
    cout << "Department object deployed" << endl;
    t.display();
    return 0;
}