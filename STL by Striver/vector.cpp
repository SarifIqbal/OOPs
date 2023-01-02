#include <iostream>
#include <utility>
#include <vector>
using namespace std;
void explainVector()
{
    vector<int> v1;
    v1.push_back(11);
    v1.emplace_back(21); // emplace_back is faster than push_back
    cout << v1[0] << " " << v1.at(1) << endl;
    vector<pair<int, int>> v2;
    v2.push_back({123, 345});  // it will not assume 123, 345 to be a pair you have to give {}
    v2.emplace_back(567, 789); // emplace back will assueme 567, 789 to be a pair no need of {}
    cout << v2[0].first << " " << v2[0].second << endl;
    cout << v2[1].first << " " << v2[1].second << endl;
    vector<int> v3(5, 100); // it's a container containing 5 instances of 100 is already defined
    for (int i = 0; i < v3.size(); i++)
        cout << v3[i] << " ";
    cout << endl;
    vector<int> v4(5); // container created with 5 instances of 0 or any garbage value
    for (int i = 0; i < v3.size(); i++)
        cout << v4[i] << " ";
    cout << endl;
    vector<int> v5(5, 20);
    vector<int> v6(v5); // it will be the copy of v5, a container containing 5 instances of 20
    for (int i = 0; i < v3.size(); i++)
        cout << v5[i] << " ";
    cout << endl;
}
int main()
{
    explainVector();
    return 0;
}