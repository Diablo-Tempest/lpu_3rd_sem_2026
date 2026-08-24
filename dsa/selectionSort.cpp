#include<iostream>
#include<utility>
using namespace std;
int main(){
	int arr[] = {5, 3, 8, 4, 2};
	int n = sizeof(arr)/sizeof(int);
	
	cout << "Unsorted Array: " << endl;
	for(int i = 0; i < n; i++)
		cout << arr[i] << '\t';
	
	//selection sort
	
	for(int i = 0; i< n - 1; i++){ // traversal
		int minIndex = i;
		for(int j = i+1; j < n; j++){ // comarision
			if(arr[j] < arr[minIndex])
				minIndex = j;
		}
		swap(arr[i], arr[minIndex]);
	}
	
	cout << endl << "Sorted Array: " << endl;
	for(int i = 0; i < n; i++)
		cout << arr[i] << '\t';
	cout << endl;
	return 0;
}// End Of main()

