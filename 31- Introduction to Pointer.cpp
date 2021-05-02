#include <iostream>
#include <conio.h>

using namespace std;
int main()

{
    int x;
    x=1;

    int *pointer;
    pointer = &x;


    cout <<"The value of x = " <<x <<endl;
    cout <<"The Address of x = " <<&x <<endl;

    cout <<"Pointer Contain Address = " <<pointer <<endl;
    cout <<"The Address of pointer = " <<&pointer <<endl;
    cout <<"Pointer Contain Value = " <<*pointer <<endl <<endl;

    int num1 = 10, num2 = 20;
    int *pointer1 = &num1, *pointer2 = &num2;

    int sum = *pointer1 + *pointer2;
    cout <<"The SUM of two numbers = " <<sum;

    getch ();
}

