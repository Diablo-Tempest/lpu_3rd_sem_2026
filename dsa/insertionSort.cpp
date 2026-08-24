#include<iostream>
using namespace std;
int main(){
	int arr[] = {5, 3, 8, 4, 2};
	int n = sizeof(arr)/sizeof(int);
	
	cout << "Unsorted Array: " << endl;
	for(int i = 0; i < n; i++)
		cout << arr[i] << '\t';
		
	//insertion sort
	
	for(int i=0; i<n; i++){
		int key = arr[i];
		int j = i-1;
		
		while(j >= 0 && arr[j] > key)
		    arr[j+1] = arr[j--];
		arr[j+1] = key;
	} 
		
		
	cout << endl << "Sorted Array: " << endl;
	for(int i = 0; i < n; i++)
		cout << arr[i] << '\t';
	cout << endl;

	return 0;
}// End Of main()

