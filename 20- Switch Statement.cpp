#include <iostream>
#include <conio.h>
using namespace std;
int main ()

{
    int digit;
    cout <<"Enter any digit: ";
    cin >> digit;

    switch (digit)
    {
    case 0:
        cout <<"Youv'e pressed Zero";
        break;

    case 1:
        cout <<"Youv'e pressed One";
        break;

    case 2:
        cout <<"Youv'e pressed Two";
        break;

    case 3:
        cout <<"Youv'e pressed Three";
        break;

    case 4:
        cout <<"Youv'e pressed Four";
        break;

    case 5:
        cout <<"Youv'e pressed Five";
        break;

    case 6:
        cout <<"Youv'e pressed Six";
        break;

    case 7:
        cout <<"Youv'e pressed Seven";
        break;

    case 8:
        cout <<"Youv'e pressed Eight";
        break;

    case 9:
        cout <<"Youv'e pressed Nine";
        break;

    default:
        cout <<"Invalid Number ";
    }

    getch ();
}


