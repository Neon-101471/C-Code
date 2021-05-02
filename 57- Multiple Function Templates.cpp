#include <iostream>
#include <conio.h>
using namespace std;

template <class temp1, class temp2>
temp1 addition (temp1 a, temp2 b)
{
    cout <<"The SUM = " <<a+b <<endl;
}

int main ()

{
    addition(10.5,10);

    getch ();
}
