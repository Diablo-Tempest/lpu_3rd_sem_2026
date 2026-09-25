// Serquential access with records
#include <iostream>
#include <fstream>
using namespace std;

struct Student
{
    int roll;
    string name;
    float marks;
};
int main()
{
    // Student s1;
    // ofstream file("records/students.txt", ios::binary);
    // s1.roll = 1;
    // s1.name = "Ritesh";
    // s1.marks = 98.6;
    // file.write((char *)&s1, sizeof(s1));

    // s1.roll = 2;
    // s1.name = "Vaibhav";
    // s1.marks = 88.5;
    // file.write((char *)&s1, sizeof(s1));

    // s1.roll = 3;
    // s1.name = "Prasenjit";
    // s1.marks = 79.3;
    // file.write((char *)&s1, sizeof(s1));
    // file.close();

    // ifstream f1("records/students.txt", ios::binary);
    // while (f1.read((char *)&s1, sizeof(s1)))
    // {
    //     cout << s1.roll << " " << s1.name << " " << s1.marks << endl;
    // }

    // File Pointers:
    // 1. Get pointer - Used for reading
    // 2. Put pointer - User for writing
    // For get pointer, we use tellg() and seekg()
    // for put pointer, we use tellp() and seekp()
    // tell - use to point see where the pointer currently lies
    // seek - use to change the pointer

    // ifstream file("records/data.txt");

    // cout << "Pointer is at position: " << file.tellg() << endl;
    // file.seekg(10);
    // cout << "Pointer is at position: " << file.tellg() << endl;
    // file.seekg(4);
    // cout << "Pointer is at position: " << file.tellg() << endl;
    // file.seekg(0, ios::end);
    // cout << "Pointer is at position: " << file.tellg() << endl;

    Student s1;
    ifstream file("records/students.txt", ios::binary);
    int recordNumber = 2;
    file.seekg(recordNumber * sizeof(Student), ios::beg);
    file.read((char *)&s1, sizeof(Student));
    cout << "Roll: " << s1.roll << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Marks: " << s1.marks << endl;
    file.close();
    return 0;
}