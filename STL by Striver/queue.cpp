#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(21);
    q.emplace(69);
    q.push(11);
    cout << q.back() << endl;
    q.back() += 5;
    cout << q.back() << endl;
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
    // size swap empty function same as stack
}