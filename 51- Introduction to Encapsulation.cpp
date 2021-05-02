#include <iostream>
#include <conio.h>
using namespace std;

class student
{
private:
    string name;

    public:

    int setname (string x)
    {
        name = x;
    }
    string getname ()
    {
        return name;
    }
};

int main ()

{
    student st;
    st.setname ("Neon-10");

    cout <<"Welcome " <<st.getname () <<endl;

    getch ();
}
