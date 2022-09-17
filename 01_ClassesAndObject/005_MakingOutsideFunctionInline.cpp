#include <iostream>
#include <iomanip>
using namespace std;
class item
{
    int number;
    float cost;

public:
    void getdata(int a, float b);
    // when a function is defined inside a class, it is treated as an
    // inline function
    void putdata(void)
    {
        cout << "Number: " << number << endl;
        cout << "Cost: " << fixed << setprecision(2) << cost << endl;
    }
};
inline void item::getdata(int a, float b)
{
    number = a;
    cost = b;
}
int main()
{
    item x;
    x.getdata(11, 21.00);
    x.putdata();
}