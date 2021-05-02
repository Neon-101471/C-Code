#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>

using namespace std;

int main ()
{
    for(int i=1; i<=3; i++)
    {
        string name;
        int age;
        ofstream file;
        file.open ("file.txt", ios::out | ios::app);
        cout <<"Enter your name, Please: ";
        getline(cin,name);

        cout <<"Enter your age: ";
        cin >> age;
        cout <<endl;

        file <<"This is " <<name  <<"       " <<age <<endl;
        cin.ignore();
    }
    cout <<endl <<"Your Information Is Stored successfully";

    getch ();
}
