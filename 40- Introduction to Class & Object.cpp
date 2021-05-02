#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

class Employee
{
public:

    int age;
    double salary;

};

int main ()
{
    cout <<setprecision (10);

    Employee shakib;
    shakib.age = 32;
    shakib.salary = 400000.25;
    cout <<"Age of Shakib = " <<shakib.age <<endl;
    cout <<"Salary of Shakib = " <<shakib.salary <<endl <<endl;

    Employee tamim;
    tamim.age = 30;
    tamim.salary = 375000.50;
    cout <<"Age of Tamim = " <<tamim.age <<endl;
    cout <<"Salary of Tamim = " <<tamim.salary <<endl <<endl;

    Employee mushfique;
    mushfique.age = 33;
    mushfique.salary = 375000.75;
    cout <<"Age of Mushfique = " <<mushfique.age <<endl;
    cout <<"Salary of Mushfique = " <<mushfique.salary <<endl;


    getch ();
}
