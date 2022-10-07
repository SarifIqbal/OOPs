#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;
int main()
{
    int i = 0;
    char *ptr[10] = {"books", "television", "computer", "sports"};
    char str[25];
    cout << "Enter your favourite leisure pursuit: ";
    cin >> str;
    for (i = 0; i < 4; i++)
    {
        if (!strcmp(ptr[i], str))
        {
            cout << "Your favourite pursuit is available here";
            break;
        }
    }
    if (i == 4)
        cout << "Your favourite pursuit is not available here" << endl;
    return 0;
}