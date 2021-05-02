#include <iostream>
#include <conio.h>

using namespace std;
int main ()

{
    for (int i=1; i<=25; i++)
    {
        if (i==10)
        {
            continue;
        }
        if (i==15)
        {
            break;
        }
        cout <<i <<endl;
    }

    getch ();
}

