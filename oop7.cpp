#include<bits/stdc++.h>
using namespace std;

class cartItem
{
    private:
    string itemName;
    double itemPrice;
    int quantity;

    public:

    cartItem(string name,double price,int qty)
    {
        itemName=name;
        itemPrice=price;
        quantity=qty;
    }

    //copy
    cartItem(cartItem &r)
    {
        itemName=r.itemName;
        itemPrice=r.itemPrice;
        quantity=r.quantity;
    }
    ~cartItem()
    {
        cout<<"destroy"<<itemName<<"from cart"<<endl;
    }

    friend double calcTotal(cartItem & item);
};

double calcTotal(cartItem & item)
{
    return item.itemPrice*item.quantity;
}



int main()
{
cartItem i1("phone",10000,2);

cartItem item3 =i1;

cout<<calcTotal(item3)<<endl;


}