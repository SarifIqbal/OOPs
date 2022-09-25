#include <iostream>
using namespace std;
class test
{
public:
    int num;
    test(int j)
    {
        num = j;
    }
    test *operator->(void)
    {
        return this;
    }
};
int main()
{
    test T(5);
    test *Ptr = &T;
    cout << "T.num = " << T.num << endl;       // accessing num normally
    cout << "Ptr->num = " << Ptr->num << endl; // accessing num using normal object pointer
    cout << "T->num = " << T->num;             // accessing num using overloaded -> operator
    return 0;
}