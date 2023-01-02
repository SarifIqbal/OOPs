// converting previous program to a template class
// so that we can use it for other data types also...

#include <iostream>
using namespace std;
template <class T>
class vector
{
public:
    T *arr;
    int size;
    vector() {}
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotProduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    // for int value
    vector<int> v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[2] = 1;
    vector<int> v2(3);
    v2.arr[0] = 1;
    v2.arr[1] = 0;
    v2.arr[2] = 1;
    int a = v1.dotProduct(v2);
    cout << "for int value: " << a << endl;
    cout << endl;

    // for float value
    vector<float> v3(3);
    v3.arr[0] = 1.4;
    v3.arr[1] = 3.3;
    v3.arr[2] = 0.1;
    vector<float> v4(3);
    v4.arr[0] = 0.1;
    v4.arr[1] = 1.9;
    v4.arr[2] = 4.1;
    float b = v3.dotProduct(v4);
    cout << "for float value: " << b << endl;
    cout << endl;
    return 0;
}