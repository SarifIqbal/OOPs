#include <iostream>
using namespace std;
int count = 0;
class test
{
public:
    test()
    {
        count++;
        cout << "Constructor Message: Object number " << count << " created.." << endl;
    }
    ~test()
    {
        cout << "Destructor Message: Object number " << count << " destroyed.." << endl;
        count--;
    }
};
int main()
{
    cout << "Inside the main block.." << endl;
    cout << "Creating first object T1.." << endl;
    test T1;
    {
        // block 1
        cout << "Inside block 1" << endl;
        cout << "Creating object T2 and T3.." << endl;
        test T1, T2;
        cout << "Leaving block 1.." << endl;
    }
    cout << "Back inside main block.." << endl;
    return 0;
}