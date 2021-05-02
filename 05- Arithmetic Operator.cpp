#include <iostream>
#include <conio.h>
using namespace std;

int main ()

{
    int num1 = 10, num2 = 18;
    int sum,sub,mul,rem;

    sum = num1 + num2;
    cout <<"SUM is = " <<sum <<endl;

    sub = num2 - num1;
    cout <<"SUB is = " <<sub <<endl;

    mul = num1 * num2;
    cout <<"MULTIPLICATION is = " <<mul <<endl;

    float div = (float)num2/num1;
    cout <<"DIV is = : " <<div <<endl;

    rem = num1%num2;
    cout <<"REM is = " <<rem <<endl;

    getch ();
}
