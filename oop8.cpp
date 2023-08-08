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
cartItem(cartItem&r)
{
itemName=r.itemName;
itemPrice=r.itemPrice;
quantity=r.quantity;
}
~cartItem()
{
    cout<<"destroy"<<itemName<<"from cart"<<endl;
}


friend double totalPrice (cartItem & item);


};

double totalPrice(cartItem&item)
{
    return item.itemPrice*item.quantity;
}

int main()
{
 cartItem q1("phonne",10000,5);
cartItem sss=q1;
 cout<<totalPrice(sss)<<endl;

}