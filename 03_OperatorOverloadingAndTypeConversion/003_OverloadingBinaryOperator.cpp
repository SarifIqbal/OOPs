#include <iostream>
#include <iomanip>
using namespace std;
class complex
{
    float real;
    float imag;

public:
    complex() {}
    complex(float a, float b)
    {
        real = a;
        imag = b;
    }
    complex operator+(complex c); // complex complex::operator+(complex c)
    void display();
};
complex complex::operator+(complex c)
{
    complex temp;
    temp.real = real + c.real;
    temp.imag = imag + c.imag;
    return (temp);
}
void complex::display(void)
{
    cout << real << " + " << imag << " j" <<  endl;
}
int main()
{
    complex c1(3.5, 4.2);
    complex c2(2.1, 6.7);
    complex c3;
    c3 = c1 + c2;
    cout << "c1 = "; c1.display();
    cout << "c2 = "; c2.display();
    cout << "c3 = "; c3.display();
    return 0;
}