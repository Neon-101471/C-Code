#include <conio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
int main ()

{
    while (1)

    {
        int Randnum, Guessnum;
        cout <<"Enter your Guess Number: ";
        cin >> Guessnum;

        Randnum = 1 + rand()%5;

        if (Guessnum == Randnum)
        {
            cout <<"You have WON" <<endl <<endl;
        }
        else
        {
            cout <<"Unfortunately You are LOST" <<endl;
            cout <<"The Random Number was: " <<Randnum <<endl <<endl;
        }
    }


    getch ();
}

