#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout.setf(ios::showpoint);
    cout << setw(5) << "n";
    cout << setw(15) << "Inverse_of_n";
    cout << setw(15) << "Sum of terms" << endl;
    double term, sum = 0;
    for (int n = 1; n <= 10; n++)
    {
        term = 1.0 / float(n);
        sum = sum + term;
        cout << setw(5) << n;
        cout << setw(14) << setprecision(4);
        cout << setiosflags(ios::scientific) << term;
        cout << setw(13) << resetiosflags(ios::scientific) << sum << endl;
    }
    return 0;
}