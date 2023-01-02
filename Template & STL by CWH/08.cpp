#include <iostream>
using namespace std;

void func(int a)
{
    cout << "I am first function " << a << endl;
}

template <class T>
void func(T a)
{
    cout << "I am first func " << a << endl;
}
template <class T>
void func1(T a)
{
    cout << "I am first func " << a << endl;
}
int main()
{
    func(4); // exact match takes thew highest priority
    func1(4);
    return 0;
}