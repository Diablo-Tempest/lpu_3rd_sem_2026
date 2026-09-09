#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    // Sequential access file processing
    // ofstream f1("students.txt");

    // int roll;
    // string name;
    // float marks;

    // for (int i = 0; i < 3; i++)
    // {
    //     cout << "Enter Roll, Name, Marks: ";
    //     cin >> roll >> name >> marks;
    //     f1 << roll << ". " << name << " " << marks << endl;
    // }
    // f1.close();
    // cout << "Display Data: " << endl;
    // ifstream file("students.txt");
    // string line;
    // while (getline(file, line))
    //     cout << line << endl;
    // file.close();

    // ifstream f1("students.txt");
    // char ch;
    // while (f1.get(ch))
    //     cout << ch << endl;
    // // get() reads one character
    // f1.close();

    // ofstream f2("data2.txt");
    // f2.put('A');
    // f2.put('B');
    // f2.put('C');
    // // put() writes one character

    // f2.close();

    // read(): It read a specified number of bytes
    // fstream f1("students.txt", ios::binary);
    // char buffer1[101] = {};
    // f1.read(buffer1, 100);
    // cout << buffer1;
    // f1.close();

    // write(): It writes raw bytes
    //  ofstream f2("data2.txt", ios::binary);
    //  char text[] = "Hello World";
    //  f2.write(text, sizeof(text) - 1);
    //  f2.close();

    // This attempts to read 100 bytes

    // gcount tells us how many character were extracted by the last unformatted input operation.
    ifstream f1("data3.txt");
    if (f1.is_open()) // check whether the file is currently open
    {
        char ch[20];
        f1.read(ch, 20);
        cout << "Data Read: " << ch << endl;
        cout << "Bytes read: " << f1.gcount();
        
        if (f1.failed()) // checks whether an input/output operation failed
        cout << "Reading failed";
        f1.clear(); // resets the stream's error flags.
        if(f1.bad()) // checks whether a serious I/O error occured
            cout << "Input/output error";
        if(f1.good()) // check whether the stream currently has no error flags.
            cout << "Stream is okay"
    }
    else
    {
        cout << "File doesn't exists or not readable";
    }
// while (!file.eof());
// {
//     string line;
//     getline(f1, line);
//     cout << line << endl;
// }
// It is not reccomended to use because EOF is generally detected after an attempted read reaches the end, so while(!eof()) can cause an extra invalid iteration.

    // f1.eof() // check whether the end-of-file condition has been reached
    f1.close();
    return 0;
}