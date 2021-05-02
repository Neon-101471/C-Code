#include <iostream>
#include <conio.h>
using namespace std;

int main ()

{
    int number;
    cout <<"Enter any number: ";
    cin >> number;

    if (number>0)
    {
        cout <<"This number is Positive.";
    }

    else if (number<0)
    {
        cout <<"This number is Negative.";
    }

    else
    {
        cout <<"This number is definitely Zero.";
    }

    getch ();
}
