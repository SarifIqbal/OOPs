#include <iostream>
using namespace std;
int main()
{
    cout.fill('<');
    cout.precision(3);
    for(int n = 1; n <= 6; n++)
    {
        cout.width(5);
        cout << n;
        cout.width(10);
        cout << 1.0 / float(n) << endl;
        if(n == 3)
            cout.fill('>');
    }
    cout << endl;
    cout << "Padding Changed" << endl;
    cout.fill('#');     // fill reset
    cout.width(15);
    cout << 12.345678 << endl;
    return 0;
}