/*Abstraction: Abstraction focuses on hiding complex internal details and sholwing only the essential features of an object.
1. Simplicity: It lets you use a component without needing to know how it works under the hood(like driving a car without knowing knowing engine mechanics).
2. Implementation: Achieved in code using Abstract class and interfaces.
*/

#include <iostream>
using namespace std;
class ATM
{
public:
    void withdrawMoney()
    {
        cout << "Money Withdrawn successfully!";
    }
};

int main()
{
    ATM a1;
    a1.withdrawMoney();
    return 0;
}