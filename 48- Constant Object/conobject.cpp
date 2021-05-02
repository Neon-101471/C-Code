#include "conobject.h"
#include <iostream>

using namespace std;

void ConObject :: display1 () const
{
    cout <<"The Constant object is called" <<endl;
}

void ConObject :: display2 ()
{
    cout <<"The Non-Constant object is called" <<endl;
}
