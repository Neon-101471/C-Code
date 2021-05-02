#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

class Employee
{
public:
    const int age;
    const int id;
    double salary;

    Employee (int x, int y, float z)
        :age (x), id (y)

    {
        salary = z;

        cout <<setprecision (10);
        cout <<setw(10) <<"AGE = " <<age <<endl;
        cout <<setw(10) <<"ID NO = " <<id <<endl;
        cout <<setw(10) <<"SALARY = " <<salary <<endl;
    }
};

int main ()

{
    Employee shakib (24,101088,12500.25);
    getch ();
}
