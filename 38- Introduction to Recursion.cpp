#include <iostream>
#include <conio.h>
using namespace std;

int fact (int n)
{
    if (n == 1)
        return 1;
    else
        return n * fact(n-1);
}

int main ()

{
    int n;
    cout <<"Enter the value of n: ";
    cin>>n;
    int factorial = fact (n);
    cout <<endl <<"The Factorial = " <<factorial;

    getch ();
}
