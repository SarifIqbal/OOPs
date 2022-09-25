#include <iostream>
using namespace std;
class invent2; // destination class declared
class invent1  // source class
{
    int code;    // item code
    int items;   // number of items
    float price; // cost of each item
public:
    invent1(int a, int b, float c)
    {
        code = a;
        items = b;
        price = c;
    }
    void putdata()
    {
        cout << "Code: " << code << endl;
        cout << "Item: " << items << endl;
        cout << "Price: " << price << endl;
    }
    int getcode() { return code; }
    int getitems() { return items; }
    float getprice() { return price; }
    operator float() { return (items * price); }
    /* operator invent2()       // invent1 to invent2
    {
        invent2 temp;
        temp.code = code;
        temp.value = price * items;
        return temp;
    } */
};            // end of source class
class invent2 // destination class
{
    int code;
    float value;

public:
    invent2()
    {
        code = 0;
        value = 0;
    }
    invent2(int x, float y)
    {
        code = x;
        value = y;
    }
    void putdata()
    {
        cout << "Code: " << code << endl;
        cout << "Value: " << value << endl;
    }
    invent2(invent1 p)
    {
        code = p.getcode();
        value = p.getitems() * p.getprice();
    }
}; // end of destination class
int main()
{
    invent1 s1(100, 5, 140.0);
    invent2 d1;
    float total_value;
    // invent1 to float
    total_value = s1;
    // invent1 to invent2
    d1 = s1;
    cout << "Product details - invent1 type: " << endl;
    s1.putdata();
    cout << endl;
    cout << "Stock value: " << endl;
    cout << "Value: " << total_value << endl;
    cout << "Product details - invent2 type: " << endl;
    d1.putdata();
    return 0;
}