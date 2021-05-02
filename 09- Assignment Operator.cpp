#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main ()

{
    int x = 10;
    int y = 20;

    x += 10;
    cout <<"X = " <<x <<endl;
    y -= 5;
    cout <<"Y = " <<y <<endl;

    x *= 5; //Here, last value of x = 20
    cout <<"X = " <<x <<endl;

    getch ();
}

