#include <bits/stdc++.h>
using namespace std;//Shopping Cart Problem Using OOP Concept 

class Items
{
private:
    int itemCode[50];
    float itemPrice[50];
    int count;

public:
    void CNT();

    void getItem();

    void displaySum();

    void remove();

    void displayItem();
};
void Items ::CNT()
{
    count = 0;
}

void Items::getItem()
{
    cout << "enter item code--" << endl;
    cin >> itemCode[count];

    cout << "enter item cost--" << endl;

    cin >> itemPrice[count];
    count++;
}

void Items::displaySum()
{
    float sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += itemPrice[i];
    }

    cout << "Price is--" << sum << endl;
}

void Items::remove()
{
    cout << "enter item code--" << endl;
    int a;
    cin >> a;

    for (int i = 0; i < count; i++)
    {
        if (itemCode[i] == a)
        {
            itemPrice[i] = 0;
        }
    }
}

void Items::displayItem()
{
    for (int i = 0; i < count; i++)

    {
        cout << itemCode[i] << "--" << itemPrice[i] << endl;
    }
}

int x;

int main()
{
    Items order;

    order.CNT();
    while (x != 5)
    {
        cout << "You can do the following--" << endl;
        cout << "1 : Add an item--" << endl;
        cout << "2 : Display total value--" << endl;
        cout << "3 : Delete an item--" << endl;
        cout << "4 : Display all item--" << endl;
        cout << "5 : Quit--" << endl;
        cout << "What is your option?" << endl;

        cin >> x;

        if (x == 1)
        {
            order.getItem();
        }
        else if (x == 2)

        {
            order.displaySum();
        }
        else if (x == 3)
        {
            order.remove();
        }
        else if (x == 4)
        {
            order.displayItem();
        }
        else if (x == 5)
        {
            break;
        }
    }
}