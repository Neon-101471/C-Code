#include <iostream>
#include <conio.h>

using namespace std;

void addition (int a, int b)
{
    cout <<"Addition is = " <<a+b <<endl;
}

void subtraction (int a, int b)
{
    cout <<"Subtraction is = " <<a-b <<endl;
}

void multiplication (int a, int b)
{
    cout <<"Multiplication is = " <<a*b <<endl;
}

void division (int, int);

int main()

{
    addition (10,20);
    subtraction (20,5);
    multiplication (10,8);
    division (10,8);

    cout <<endl <<"All Function Called Successfully";

    getch ();
}

void division (int a, int b)
{
    cout <<"Division is = " <<(float)a/b <<endl;
}

