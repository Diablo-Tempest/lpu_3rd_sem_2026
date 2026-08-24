#include <iostream>
using namespace std;

int main()
{
    // int arr1[5] = {10, 20, 30, 40, 50};
    // // cout << arr1[2]; // O(1)
    // for(int i=4;i>=0; i--){
    //     cout << arr1[i] << "\t";
    // }
    int size;
    cin >> size;
    int arr1[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr1[i] << "\t";
    }
    // linear search
    int num = 20;
    for (int i = 0; i < size; i++)
    {
        if (arr1[i] == num)
            cout << endl
                 << "Element is found at index" << i << endl;
    }
    int index = 2;
    for (int i = index; i < size; i++)
    {
        arr1[i] = arr1[i + 1];
    }
    arr1[size - 1] = 0;
    cout << "Deletion Performed" << endl;
    for (int i = 0; i < size - 1; i++)
    {
        cout << arr1[i] << '\t';
    }

    return 0;
}