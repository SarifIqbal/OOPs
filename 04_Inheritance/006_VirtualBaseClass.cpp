#include <iostream>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    void get_number(int a)
    {
        roll_number = a;
    }
    void put_number(void)
    {
        cout << "Roll Number: " << roll_number << endl;
    }
};
class test : virtual public student
{
protected:
    float part1, part2;

public:
    void get_marks(float x, float y)
    {
        part1 = x;
        part2 = y;
    }
    void put_marks(void)
    {
        cout << "Marks Obtained: " << endl;
        cout << "Part1: " << part1 << endl;
        cout << "Part2: " << part2 << endl;
    }
};
class sports : public virtual student
{
protected:
    float score;

public:
    void get_score(float s)
    {
        score = s;
    }
    void put_score(void)
    {
        cout << "Sports wt: " << score << endl;
    }
};
class result : public test, public sports
{
    float total;

public:
    void display(void);
};
void result ::display(void)
{
    put_number();
    put_marks();
    put_score();
    total = part1 + part2 + score;
    cout << "Total Score: " << total << endl;
}
int main()
{
    result student1;
    student1.get_number(11);
    student1.get_marks(95.5, 97.5);
    student1.get_score(7.0);
    student1.display();
    return 0;
}