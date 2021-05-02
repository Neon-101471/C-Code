#include <iostream>
#include <conio.h>

using namespace std;
int main ()

{
    int marks;
    cout <<"Enter your obtained marks: ";
    cin >> marks;

    if (marks>=100)
        cout <<"Invalid Number";
    else if(marks>=80)
        cout <<"Congratulations! You have got A+";
    else if(marks>=70)
        cout <<"Congratulations! You have got A";
        else if(marks>=60)
        cout <<"Congratulations! You have got A-";
        else if(marks>=50)
        cout <<"Congratulations! You have got B";
        else if(marks>=40)
        cout <<"Congratulations! You have got C";
        else if(marks>=33)
        cout <<"Congratulations! You have got D";
        else
        cout <<"Sorry! You are Fail" <<endl <<"Better Luck Next Time";

        getch ();
}
