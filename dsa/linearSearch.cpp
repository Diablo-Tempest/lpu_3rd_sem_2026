#include<iostream>

using namespace std;

int linearSearch(int arr[], int n, int target){
	for(int i = 0; i<n; i++){
		if(arr[i] == target)
			return i;
	}
	return -1;
}

int main(){
	int arr[] = {10, 25, 7, 42, 18};
	int n = sizeof(arr)/sizeof(int), target = 15;
	int index = linearSearch(arr, n, target);
	if(index == -1)
		cout << target << " does not exist in the array!" << endl;
	else
		cout << target << " is at position " << index << endl;
	

	return 0;
}// End Of main()

