#include <iostream>
using namespace std;
class Base
{
public:
    void display()
    {
        cout << "Display base" << endl;
    }
    virtual void show()
    {
        cout << "Show base" << endl;
    }
};
class Derived : public Base
{
public:
    void display()
    {
        cout << "Display derived" << endl;
    }
    void show()
    {
        cout << "Show derived" << endl;
    }
};
int main()
{
    Base B;
    Derived D;
    Base *bptr;
    cout << "bptr points to Base" << endl;
    bptr = &B;
    bptr->display(); // calls Base version
    bptr->show();    // calls Base version
    cout << "bptr points to Derived" << endl;
    bptr = &D;
    bptr->display(); // calls base version
    bptr->show();    // calls derived version
    return 0;
}