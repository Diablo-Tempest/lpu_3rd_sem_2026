#include <iostream>

using namespace std;

// void checkAge(int age){
//     if(age < 18)
//         throw age;
//     cout << "Eligible for voting" << endl;
// }
int main()
{
    // int age;
    // cout << "Age: ";
    // cin >> age;
    // try{
    //     checkAge(age);
    // }
    // catch(int age){
    //     cout << "Not eligible! Age: " << age << endl;
    // }

    // throwing standard exception
    //  try{
    //      int age = 15;
    //      if(age < 18){
    //          throw runtime_error("Age is below 18");
    //      }
    //  }
    //  catch(const runtime_error& e){
    //      cout << "Error: " << e.what();
    //  }

    // Multiple catch blocks
    // try
    // {
    //     int choice;
    //     cout << "Enter Choice: ";
    //     cin >> choice;
    //     if (choice == 1)
    //         throw 100;
    //     else if (choice == 2)
    //         throw 3.14;
    //     else
    //         throw 'A';
    // }
    // catch (int error)
    // {
    //     cout << "Integer Exception: " << error << endl;
    // }
    // catch (double error)
    // {
    //     cout << "Double Exception: " << error << endl;
    // }
    // catch (char error)
    // {
    //     cout << "Character Exception: " << error << endl;
    // }

    //throw-all handler
    // try{
    //     throw 100;
    // }
    // catch(...){
    //     cout << "Exception handled";
    // }
    // int a, b;
    // cout << "Enter Two numbers: ";
    // cin >> a >> b;

    // try
    // {
    //     if(b == 0)
    //         throw b;
    //     cout << "Result: " << a / b;
    // }
    // catch(int e)
    // {
    //     cout << "Cannot be divisible by " << e << endl;
    // }
    // cout << "Program Continue..." << endl;

    // try{ // The try block contains statements that may generate an excaption.
    //     int c = 10 / 0;
    // }
    // throw keyword is used to generate an exception
    // throw 10; // Integer exception
    // throw 3.14; // Double exception
    // throw 'A'; //Character Exceotion
    // throw "Error"; //String Literal Exception

    // The catch block receives and handles the exception thrown from the try block
    // catch{}

    // throwing an exception from a function

    return 0;
}