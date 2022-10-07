#include <iostream>
#include <cstring>
using namespace std;
class person
{
    char name[20];
    float age;

public:
    person(char *s, float a)
    {
        strcpy(name, s);
        age = a;
    }
    person &greater(person &x); // you can define it here also
    void display(void)
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
person &person ::greater(person &x)
{
    if (x.age >= age)
        return x;
    else
        return *this;
}
int main()
{
    person P1("John", 37.50);
    person P2("Ahmed", 29.0);
    person P3("Hebber", 40.25);
    person P = P1.greater(P3); // P3.greater(P1)
    cout << "Elder person is: " << endl;
    P.display();
    P = P1.greater(P2); // P2.greater(P1)
    cout << "Elder person is: " << endl;
    P.display();
    return 0;
}