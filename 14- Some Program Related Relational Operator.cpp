#include <iostream>
#include <conio.h>

using namespace std;
int main ()

{
    int num1,marks;
    cout <<"Enter any number: ";
    cin >> num1;

    if (num1%2 == 0)
    {
        cout <<"This number is Even" <<endl <<endl;
    }
    else
    {
        cout <<"This number is Odd" <<endl <<endl;
    }

    cout <<"Enter the Students Marks: ";
    cin >> marks;

    if (marks>=33)
    {
        cout <<"The Student is Pass" <<endl <<endl;
    }
    else
    {
        cout <<"Sorry! The Student is Unfortunately Fail" <<endl <<endl;
    }

    int number1, number2;
    cout <<"Enter two numbers: " <<endl;
    cin >> number1 >> number2;

    if (number1>number2)
    {
        cout <<"Number1 is large" <<endl <<endl;
    }
    else
    {
        cout <<"Number2 is large" <<endl <<endl;
    }

    int value;
    cout <<"Enter a value: ";
    cin >> value;

    if (value>0)
    {
        cout <<"The absolute value is: " <<value;
    }
    else
    {
        cout <<"The absolute value is: " <<(-value);
    }

    getch ();
}
