#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;
int main ()

{
    int marks[5];
    int i;

    for (i=0; i<5; i++)
    {
        cout <<"Enter the Marks of Student " <<i+1 <<" = ";
        cin >> marks[i];
    }
    cout <<endl;

    for (i=0; i<5; i++)
    {
        cout <<"Students " <<i+1 <<" got = " <<marks[i] <<endl;
    }

    getch ();
}



