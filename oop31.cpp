#include <iostream>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;

public:
    void getTime(int h, int m)
    {
        hours = h;
        minutes = m;
    }

    void putTime()
    {
        cout << hours << " hours and " << minutes << " minutes" << endl;
    }

    void sum(Time t1, Time t2)
    {
        minutes = t1.minutes + t2.minutes;
        hours = minutes / 60;
        minutes = minutes % 60;
        hours += t1.hours + t2.hours;
    }
};

int main()
{
    Time a,b,c;

    a.getTime(2, 45);
    b.getTime(3, 30);

    c.sum(a, b);

    cout << "T1 = ";
    a.putTime();

    cout << "T2 = ";
    b.putTime();

    cout << "T3 = ";
    c.putTime();

    return 0;
}
