#include <iostream>
#include <conio.h>

using namespace std;
int main ()

{
int i,n;
int sum = 0;
cout <<"1 + 2+ 3+ 4 + .... + n = ?" <<endl;

cout <<"Enter the value of n: ";
cin >>n;

for (i=1; i<=n; i++)

{
    sum = sum + i;
}
cout <<"1 + 2+ 3+ 4 + .... + " <<n <<" = " <<sum;

    getch ();
}

