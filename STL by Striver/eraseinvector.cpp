#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec1;
    vec1.push_back(11);
    vec1.push_back(21);
    vec1.push_back(31);
    vec1.push_back(41);
    vec1.push_back(51);
    vec1.push_back(61);
    vec1.push_back(71);
    for (auto it : vec1)
        cout << it << " ";
    vector<int>::iterator iter1 = vec1.begin();
    vector<int>::iterator iter2 = vec1.end();
    vec1.erase(vec1.begin() + 1, vec1.begin() + 4);
    for (auto it : vec1)
        cout << it << " ";
    return 0;
}