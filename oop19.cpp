#include <bits/stdc++.h>
using namespace std;

class rectangle

{
private:
    int x, y;

public:
    rectangle(int a, int b)
    {
        x = a, y = b;
    }
int area()
{
    return x*y;
}
friend rectangle mul2(rectangle);
};

rectangle mul2(rectangle s)
{
    rectangle r(s.x*2,s.y*2);
    return r;
}


int main()
{
rectangle rect1(3,6),rect2=mul2(rect1);

cout<<"area of r1--"<<rect1.area()<<endl;
cout<<"area of r2--"<<rect2.area()<<endl;



}
