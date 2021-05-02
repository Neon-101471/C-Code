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
        cout <<setprecision (10);
        cout <<"Age = "  <<age <<"     " <<"Salary = " <<salary <<endl;
    }
    Employee (int x, double y)
    {
        age = x;
        salary = y;
    }

    Employee ()
    {
        cout <<endl <<"Default Constructor is Called Successfully!";
    }

};

int main ()

{
    Employee shakib (32, 400000.25);
    shakib.display ();

    Employee tamim (30, 375000.75);
    tamim.display ();

    Employee mustafiz;

    getch ();
}
