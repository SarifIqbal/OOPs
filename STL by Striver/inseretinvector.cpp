#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;
    vec.emplace_back(11);
    vec.push_back(21);
    vector<int>::iterator iter = vec.begin();
    vec.insert(vec.begin(), 100);
    vec.insert(vec.begin() + 1, 2, 786);
    vec.insert(vec.begin() + 2, 5);
    for(iter = vec.begin(); iter != vec.end(); iter++)
        cout << *iter << " ";
    cout << endl;
    vector<int>vec2(2, 50);
    vec.insert(vec.begin(), vec2.begin(), vec2.end());
    for(iter = vec.begin(); iter != vec.end(); iter++)
        cout << *iter << " ";
    return 0;
}