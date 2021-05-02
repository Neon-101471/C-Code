#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;
int main ()

{
    int i, sum = 0, n;
    cout <<"How many Students: ";
    cin >>n;

    int students[n];

    for (i=0; i<n; i++)
    {
        cout <<"Enter the Marks of Student " <<i+1 <<" = ";
        cin >> students[i];
        sum = sum + students[i];
    }
    cout <<endl <<"Total marks of all Students = " <<sum <<endl <<endl;
    float avg = (float) sum/n;
    cout <<"Average = " <<avg <<endl <<endl;

    float max = students[0];
    for (i=1; i<n; i++)
    {
        if (max < students[i])
        {
            max = students[i];
        }
    }
    cout <<"Maximum number is = " <<max <<endl <<endl;

    float min = students[0];
    for (i=1; i<n; i++)
    {
        if (students[0] > students[i])
        {
            min = students[i];
        }
    }
    cout <<"Minimum number is = " <<min;

    getch ();
}



