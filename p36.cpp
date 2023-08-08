#include<bits/stdc++.h>
using namespace std;//dd//mm/yy

class date
{
int day;
int month;
int year;

public:

date(int dd,int mm,int yy)
{
    day=dd;
    month=mm;
    year=yy;
}

void display()
{
    cout<<day<<"/"<<month<<"/"<<year<<endl;
}

};

int main()
{
    date d1(20,04,2023),d2(30,06,2022);

    d1.display();
    d2.display();
}