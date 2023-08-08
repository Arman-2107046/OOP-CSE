#include <bits/stdc++.h>
using namespace std;

class Bank
{
private:
    string name;
    int accNo;
    string typeAcc;
    double balance;

public:
    int getAccNo()
    {
        return accNo;
    }
    int getValue(string name1, int accNo1, string typeAcc1, double balance1)
    {
        name = name1;
        accNo = accNo1;
        typeAcc = typeAcc1;
        balance = balance1;
    }
    void deposit(double depo)
    {
        balance += depo;
        cout << "new balance after deposit--" << balance << endl;
    }

    void withdraw(double amount)
    {
        if (balance < amount)
        {
            cout << "cant withdraw--" << amount << endl;
        }
        else
        {
            balance -= amount;
            cout << "new balance after withdraw--" << balance << endl;
        }
    }

    void display()
    {
        cout << "name is--" << name << "----"
             << "balance is--" << balance << endl;
    }
};

int main()
{
    cout << "enter maximum acount holder no--" << endl;
    int n;
    cin >> n;

    Bank a[n];
    int x;
    for (int i = 0; i < n; i++)
    {
        cout << "enter info of--" << i + 1 << " person" << endl;
        string name2;
        int accNo2;
        string typeAcc2;
        double balance2;
        cin >> name2 >> accNo2 >> typeAcc2 >> balance2;
        a[i].getValue(name2, accNo2, typeAcc2, balance2);
    }

    cout << "enter annNO--" << endl;
    int number;
    cin >> number;

    for (int i = 0; i < n; i++)
    {

        if (number == a[i].getAccNo())
        {
            while (1)
            {
                cout << "you can do following functions--" << endl;
                cout << "1 : deposit" << endl;
                cout << "2 : withdraw" << endl;
                cout << "3 : to display name and balance" << endl;
                cout << "4 : to quit" << endl;

                cin >> x;
                if (x == 1)
                {
                    cout << "enter deposit amount--" << endl;
                    double amt;
                    cin >> amt;
                    a[i].deposit(amt);
                }
                else if (x == 2)
                {
                    cout << "enter withdraw amount--" << endl;
                    double amt;
                    cin >> amt;
                    a[i].withdraw(amt);
                }
                else if (x == 3)
                {
                    a[i].display();
                }
                else
                {
                    break;
                }
            }
        }
    }

    return 0;
}