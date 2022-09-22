#include <iostream>
using namespace std;
class test
{
    int *a;

public:
    test(int size)
    {
        a = new int[size];
        cout << "Constructor Message: Integer Array of size " << size << " created.." << endl;
    }
    ~test()
    {
        delete a;
        cout << "Destructor Message: Freed up the memory allocated for integer array.." << endl;
    }
};
int main()
{
    int s;
    cout << "Enter the size of the array: ";
    cin >> s;
    cout << "Creating an object of test class.." << endl;
    test T(s);
    return 0;
}