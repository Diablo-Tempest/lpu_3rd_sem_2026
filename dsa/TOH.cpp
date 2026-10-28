#include <iostream>
using namespace std;
void towerOfHanoi(int n, char source, char destination, char auxiliary)
{
    // base case
    if (n == 1)
    {
        cout << "Move Disc 1 from " << source << " to " << destination << endl;
        return;
    }
    // Step 1: Move n-1 discs to auxilary peg
    towerOfHanoi(n - 1, source, auxiliary, destination);

    // step 2: Move the largest disc to destination
    cout << "Move Disc " << n << " from " << source << " to " << destination << endl;

    // step 3: Move n-1 discs to destination peg
    towerOfHanoi(n - 1, auxiliary, destination, source);
}
int main()
{
    int n;
    cout << "Enter No. of discs: ";
    cin >> n;
    if (n <= 0)
    {
        cout << "Invalid no of discs!" << endl;
        return 0;
    }
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}