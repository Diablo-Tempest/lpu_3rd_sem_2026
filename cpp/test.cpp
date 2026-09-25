// Student Record Manager - Binary file
// Description: Create a program that stores student records in a binary file.
// #include<iostream>
// #include<fstream>
// #include<string>
// class Students{
//     int rollno;
//     string name;
//     int reg-no;

// public:
//   void get_data(){
//     cout << "roll no"<< "name" << "reg-no";
//     cin >> rollno >> name >> reg_no;
//   }

// };
// int main(){
//     Students s;
//     s.get_data();
//     fstream f1("student.dat",ios::binary | ios::app);
//     fin >> s;
//     //f1.write(*s,sizeof(s));
//     f1.close();
// }

// Create a program that implements deep-copy

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int arr[3][3];
    for(int i = 0; i< 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i< 3; i++){
        for(int j = 0; j < 3; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}