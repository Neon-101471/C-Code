#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main ()

{
    float celcius, fahrenheit;
    cout <<"Enter the Celcius scale temperature: ";
    cin >> celcius;

    fahrenheit = 1.8 * celcius + 32;

    cout <<"The Fahrenheit Scale Temperature is = " <<fahrenheit;

    getch ();
}
