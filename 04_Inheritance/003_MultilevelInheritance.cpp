#include <iostream>
using std::cout;
using std::endl;
class student
{
protected:
    int roll_number;

public:
    void get_number(int);
    void put_number();
};
void student::get_number(int a)
{
    roll_number = a;
}
void student::put_number()
{
    cout << "Roll Number: " << roll_number << endl;
}
class test : public student // first level derivation
{
protected:
    float sub1;
    float sub2;

public:
    void get_marks(float, float);
    void put_marks(void);
};
void test::get_marks(float x, float y)
{
    sub1 = x;
    sub2 = y;
}
void test::put_marks(void)
{
    cout << "Marks in Sub1: " << sub1 << endl;
    cout << "Marks in Sub2: " << sub2 << endl;
}
class result : public test // second level derivation
{
private:
    float total;

public:
    void dispalay(void);
};
void result::dispalay(void)
{
    put_number();
    put_marks();
    total = sub1 + sub2;
    cout << "Total: " << total << endl;
}
int main()
{
    result student1;
    student1.get_number(29);
    student1.get_marks(99.00, 95.00);
    student1.dispalay();
    return 0;
}