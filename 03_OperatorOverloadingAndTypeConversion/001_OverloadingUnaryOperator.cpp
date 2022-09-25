#include <iostream>
using namespace std;
class space
{
    int x, y, z;

public:
    void getdata(int a, int b, int c);
    void display(void);
    void operator-(); // overload unary minus
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
void space::operator-()
{
    x = -x;
    y = -y;
    z = -z;
}
int main()
{
    space s;
    s.getdata(10, -20, 30);
    s.display();
    cout << "calling overload unary minus.." << endl;
    -s;
    s.display();
    return 0;
}