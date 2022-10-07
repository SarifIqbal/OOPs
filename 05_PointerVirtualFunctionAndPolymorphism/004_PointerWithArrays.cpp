#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 99, 4, 37, 88, 3, 19, 45, 62, 87};
    int i, num, *ptr;
    ptr = arr;
    cout << "Enter the element to be searched: ";
    cin >> num;
    for(i = 0; i < 10; i++)
    {
        if(*ptr == num)
        {
            cout << num << " is present in the array" << endl;
            break;
        }
        else if(i == 9)
            cout << num << " is not present in the array" << endl;
        ptr++;
    }
    return 0;
}