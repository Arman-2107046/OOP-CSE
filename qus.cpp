#include <bits/stdc++.h>
using namespace std;

class Bank
{
private:
    int accNo;
    string name;
    float balance;

public:
    void set_value(int acc, string nam, float bal)
    {
        accNo = acc;
        name = nam;
        balance = bal;
    }
    void deposit()
    {
        cout<<"enter amount--"<<endl;
        float amount;
        cin>>amount;

        balance += amount;
        cout << "current balance is--" << balance << endl;
    }
    void wihtdraw()
    {
        cout<<"enter amount--"<<endl;
        float amount;
        cin>>amount;

        if (amount > balance)
        {
            cout << "cant withdraw--" << amount << endl;
            cout << "current balance is--" << balance << endl;
        }
        else
        {
            balance -= amount;
            cout << "current balance is--" << balance << endl;
        }
    }
    void display()
    {
        cout << "annount no--" << accNo << "  name--" << name << "  balance--" << balance << endl;
    }
};

int main()
{
    Bank b1;
    b1.set_value(1, "rafi", 10000);
int x;
    while(x!=4)
    {
        cout<<"you can do followings--"<<endl;
        cout<<"1 : withdraw"<<endl;
        cout<<"2 : deposit"<<endl;
        cout<<"3 : display"<<endl;
        cout<<"4 : quit"<<endl;

    cin>>x;
    switch (x)
    {
    case 1: 
    b1.wihtdraw();
    break;
    case 2:
    b1.deposit();
    break;
    case 3:
    b1.display();
    break;
    case 4:
    break;
    }
    }
}