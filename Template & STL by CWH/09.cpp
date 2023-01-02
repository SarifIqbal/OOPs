// vectors in C++ stl
#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> v)
{
    cout << "Display using v[i] = ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
}
void displayusingat(vector<int> v)
{
    cout << "Display using v.at(i) = ";
    for (int i = 0; i < v.size(); i++)
        cout << v.at(i) << " ";
    cout << endl;
}
int main()
{
    // ways to create a vector
    vector<int> vec1;        // zero length vector
    vector<char> vec2(5);    // 4-element character vector
    vector<char> vec3(vec2); // 4-element character vector from vec2
    vector<int> vec4(6, 34); // display(vec4); to check the results
    int element, size;
    cout << "Enter the size of the vector: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add to this vector: ";
        cin >> element;
        vec1.push_back(element);
    }
    display(vec1);
    displayusingat(vec1);
    vec1.pop_back();
    display(vec1);
    displayusingat(vec1);
    vec1.pop_back();
    display(vec1);
    displayusingat(vec1);
    vector<int>::iterator iter = vec1.begin();
    vec1.insert(iter, 786);
    display(vec1);
    displayusingat(vec1);
    vec1.insert(iter + 1, 121);
    display(vec1);
    displayusingat(vec1);
    vec1.insert(iter + 1, 11, 121); // it will insert 11 copies of 121
    display(vec1);                  // it's a vector so there is no issue of size <3
    displayusingat(vec1);
    return 0;
}