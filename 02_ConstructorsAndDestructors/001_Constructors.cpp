#include <iostream>
using namespace std;
class INTEGER
{
    int hello, bye;

public:
    INTEGER(void); // constructor declared
    void getdata(int, int);
    void putdata(void);
};
INTEGER::INTEGER(void) // constructor defined
{
    hello = 1;
    bye = 121;
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
    INTEGER int1;
    cout << "Old value are: " << endl;
    int1.putdata();
    cout << "Enter two value for hello and bye: ";
    int a, b;
    cin >> a >> b;
    int1.getdata(a, b);
    cout << "New value are: " << endl;
    int1.putdata();
    return 0;
}