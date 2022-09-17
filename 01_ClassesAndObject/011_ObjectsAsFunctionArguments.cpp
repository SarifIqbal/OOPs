#include <iostream>
using namespace std;
class timee
{
    int hours;
    int minutes;

public:
    void gettime(int h, int m)
    {
        hours = h;
        minutes = m;
    }
    void puttime(void)
    {
        cout << hours << " hours and " << minutes << " minutes" << endl;
    }
    void sum(timee, timee);
};
void timee ::sum(timee t1, timee t2)
{
    minutes = t1.minutes + t2.minutes;
    hours = minutes / 60;
    minutes = minutes % 60;
    hours = hours + t1.hours + t2.hours;
}
int main()
{
    timee t1, t2, t3;
    t1.gettime(2, 45);
    t2.gettime(3, 30);
    t3.sum(t1, t2);
    t1.puttime();
    t2.puttime();
    t3.puttime();
    return 0;
}