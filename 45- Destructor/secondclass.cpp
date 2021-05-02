#include "secondclass.h"
#include <iostream>

using namespace std;

SecondClass :: SecondClass()
{
    cout <<"Constructor is Called" <<endl;
}

SecondClass :: ~SecondClass ()
{
    cout <<"Destructor is Called" <<endl;
}

void SecondClass :: display ()
{
    cout <<"Display method is Called" <<endl;
}
