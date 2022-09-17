#include <iostream>
using namespace std;
class ABC; // forward declaration
class XYZ
{
    int data;

public:
    void setvalue(int value)
    {
        data = value;
    }
    friend void add(XYZ, ABC);
};
class ABC
{
    int data;

public:
    void setvalue(int value)
    {
        data = value;
    }
    friend void add(XYZ, ABC);
};
void add(XYZ obj1, ABC obj2)
{
    cout << "Sum of data values of XYZ and ABC ";
    cout << "using friend function: ";
    cout << obj1.data + obj2.data;
}
int main()
{
    XYZ X;
    ABC A;
    X.setvalue(11);
    A.setvalue(21);
    add(X, A);
    return 0;
}