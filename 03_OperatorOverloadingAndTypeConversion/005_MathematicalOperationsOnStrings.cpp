#include <iostream>
#include <cstring>
using namespace std;

class sstring
{
    char *p;
    int len;

public:
    sstring() // create null string
    {
        len = 0;
        p = 0;
    }
    sstring(const char *s);    // create string from arrays
    sstring(const sstring &s); // copy constructor
    ~sstring() { delete p; }   // destructor
    // + operator
    friend sstring operator+(const sstring &s, const sstring &t);

    // <= operator
    friend int operator<=(const sstring &s, const sstring &t);
    friend void show(const sstring s);
};
sstring ::sstring(const char *s)
{
    len = strlen(s);
    p = new char[len + 1];
    strcpy(p, s);
}
sstring ::sstring(const sstring &s)
{
    len = s.len;
    p = new char[len + 1];
    strcpy(p, s.p);
}
// overloading + operator
sstring operator+(const sstring &s, const sstring &t)
{
    sstring temp;
    temp.len = s.len + t.len;
    temp.p = new char[temp.len + 1];
    strcpy(temp.p, s.p);
    strcat(temp.p, t.p);
    return (temp);
}
// overloading <= operator
int operator<=(const sstring &s, const sstring &t)
{
    int m = strlen(s.p);
    int n = strlen(t.p);
    if (m <= n)
        return (1);
    else
        return (0);
}
void show(const sstring s)
{
    cout << s.p;
}
int main()
{
    sstring s1 = "New ";
    sstring s2 = "York";
    sstring s3 = "Delhi";
    sstring string1;
    sstring string2;
    sstring string3;
    string1 = s1;
    string2 = s2;
    string3 = s1 + s3;
    cout << "string1: ";
    show(string1);
    cout << endl;
    cout << "string2: ";
    show(string2);
    cout << endl;
    cout << "string3: ";
    show(string3);
    cout << endl;
    if (string1 <= string3)
    {
        show(string1);
        cout << " is smaller than ";
        show(string3);
        cout << endl;
    }
    else
    {
        show(string3);
        cout << " is smaller than ";
        show(string1);
        cout << endl;
    }
    return 0;
}