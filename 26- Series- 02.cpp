#include <iostream>
#include <conio.h>

using namespace std;
int main ()

{
int i,n;
int sum = 0;
cout <<"2 + 4 + 6 + 8 + .... + n = ?" <<endl;

cout <<"Enter the value of n: ";
cin >>n;

for (i=2; i<=n; i=i+2)

{
    sum = sum + i;
}
cout <<"2 + 4 + 6 + 8 + .... + " <<n <<" = " <<sum;

    getch ();
}


