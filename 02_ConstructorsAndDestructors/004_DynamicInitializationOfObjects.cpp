#include <iostream>
using namespace std;
class Fixed_Deposit
{
    long int principal_amount;
    int years;
    float rate;
    float return_value;

public:
    Fixed_Deposit() {}
    Fixed_Deposit(long int p, int y, float r = 0.12);
    Fixed_Deposit(long int p, int y, int r);
    void display(void);
};
void Fixed_Deposit::display(void)
{
    cout << endl;
    cout << "Principal Amount : " << principal_amount << endl;
    cout << "Return Value     : " << return_value << endl;
}
Fixed_Deposit::Fixed_Deposit(long int p, int y, int r)
{
    principal_amount = p;
    years = y;
    rate = r;
    return_value = principal_amount;
    for (int i = 1; i <= y; i++)
        return_value = return_value * (1.0 + (float(r) / 100));
}
Fixed_Deposit::Fixed_Deposit(long int p, int y, float r)
{
    principal_amount = p;
    years = y;
    rate = r;
    return_value = principal_amount;
    for (int i = 1; i <= y; i++)
        return_value = return_value * (1.0 + r);
}
int main()
{
    Fixed_Deposit FD1, FD2, FD3;
    long int p;     // principal amount
    int y;      // investment period, years
    float r;    // interest rate, decimal form
    int R;      // interest rate, percent form
    cout << "Enter the amount, period, interest rate(in percent): ";
    cin >> p >> y >> R; fflush(stdin);
    FD1 = Fixed_Deposit(p, y, R);
    cout << "Enter the amount, period, interest rate(decimal form): ";
    cin >> p >> y >> r; fflush(stdin);
    FD2 = Fixed_Deposit(p, y, r);
    cout << "Enter the amount, and period: ";
    cin >> p >> y; fflush(stdin);
    FD3 = Fixed_Deposit(p, y);
    cout << endl;
    cout << "Deposit 1: "; FD1.display();
    cout << "Deposit 2: "; FD2.display();
    cout << "Deposit 3: "; FD3.display();
    return 0;
}