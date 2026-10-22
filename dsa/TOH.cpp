#include<iostream>
using namespace std;
void towerOfHanoi(int n, char source, char destination, char auxilary){
    // base case
    if(n == 1){
        cout << "Move Disk 1 from " << source << " to " << destination << endl;
        return;
    }

    // step 1: move n-1 disks to auxilary rod
    towerOfHanoi(n-1, source, auxilary, destination);

    // step 2: Move the largest disk to the destination
    cout << "Move Disk " << n << " from " << source << " to " << destination << endl;
    
    // step 3: Move n-1 disk to destination rod
    towerOfHanoi(n-1, auxilary, destination, source);
}
int main(){
    int n;
    cout << "Enter no.of disks: ";
    cin >> n;
    if(n <= 0){
        cout << "Invalid no of disks" << endl;
        return 0;
    }
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}