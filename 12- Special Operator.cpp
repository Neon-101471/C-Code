#include <iostream>
#include <conio.h>
using namespace std;

int main ()

{
    int a;
    float b;
    double c;
    char d;
    char name[10];

    cout <<sizeof(a) <<endl;
    cout <<sizeof(b) <<endl;
    cout <<sizeof(c) <<endl;
    cout <<sizeof(d) <<endl;
    cout <<sizeof(name) <<endl;

    int n,s,sum;
    sum = (n=10,s=15, sum=n+s);
    cout <<endl <<endl;
    cout <<"The SUM is = " <<sum;

    getch ();
}
