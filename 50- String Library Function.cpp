#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cstring>

using namespace std;
int main ()

{
    char name[25];
    cout <<"Enter your string: ";
    gets(name);

    cout <<"Welcome " <<name <<endl;

    int len = strlen(name);
    cout <<"Length = " <<len <<endl;

    strupr(name);
    cout <<"Uppercase string = " <<name <<endl;

    strlwr(name);
    cout <<"Lowercase string = " <<name <<endl;

    char name1 [25];
    char name2 [25];
    cout <<endl <<"Enter the name1 string: ";
    gets (name1);

    strcpy(name2, name1);
    cout <<"Your copy string = " <<name1 <<endl <<endl;

    char name3 [25] = "Nowshin";
    char name4 [25] = "Saif";

    cout <<"name3 string = " <<name3 <<endl;
    cout <<"name4 string = " <<name4 <<endl;

    int sc = strcmp(name3, name4);
    if (sc == 0)
    {
        cout <<endl <<"Both string are same" <<endl;
    }
    else
    {
        cout <<endl <<"Both string are not same" <<endl;
    }

    char name5 [25] = "Mushfiqur ";
    char name6 [25] = "Rahim";
    strcat (name5, name6);

    cout <<endl <<"After concatenation between name5 & name6, string = " <<name5;

    getch ();
}
