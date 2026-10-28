#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}
int quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pivotIndex = partition(arr, low, high);
        // Sort elements to the left side fo the pivot
        quickSort(arr, low, pivotIndex - 1);
        // Sort elements to the right side fo the pivot
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main()
{
    int n;
    cout << "Enter no. of elements: ";
    cin >> n;
    if (n <= 0)
    {
        cout << "Invalid number!" << endl;
        return 0;
    }
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
    quickSort(arr, 0, n - 1);
    cout << "Sorted Array: ";
    for (int element : arr)
        cout << element << " ";
    cout << endl;
    return 0;
}