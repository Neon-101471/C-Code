#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main ()

{
    float num1 = 10, num2 = 18;
    float sum,sub,mul;


    sum = num1 + num2;
    cout <<fixed;
    cout <<setprecision(2);
    cout <<showpoint;
    cout <<setw(20) <<"SUM is = " <<sum <<endl;


    sub = num2 - num1;
    cout <<setw(20) <<"SUB is = " <<sub <<endl;

    mul = num1 * num2;
    cout <<setw(20) <<"MULTIPLICATION is = " <<mul <<endl;

    float div = num2/num1;
    cout <<setw(20) <<"DIVISION is = " <<div <<endl;

    getch ();
}

