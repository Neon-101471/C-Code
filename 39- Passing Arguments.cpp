#include <iostream>
#include <conio.h>
using namespace std;

int x = 8;

int display (int *pointerx)
{
    *pointerx = 88;
}

int main ()

{
    int x = 10;
    cout <<"After Calling the Function: x = " <<x <<endl;

    display (&x);
    cout <<"Before Calling the Function: x = " <<x <<endl;

    cout <<"Using Scope Resolution: x = " <<:: x;

    getch ();
}

