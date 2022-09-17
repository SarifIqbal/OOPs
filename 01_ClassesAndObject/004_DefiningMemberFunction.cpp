// Inside the class definition
#include <iostream>
#include <iomanip>
using namespace std;
class item
{
    int number;
    float cost;
// when a function is defined inside a class, it is treated as an
// inline function
public:
    void getdata(int a, float b)
    {
        number = a;
        cost = b;
    }
    void putdata(void)
    {
        cout << "Number: " << number << endl;
        cout << "Cost: " << fixed << setprecision(2) << cost << endl;
    }
};
int main()
{
    item x;
    x.getdata(11, 21.00);
    x.putdata();
}