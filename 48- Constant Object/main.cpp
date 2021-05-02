#include <iostream>
#include "conobject.h"

using namespace std;

int main()
{
   const ConObject ob1;
    ob1.display1 ();

    ConObject ob2;
    ob2.display2 ();

    return 0;
}
