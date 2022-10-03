#include <iostream>
using namespace std;
class B
{
    int a; // private; not inheritable
public:
    int b; // public; ready for inheritance
    void get_ab();
    int get_a(void);
    void show_a(void);
};
class D : private B
{
    int c;

public:
    void mul(void);
    void display(void);
};
void B ::get_ab(void)
{
    cout << "Enter values for a and b: ";
    cin >> a >> b;
}
int B ::get_a()
{
    return a;
}
void B::show_a()
{
    cout << "a = " << a << endl;
}
void D::mul()
{
    get_ab();
    c = b * get_a();
}
void D::display()
{
    show_a();
    cout << "a = " << get_a() << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << endl;
}
int main()
{
    D d;
    // d.get_ab(); won't work
    d.mul();
    // d.show_a();  won't work
    d.display();
    // d.b = 20;  won't work;  b has become private
    d.mul();
    d.display();
    return 0;
}