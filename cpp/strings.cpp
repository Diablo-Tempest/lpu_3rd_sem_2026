#include <iostream>
#include <string>
using namespace std;
int main()
{

    // string s1 = "Hello world";
    // cout << s1 << endl;
    // cout << "Length: " << s1.length() << endl;
    // cout << "Character at(5): " << s1.at(0) << endl;
    // cout << "Substring: " << s1.substr(0, 7) << endl;
    // s1.append(" C++");
    // cout << s1 << endl;
    // s1.erase(0, 6);
    // cout << s1 << endl;
    // cout << s1.find("world") << endl;
    // s1.insert(0, "Hi ");
    // cout << s1 << endl;
    // s1.replace(0, 2, "Hey");
    // cout << s1 << endl;

    // s1 += "Java";
    // cout << s1; // Strings in C++ are mutable, i.e, they can be changed very easily.

    // String input
    // string s1;
    // // cin >> s1;
    // getline(cin, s1);
    // cout << s1;

    // string s1 = "Hello";
    // string s2 = "world";
    // string s3 = "Hello";
    // if (s1 == s2)
    //     cout << "Equal";
    // else
    //     cout << "Not Equal";

    // cout << s1.compare(s2) << endl;
    // cout << s2.compare(s1) << endl;
    // cout << s1.compare(s3) << endl;

    string s1 = "Hello World";
    // for(int i = 0; i< s1.length(); i++)
    //     cout << s1[i] << " ";
    // cout << endl;
    for(char ch : s1)
        cout << ch << " ";
    cout << endl;
    return 0;
}