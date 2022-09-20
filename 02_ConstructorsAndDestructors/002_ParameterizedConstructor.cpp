#include <iostream>
using namespace std;
class INTEGER
{
    int hello, bye;

public:
    INTEGER(int, int);      // constructor declared, it can be inline as well
    void getdata(int, int); // by defining inside the class definition
    void putdata(void);
};
INTEGER::INTEGER(int x, int y) // constructor defined
{
    hello = x;
    bye = y;
}
void INTEGER::getdata(int a, int b)
{
    hello = a;
    bye = b;
}
void INTEGER::putdata()
{
    cout << "hello: " << hello << endl;
    cout << "bye: " << bye << endl;
}
int main()
{
    INTEGER int1 = INTEGER(11, 21); // explicit call
    // INTEGER int1; int1 = INTEGER(11, 21); will also work
    INTEGER int2(5, 10);            // implicit call
    cout << "int1: ";
    int1.putdata();
    cout << endl;
    cout << "int2: ";
    int2.putdata();
    cout << endl;
    int a, b;
    cout << "Enter value for int1: ";
    cin >> a >> b;
    int1.getdata(a, b);
    cout << "Enter value for int2: ";
    cin >> a >> b;
    int2.getdata(a, b);
    cout << "New value are: " << endl;
    cout << "int1: ";
    int1.putdata();
    cout << endl;
    cout << "int2: ";
    int2.putdata();
    cout << endl;
    return 0;
}