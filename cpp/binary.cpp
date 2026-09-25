/*
Advantages of Binary file:
1. Fast processing: Thecomputer doesn't need to convert character back to the decoded format.
2. Canb save space: For many types of data, binary representation is more compact than text.
3. Good for structured data: We can store an entire C++ structure.
4. Exellent for random access: If every record hav a fixed size, we can dlirectly jump top record n.
file.seekg(n * swizeof(Student));
5. Used for non-text data: images, audio, video, executable files, and many databases/storage format are binary.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string text;
    fstream file("records/data3.dat", ios::in | ios::app | ios::binary);
    // file << "This is data 3\n";
    // while (getline(file, text))
    // {
    //     cout << "Line: " << text << endl;
    // }
    // file.seekg(10, ios::beg);
    // while (getline(file, text))
    // {
    //     cout << " Line: " << text << endl;
    //     cout << file.tellg();
    // }
    file.seekp(6, ios::beg);
    file.write("change", 6);
    cout << file.tellp();
    file.close();

    return 0;
}