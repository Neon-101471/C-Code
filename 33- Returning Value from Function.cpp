#include <iostream>
#include <conio.h>

using namespace std;

float addition (float a, float b)
{
    float result = a+b;
    return result;
}

int main ()

{
    float result = addition (25,35);

    cout <<"The addition is = " <<result <<endl;

    getch ();
}
