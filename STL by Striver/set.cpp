#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> st;
    st.insert(1); // {1}
    st.insert(2); // {1, 2}
    st.insert(2); // {1, 2}
    st.insert(3); // {1, 2, 3}
    st.insert(4); // {1, 2, 3, 4}
    st.insert(5); // {1, 2, 3, 4, 5}
    // {1, 2, 3, 4, 5}
    auto iter = st.find(3);
    // {1, 2, 3, 4, 5}
    auto it = st.find(6);
    // {1, 2, 3, 4, 5}
    st.erase(5);
    // {1, 2, 3, 4}
    int cnt1 = st.count(1); // 1
    int cnt2 = st.count(9); // 0
    auto it3 = st.find(3);
    st.erase(it3);
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2);
    // multiset obeys sorted nature
    // but it disobeys unique elements in a set
    multiset<int> mst;
    mst.insert(2);          // {2}
    mst.insert(1);          // {1, 2}
    mst.insert(1);          // {1, 1, 2}
    mst.insert(2);          // {1, 1, 2, 2}
    mst.insert(1);          // {1, 1, 1, 2, 2}
    mst.insert(4);          // {1, 1, 1, 2, 2, 4}
    mst.insert(1);          // {1, 1, 1, 1, 2, 2, 4}
    mst.count(1);           // it will give 4 becaue 4 1's are present in the multiset
    mst.erase(1);           // {all 1's deleted}
    mst.erase(mst.find(1)); // only a single 1 erased
    // rest all functions are same as set
}