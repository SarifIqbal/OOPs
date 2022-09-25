// it is possible to overload a unary minus operator using a friend function..
#include <iostream>
using namespace std;
class space
{
    int x, y, z;

public:
    void getdata(int a, int b, int c);
    void display(void);
    void friend operator-(space &s); // overload friend minus
};
void space::getdata(int a, int b, int c)
{
    x = a;
    y = b;
    z = c;
}
void space::display(void)
{
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl;
}
void operator-(space &s)
{
    s.x = -s.x;
    s.y = -s.y;
    s.z = -s.z;
}
int main()
{
    space s;
    s.getdata(10, -20, 30);
    s.display();
    cout << "calling overload unary minus.." << endl;
    operator-(s);
    s.display();
    return 0;
}