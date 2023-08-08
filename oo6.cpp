#include <iostream>
using namespace std;

class Money
{
private:
    int dollars;
    int cents;

public:
    Money(int d, int c)
    {
        dollars = d;
        cents = c;
    }

    Money()
    {
        dollars = 0;
        cents = 0;
    }

    void display() const
    {
        cout << "Amount: $" << dollars << "." << cents << endl;
    }

    // Friend function declarations for operator overloading
    friend Money operator+(Money &m1, Money &m2);
    friend Money operator-(Money &m1, Money &m2);
};

// Friend function definitions for operator overloading
Money operator+(Money &m1, Money &m2)
{
    Money M3;
    int total_cents = m1.cents + m2.cents;
    int carry = total_cents / 100;
    total_cents %= 100;

    int total_dollars = m1.dollars + m2.dollars + carry;
    M3.cents = total_cents;
    M3.dollars = total_dollars;
    return M3;
}

Money operator-(Money &m1, Money &m2)
{
    Money M3;

    int total_cents = m1.cents - m2.cents;
    int borrow = 0;

    if (total_cents < 0)
    {
        total_cents += 100;
        borrow = 1;
    }

    int total_dollars = m1.dollars - m2.dollars - borrow;
    M3.cents = total_cents;
    M3.dollars = total_dollars;
    return M3;
}

int main()
{
    Money amount1(10, 50); // $10.50
    Money amount2(5, 25);  // $5.25

    Money sum = operator+(amount1, amount2);
    Money difference = operator-(amount1, amount2);

    cout << "Amount 1: ";
    amount1.display();
    cout << "Amount 2: ";
    amount2.display();
    cout << "Sum: ";
    sum.display();
    cout << "Difference: ";
    difference.display();

    return 0;
}
