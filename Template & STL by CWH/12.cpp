// function object - functors in C++ stl
#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {1353, 344, 43, 123445, 53404, 7347, 3492};
    for (int i = 0; i < 7; i++)
        cout << arr[i] << " ";
    cout << endl;
    cout << endl;
    sort(arr, arr + 5); // sorted till 5 elements from start
    for (int i = 0; i < 7; i++)
        cout << arr[i] << " ";
    cout << endl;
    cout << endl;
    sort(arr, arr + 7, greater<int>()); // sorted all elements in descending order
    for (int i = 0; i < 7; i++)
        cout << arr[i] << " ";
    return 0;
}