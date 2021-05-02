#include <iostream>
#include <conio.h>

using namespace std;

class person
{
public:

    display ()
    {
        cout <<"I'm a Person" <<endl;
    }
};

class student: public person
{
public:

    display ()
    {
        cout <<"I'm a Student" <<endl;
    }
};

class teacher: public person
{
public:

    display ()
    {
        cout <<"I'm a Teacher" <<endl;
    }
};

int main ()

{
    person p;
    p.display ();

    student s;
    s.display ();

    teacher t;
    t.display ();

 getch ();
}
