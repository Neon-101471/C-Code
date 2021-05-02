#include <conio.h>
#include <iostream>

using namespace std;

void Display (int MARKS[], int size)

{
    for (int i=0; i<5; i++)
    {
        cout <<"Students " <<i+1 <<" marks = " <<MARKS[i] <<endl;
    }
}

int main ()

{
    int marks[5];
    for (int i=0; i<5; i++)
    {
        cout <<"Enter marks for Student " <<i+1 <<" : ";
       cin>> marks[i];
    }
    cout <<endl <<endl;
    Display (marks,5);

    getch ();
}
