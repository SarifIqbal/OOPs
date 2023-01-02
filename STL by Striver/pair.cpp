#include <iostream>
#include <utility>
using namespace std;
void explainPair()
{
    pair<int, int> p1 = {11, 21};
    cout << "The pair is: " << p1.first << " " << p1.second << endl;
    pair<int, pair<int, int>> p2 = {1, {7, 11}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;
    pair<int, int> arr[] = {{1, 2}, {6, 3}, {7, 4}};
    cout << arr[1].first << " " << arr[1].second << endl;
}
int main()
{
    explainPair();
    return 0;
}