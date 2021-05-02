#include <iostream>
#include <conio.h>
using namespace std;

class MobileUser
{
public:
    void call ()
    {
        cout <<"This is Non-abstracted function" <<endl;
    }
    virtual void sendmessage () = 0;
};

class rahim: public MobileUser
{
public:
    void sendmessage ()
{
    cout <<"This is Rahim & abstracted function" <<endl;
}
};

class karim: public MobileUser
{
public:
    void sendmessage ()
    {
        cout <<"This is Karim & abstracted function" <<endl;
    }
};

int main ()

{
    MobileUser *mobile;
    rahim ra;
    karim ka;

    mobile = &ra;
    mobile -> sendmessage ();

    mobile = &ka;
    mobile -> sendmessage ();

    mobile -> call ();

    getch ();
}
