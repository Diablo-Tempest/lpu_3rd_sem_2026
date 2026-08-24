#include<iostream>
#include<climits>
using namespace std;
int main(){
	
	int arr[] = {10, 5, 2, 12, 54, 35, 22};
	int n = 7;
	int largest = arr[0];
	int secondLargest = INT_MIN;
	
	for(int i = 1; i < n; i++){
		if(arr[i] > largest){
			secondLargest = largest;
			largest = arr[i];
		}
		else if (arr[i] > secondLargest && arr[i] != largest){
			secondLargest = arr[i];
		}
	}
	cout << "Largest: " << largest << endl;
	cout << "Second Largest: " << secondLargest << endl;
	return 0;
}// End Of main()

