// Outside the class definition
#include <iostream>
#include <iomanip>
using namespace std;
class item
{
    int number;
    float cost;

public:
    void getdata(int a, float b);
    void putdata(void);
};
void item::getdata(int a, float b)
{
    number = a;
    cost = b;
}
void item::putdata(void)
{
    cout << "Number: " << number << endl;
    cout << "Cost: " << fixed << setprecision(2) << cost << endl;
}
int main()
{
    item x;
    x.getdata(11, 21.00);
    x.putdata();
}