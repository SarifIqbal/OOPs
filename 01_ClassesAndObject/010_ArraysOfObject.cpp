#include <iostream>
using namespace std;
class employee
{
    char name[30];
    float age;

public:
    void getdata(void);
    void putdata(void);
};
void employee ::getdata(void)
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
}
void employee ::putdata(void)
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}
int main()
{
    int size = 3;
    employee manager[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Details of Manager: " << i + 1 << endl;
        manager[i].getdata();
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << endl;
        cout << "Manager " << i + 1 << ": " << endl;
        manager[i].putdata();
    }
    return 0;
}