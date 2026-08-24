#include <iostream>
using namespace std;
int main()
{
    /*
       The main conditional constructs in C++ are:
       1. if
       2. if-else
       3. if-else if else
       4. Nested if
       5. Switch
       6. Conditional/ternary operator ?:
    */
    // int num1 = 10;
    // int num2 = 5;
    // if(num1 == 5){
    //     cout << "Not Equal" << endl;
    // }
    // else if(num1 == 9){
    //     cout << "Equal" << endl;
    // }
    // else{
    //     cout << "None of the conditions are true" << endl;
    // }
    // if(num1 == 10){
    //     if(num2 == 5){
    //         cout << "Both are Equal" << endl;
    //     }
    // }

    // int num = 10;
    // int num1 = 5;
    // int sum = num1 == (num > num1)? num : num1; // conditional/ternary operator

    // switch (num)
    // {
    // case '/':
    //     cout << "The number is 5" << endl;
    //     break;
    // case '/contact':
    //     cout << "The number is 10" << endl;
    //     break;
    // case '/about':
    //     cout << "The number is 9" << endl;
    //     break;
    // case '/products':
    //     cout << "The number is 11" << endl;
    //     break;

    // default:
    //     cout << "The number is not in the switch case" << endl;
    //     break;
    // }

    // int num1 = 10, num2 = 5, num3 = 15;
    // int largest = (num1 > num2 && num1 > num3) ? num1 : (num2 > num1 && num2 > num3) ? num2 : num3;
    // cout << "Largest: " << largest << endl;

    // Problem 1:
    // Largest of 4 numbers without using max() and nested if
    // int num1, num2, num3, num4;
    // cout << "Enter Values: ";
    // cin >> num1 >> num2 >> num3 >> num4;

    // normal approach

    // int largest;
    // if (num1 >= num2){
    //     if(num1 >= num3){
    //         if (num1 >= num4)
    //             largest = num1;
    //         else
    //             largest = num4;
    //     }
    //     else{
    //         if(num3 >= num4)
    //             largest = num3;
    //         else
    //             largest = num4;
    //     }
    // }
    // else{
    //     if(num2 >= num3){
    //         if(num2 >= num4)
    //             largest = num2;
    //         else
    //             largest = num4;
    //     }
    //     else{
    //         if (num3 >= num4)
    //             largest = num3;
    //         else
    //             largest = num4;
    //     }
    // }

    // Better apporach
    // int largest = num1;
    // if(num2 > largest)
    //     largest = num2;
    // if(num3 > largest)
    //     largest = num3;
    // if(num4 > largest)
    //     largest = num4;
    // cout << "Largest: " << largest;

    /* Problem 2: Valid Date:
        Example:
        20 2 2024 -> valid
        29 2 2023 -> invalid
        31 4 2024 -> invalid
        31 12 2024 -> valid
    */

    int day, month, year;
    cout << "Enter Date (DD MM YYYY): ";
    cin >> day >> month >> year;
    bool leap;

    /* A year is a leap year if it is divisible by 4, if it is century years(divisible by 100) are not leap years, inless the arealso divisible 400
    Divisible by 4 -> leap year
    Divisible By 100 -> not Leap Year
    Divible By 400 -> Leap Year again
    */
    if (year % 400 == 0)
        leap = true;
    else if(year % 100 == 0)
        leap = false;
    else if(year % 4 == 0)
        leap = true;
    else
        leap = false;
    
    int maxDays;

    // calculate maximum number of days in the month
    if(month == 2){
        if(leap)
            maxDays = 29;
        else
            maxDays = 28;
    }
    else if(month == 4 || month == 6 || month == 9 || month == 11)
        maxDays = 30;
    else if(month == 1 && month <= 12)
        maxDays = 31;
    else
        maxDays = 0; // Invalid month
    // check whether the day is valid or not
    if(day >=1 && day <=maxDays)
        cout << "The date is valid" << endl;
        else
        cout << "The date is invalid" << endl;
    return 0;
}