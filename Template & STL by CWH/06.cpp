// swap function using function template
#include <iostream>
using namespace std;
template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x = 5, y = 7;
    cout << x << " " << y << endl;
    swapp(x, y);
    cout << x << " " << y << endl;
}