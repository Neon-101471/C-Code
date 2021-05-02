#include <iostream>
#include <conio.h>

using namespace std;
int main ()

{
    string s1 = "Shakib Al Hasan";
    string s2 = " & ";
    string s3 = "Mushfiqur Rahim";

    cout <<"S1 String = " <<s1 <<endl;

    string s4 = s1 + s2 + s3;
    cout <<"S3 String = " <<s4 <<endl;

    getch ();
}
