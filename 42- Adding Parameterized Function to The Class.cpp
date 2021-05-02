#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

class Employee
{
public:

    int age;
    double salary;

    void value (int x, double y)
    {
        age = x;
        salary = y;
    }

    void display ()
    {
        cout <<"Age = " <<age <<"       " <<"Salary = " <<salary <<endl;
    }
};

int main ()

{
    Employee shakib, tamim, mushfique;

    cout <<setprecision (10);

    shakib.value (32, 400000.25);
    shakib.display ();

    tamim.value (30, 375000.50);
    tamim.display ();

    mushfique.value (33, 375000.75);
    mushfique.display ();

    getch ();
}
