#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main ()

{
    int x = 32;
    int y = 16;
    int BitwiseOp;

    BitwiseOp = x & y;
    cout <<"Bitwise and Operator: " <<BitwiseOp <<endl;

    BitwiseOp = x | y;
    cout <<"Bitwise or Operator: " <<BitwiseOp <<endl;

    BitwiseOp = x ^ y;
    cout <<"Bitwise Exor Operator: " <<BitwiseOp <<endl;

    BitwiseOp = x>>4;
    cout <<"Bitwise RightShift Operator: " <<BitwiseOp <<endl;

    BitwiseOp = x<<4;
    cout <<"Bitwise LeftShift Operator: " <<BitwiseOp <<endl;

    getch ();
}


