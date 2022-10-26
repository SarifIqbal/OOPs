#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "Precision set to 3 digits" << endl;
    cout.precision(3);
    cout.width(10);
    cout << "Value";
    cout.width(15);
    cout << "SQRT_OF_VLAUE" << endl;
    for (int n = 1; n <= 5; n++)
    {
        cout.width(8);
        cout << n;
        cout.width(13);
        cout << sqrt(n) << endl;
    }
    cout << endl;
    cout << "Precision set to 5 digit" << endl;
    cout.precision(5);
    cout << "sqrt(10) = " << sqrt(10) << endl;
    cout.precision(0);
    cout << "sqrt(10) = " << sqrt(10) << " (default setting)" << endl;
    return 0;
}