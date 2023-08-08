#include <bits/stdc++.h>
#include <cmath>
using namespace std;

class Time
{
private:
    int hours;
    int mins;

public:
    Time()
    {
        hours = 0;
        mins = 0;
    }

    Time(int a, int b)
    {
        hours = a;
        mins = b;
    }

    void display()
    {
        cout << "hours is : " << hours << "\nmins is : " << mins << endl;
    }

    friend Time operator+(Time &t1, Time &t2);
    friend Time operator-(Time &t1, Time &t2);
};

Time operator+(Time &t1, Time &t2)
{
    Time T3;

    int total_mins = t1.mins + t2.mins;
    int carry = total_mins / 60;
     int total_hours = t1.hours + t2.hours + carry;
    // int mins1 = (t1.mins + t2.mins) % 60;

    T3.hours=total_hours;
    T3.mins=total_mins%60;
   

    return T3;
}

Time operator -(Time &t1,Time &t2)
{

int total_time=t1.hours-t2.hours;


}
int main()
{
    Time t1(2,50),t2(3,30);

Time T=t1+t2;

t1.display();
t2.display();
T.display();
}
// #include <iostream>
// using namespace std;

// class Money
// {
// private:
//     int dollars;
//     int cents;

// public:
//     Money(int d, int c)
//     {
//         dollars = d;
//         cents = c;
//     }

//     Money()
//     {
//         dollars = 0;
//         cents = 0;
//     }

//     void display() const
//     {
//         cout << "Amount: $" << dollars << "." << cents << endl;
//     }

//     // Friend function declarations for operator overloading
//     friend Money operator+(Money &m1, Money &m2);
//     friend Money operator-(Money &m1, Money &m2);
// };

// // Friend function definitions for operator overloading
// Money operator+(Money &m1, Money &m2)
// {
//     Money M3;
//     int total_cents = m1.cents + m2.cents;
//     int carry = total_cents / 100;
//     total_cents %= 100;

//     int total_dollars = m1.dollars + m2.dollars + carry;
//     M3.cents = total_cents;
//     M3.dollars = total_dollars;
//     return M3;
// }

// Money operator-(Money &m1, Money &m2)
// {
//     Money M3;

//     int total_cents = m1.cents - m2.cents;
//     int borrow = 0;

//     if (total_cents < 0)
//     {
//         total_cents += 100;
//         borrow = 1;
//     }

//     int total_dollars = m1.dollars - m2.dollars - borrow;
//     M3.cents = total_cents;
//     M3.dollars = total_dollars;
//     return M3;
// }

// int main()
// {
//     Money amount1(10, 50); // $10.50
//     Money amount2(5, 25);  // $5.25

//     Money sum = operator+(amount1, amount2);
//     Money difference = operator-(amount1, amount2);

//     cout << "Amount 1: ";
//     amount1.display();
//     cout << "Amount 2: ";
//     amount2.display();
//     cout << "Sum: ";
//     sum.display();
//     cout << "Difference: ";
//     difference.display();

//     return 0;
// }
