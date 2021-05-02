#include <iostream>
#include <conio.h>

using namespace std;
int main ()

{
    while (1)
    {
        try
        {
            int num1, num2;
            cout <<"Enter the number of num1, num2: ";
            cin >>num1 >>num2;

            if (num2 == 0)
            {
                throw 1;
            }

            int result = (double)num1/num2;
            cout <<"Result = " <<result <<endl <<endl;
        }
        catch (...)
        {
            cout <<"Sorry! It's not Possible" <<endl;
            cout <<"Please try again" <<endl <<endl;
        }
    }

    getch ();
}
