#include <iostream>
#include <conio.h>

using namespace std;
int main ()

{
    int num, i, mul;
    cout <<"Enter any integer number: ";
    cin >> num;

    cout <<"Multiplication table of " <<num <<endl <<endl;

    for (i=1; i<=10; i++)
    {
       cout <<num <<" x " <<i << " = " <<(num*i) <<endl;
    }

    getch ();
}
