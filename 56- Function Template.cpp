#include <iostream>
#include <conio.h>
using namespace std;

template <class temp>
temp addition (temp a,temp b)
{
     cout <<a+b <<endl;
}

int main ()
{
    addition (10,20);
    addition (10.8,4.7);

    getch ();
}
