#include <iostream>
using namespace std;

class Array
{
    int *data;
    int size;

public:
    Array(int n) : data(new int[n]{}), size(n)
    {
        cout << "Dynamic memory allocated" << endl;
    }
    void display()
    {
        for (int i = 0; i < size; i++)
            cout << data[i] << " ";
        cout << endl;
    }
    ~Array()
    {
        delete[] data;
        cout << "Dynamic Memory released" << endl;
    }
    Array(const Array &) = delete;
    Array& operator=(const Array&) = delete;
};
int main()
{
    Array a1(5);
    a1.display();
    return 0;
}