#include <iostream>
using namespace std;
int main()
{
    int count = 0;
    char c;
    cout << "Input Text: ";
    cin.get(c);
    while (c != '\n')
    {
        cout.put(c);
        count++;
        cin.get(c);
    }
    cout << endl;
    cout << "Number of Characters: " << count << endl;
}