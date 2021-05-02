#include <conio.h>
#include <iostream>

using namespace std;

void ADD (int a, int b)
{
    int result = a+b;
    cout <<"The Addition is = " <<result <<endl;
}

void ADD (float a, float b)
{
    int result = a+b;
    cout <<"The Addition is = " <<result <<endl;
}

void ADD (int a, int b, int c)
{
    int result = a+b+c;
    cout <<"The Addition is = " <<result <<endl;
}

int main ()

{
    ADD (10,20);
    ADD (12,12);
    ADD (11,22,33);

    getch ();
}

