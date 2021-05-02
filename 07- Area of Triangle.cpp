#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;
int main ()

{
    float height, base, area;
    cout <<"Enter the value of Base & Height: ";
    cin >>base >>height;

    area = 0.5 * base * height;

    cout <<"The Area of Triangle = " <<area;

    getch ();
}
