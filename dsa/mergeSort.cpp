#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int left, int mid, int right)
{
    vector<int> temp;
    int i = left;
    int j = mid + 1;
    // Compare elements from both subarrays

    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
        // copy remaining elements from the subarray
        while (i <= mid)
        {
            temp.push_back(arr[i]);
            i++;
        }
        while (j <= right)
        {
            temp.push_back(arr[j]);
            j++;
        }
        // copy sorted elements back to the original array
        for (int k = 0; k < temp.size(); k++)
        {
            arr[left + k] = temp[k];
        }
    }
}
void mergeSort(vector<int> &arr, int left, int right)
{
    if (left >= right)
    {
        return;
    }
    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
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
    mergeSort(arr, 0, n - 1);
    cout << "Sorted Array: ";
    for (int element : arr)
        cout << element << " ";
    cout << endl;
    return 0;
}