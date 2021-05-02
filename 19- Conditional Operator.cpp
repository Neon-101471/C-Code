#include <iostream>
#include <conio.h>
using namespace std;
int main ()

{
    int number;
    cout <<"Enter any number: ";
    cin >>number;

    (number%2 == 0) ? cout <<number  <<" is Even" : cout <<number <<" is Odd";

    getch ();
}


