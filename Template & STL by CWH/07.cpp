// overloading template function
#include <iostream>
using namespace std;
template <class T>
class Sarif
{
public:
    T data;
    Sarif() {}
    Sarif(T a)
    {
        data = a;
    }
    void display();
    // void display()
    // {
    //     cout << data << endl;
    // }
};
// writing display function outside
template <class T>
void Sarif<T>::display()
{
    cout << data << endl;
}
int main()
{
    Sarif<int> s(11);
    cout << s.data << endl;
    s.display();
    Sarif<float> i(11.21);
    cout << i.data << endl;
    i.display();
    return 0;
}