#include<bits/stdc++.h>
using namespace std;//using constructor

class rect
{
    private:
    int x,y;

    
    public:
    rect()
    {
        x=1,y=2;
    }

    rect(int,int);

    void set_values(int,int);
    int area()
    {
        return x*y;
    }
    int getX()
    {
        return x;
    }

    int getY()
    {
        return y;
    }
};

rect::rect(int a,int b)
{
    x=a;
    y=b;
}


int main()
{
    rect r3;
    rect r1(3,4),r2(3,6);
 cout<<"x is--"<<r1.getX()<<"  y is--"<<r1.getY()<<endl;
 cout<<"x is--"<<r2.getX()<<"  y is--"<<r2.getY()<<endl;
    cout<<"1st area--"<<r1.area()<<"\n"<<"2nd area--"<<r2.area()<<endl;

cout<<"default--"<<r3.area()<<endl;
}