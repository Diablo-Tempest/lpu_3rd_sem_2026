#include <iostream>
using namespace std;
#include <fstream>
/*
    The three major file-system classes are:
    1. ifstream - Input from file
    2. ofstream - output to file
    3. fstream - Both input and output
*/
int main()
{
    // /*ifstream - Input File Stream*/
    // ifstream file; // ifstream is a class, file is an Object
    // file.open("data.txt"); // It is selecting the file that we want to use.
    // int x;
    // file >> x; // save the value that I have in the file in the variable named x.
    // cout << "The data is: " << x;
    // file.close(); // closing the file system

    // ofstream - Output File Stream. It is used for writing to a file

    // ofstream file;
    // file.open("data2.txt"); // Creates a file if it doesn't already exists. Also, overwrited the data that is already present in the selected file.
    // file << 600;
    // file.close();
    // return 0;

    // ifstream f1("data2.txt");
    // // int x;
    // string line;
    // cout << "The data is:" << endl;
    // // while (f1 >> x) // reads words/token/value
    // //     cout << x << " ";
    // while (getline(f1, line)) // getline reads entire line.
    //     cout << line << endl;

    // f1.close();

    // fstream - it can perform both input and output
    fstream f1;
    string s1 = "This is a normal greeting 2\n";
    string s2 = "This is another normal greeting\n";
    // f1.open("data.txt", ios::out);
    f1.open("data.txt", ios::app);
    f1 << s1;
    f1 << s2;
    f1.close();

    /*
    ios::in ->                               Read
    ios::out ->                              Write
    ios::in | ios::out ->                Read + Write
    ios::app ->                    Write at the end/append
    ios::in | ios::app ->               Read + Append
    ios::out |ios::trunc ->      Write and erase old content
    ios::in | ios::out | ios::binary -> Read + Write Binary
    */
    return 0;
}

/*

Without Files:
    Program starts
        |
    User enters data
        |
    Data is stored in main memory/RAM
        |
    Program ends
        |
    Data is lost


With files
    Program starts
        |
    User enters the data
        |
    Data written to a file
        |
    Program end
        |
    Data remains on disk
*/