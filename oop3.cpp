#include <bits/stdc++.h>
using namespace std;

class rectangle
{
private:
    int x;
    int y;

public:
~rectangle()
{
    cout<<"destructor is called"<<endl;
}
    rectangle();
    rectangle(int, int);
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    int area()
    {
        return x * y;
    }
rectangle(rectangle&r)
{
    x=r.x;
    y=r.y;
}
};

rectangle::rectangle()
{
    x=7,y=8;
}
rectangle::rectangle(int a,int b)
{
    x=a;
    y=b;
}

int main()
{
    rectangle rect;
    cout<<"area--"<<rect.area()<<endl;
    rectangle rect1(3,4),rect2(5,6);
    cout<<"area1--"<<rect1.area()<<endl;
    cout<<"area2--"<<rect2.area()<<endl;

    rectangle r=rect2;
    cout<<"area--"<<r.area()<<endl;

}
