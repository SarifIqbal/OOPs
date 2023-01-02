#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec1 = {11, 21, 31, 41, 51, 61, 71};
    vector<int> vec2 = {79, 53, 96, 13, 94, 78, 34};
    vector<int>::iterator iter1 = vec1.begin();
    vector<int>::iterator iter2;
    iter2 = vec2.begin();
    cout << "First value of vec1: " << *iter1 << endl;
    cout << "First value of vec2: " << *iter2 << endl;
    cout << "Printing all values of vec1: " << endl;
    for(iter1 = vec1.begin(); iter1 != vec1.end(); iter1++)
        cout << *iter1 << " ";
    cout << endl;
    cout << "Printing all values of vec2: " << endl;
    for(iter2 = vec2.begin(); iter2 != vec2.end(); iter2++)
        cout << *iter2 << " ";
    cout << endl;
    return 0;
}