#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;
int main ()

{
    int row, col, i, j;
    cout <<"Enter the value of row & col: ";
    cin >>row >>col;

    int Bangladesh[row][col];
    cout <<"Enter the value of tha Array: " <<endl <<endl;

    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            cout <<"Bangladesh [" <<i <<"]["<<j <<"] = ";
            cin >> Bangladesh [i][j];
        }
        cout <<endl;
    }
    cout <<endl;
    cout <<"Printing the Array: " <<endl;

    cout <<"Bangladesh [" <<row <<"][" <<col <<"] = " <<endl <<endl;

for ( i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            cout <<"    " <<Bangladesh[i][j] <<"  ";
        }
        cout <<endl;
    }

    getch ();
}
