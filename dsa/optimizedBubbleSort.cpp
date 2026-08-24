#include<iostream>
#include<utility>
using namespace std;
int main(){
	int arr[] = {5, 3, 8, 4, 2};
	int n = 5;
	
	cout << "Unsorted Array: " << endl;
	for(int i = 0; i < n; i++)
		cout << arr[i] << '\t';
	
	// bubble sort
	for(int i = 0; i< n-1; i++){
		
		bool swapped = false;
		
		for(int j = 0; j < n - 1 - i; j++){
			if(arr[j] > arr[j + 1]){
				swap(arr[j], arr[j + 1]);
				swapped = true;
			}
				
		}
		if(!swapped)
			break;
	}
	
	cout << endl << "Sorted Array: " << endl;
	for(int i = 0; i < n; i++)
		cout << arr[i] << '\t';
	cout << endl;
	return 0;
}// End Of main()

