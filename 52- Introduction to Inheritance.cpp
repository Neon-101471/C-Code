#include <iostream>
#include <conio.h>
using namespace std;

class Employee1
{
public:

    string name;
    float age;

    void display1 ()
    {
        cout <<"NAME = " <<name <<endl;
        cout <<"AGE = " <<age <<endl;
    }
};


class Employee2 : public Employee1
{
public:
    int id;

    void display2 ()
    {

        cout <<"ID = " <<id <<endl;
        display1 ();
    }
};

int main ()

{
    Employee2 ob;
    ob.name = "Saif";
    ob.id = 1088;
    ob.age = 23.11;
    ob.display2 ();

    getch ();
}
