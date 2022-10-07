#include <iostream>
using namespace std;
class BC
{
public:
    int b;
    void show()
    {
        cout << "b = " << b << endl;
    }
};
class DC : public BC
{
public:
    int d;
    void show()
    {
        cout << "b = " << b << endl;
        cout << "d = " << d << endl;
    }
};
int main()
{
    BC *bptr; // base pointer
    BC base;
    bptr = &base;  // base address
    bptr->b = 100; // access bc via base pointer
    cout << "bptr points to base object" << endl;
    bptr->show();
    // derived class
    DC derived;
    bptr = &derived; // address of derived object
    bptr->b = 200;
    // bptr->d = 300; won't work
    cout << "bptr now points to derived object" << endl;
    bptr->show(); // bptr now points to derived object
    // accessing d using a pointer of type derived class DC
    DC *dptr; // derived type pointer
    dptr = &derived;
    dptr->d = 300;
    cout << "dptr is derived type pointer" << endl;
    dptr->show();
    cout << "using ((DC *)bptr)" << endl;
    ((DC *)bptr)->d = 400;
    ((DC *)bptr)->show();
    return 0;
}