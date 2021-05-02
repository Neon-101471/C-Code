#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

class Employee
{
public:

    int age;
    double salary;

    void display ()
    {
       cout <<"Age = " <<age <<"       " <<"Salary = " <<salary <<endl;
    }
};

int main ()
{
    cout <<setprecision (10);

    Employee shakib;
    shakib.age = 32;
    shakib.salary = 400000.25;
    shakib.display ();

    Employee tamim;
    tamim.age = 30;
    tamim.salary = 375000.50;
    tamim.display ();

    Employee mushfique;
    mushfique.age = 33;
    mushfique.salary = 375000.75;
    mushfique.display ();


    getch ();
}
