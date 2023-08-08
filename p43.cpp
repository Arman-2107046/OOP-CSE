#include <bits/stdc++.h>
using namespace std;

class DateClass
{
    int month;
    int day;
    int year;

public:
    void setDate(int m, int d, int y)
    {
        month = m;
        day = d;
        year = y;
    }
    void print()
    {
        std::cout << month << '/' << day << '/' << year;
    }

void copy(DateClass & d)
{
month=d.month;
day=d.day;
year=d.year;
}
};


int main()
{
    DateClass date;
    date.setDate(04,12,2023);
    
}