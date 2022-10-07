#include <iostream>
using namespace std;
class Balagurusamy // base class
{
public:
    virtual void example() = 0; // denotes pure virtual function definition
};
class C : public Balagurusamy // derived class 1
{
public:
    void example()
    {
        cout << "C text book written by Balagurusamy" << endl;
    }
};
class oops : public Balagurusamy // derived class 2
{
public:
    void example()
    {
        cout << "C++ text book written by Balagurusamy" << endl;
    }
};
int main()
{
    Balagurusamy *arra[2];
    C e1;
    oops e2;
    arra[0] = &e1;
    arra[1] = &e2;
    arra[0]->example();
    arra[1]->example();
    return 0;
}