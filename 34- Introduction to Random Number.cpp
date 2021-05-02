#include <conio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
int main ()

{

    for (int i=1; i<=10; i++)
    {
        int randomnumber = rand ();
        cout <<"Random Number = " <<randomnumber%5+1 <<endl;
    }
    getch ();
}
