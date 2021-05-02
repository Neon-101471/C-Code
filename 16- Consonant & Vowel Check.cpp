#include <iostream>
#include <conio.h>

using namespace std;
int main ()

{
    char ch;
    cout <<"Enter any Letter: ";
    cin >> ch;

    ch = tolower(ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')

    {
        cout <<"This letter is vowel";
    }
    else
    {
        cout <<"This letter is Consonant";
    }

    getch ();
}
