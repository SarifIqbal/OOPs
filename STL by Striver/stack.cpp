#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    st.push(11);
    st.push(21);
    st.push(3);
    st.push(5);
    st.push(7);
    cout << st.top() << endl;
    cout << "Size: " << st.size() << endl;
    st.pop();
    cout << st.top() << endl;
    cout << "Size: " << st.size() << endl;
    cout << st.empty();
    return 0;
}