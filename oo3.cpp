#include <bits/stdc++.h>
using namespace std;//overloading +/-/*// operator // done with every operator

class Rectangle
{
private:
    int length;
    int width;

public:
    Rectangle() {}

    Rectangle(int a, int b)
    {
        length = a;
        width = b;
    }

    int area()
    {
        return length * width;
    }

 friend Rectangle operator +(Rectangle & r1,Rectangle & r2);
};

Rectangle operator +(Rectangle & r1,Rectangle & r2)
{

    Rectangle R;
    R.length=r1.length+r2.length;
    R.width=r1.width+r2.width;
    return R;
}

int main()
{

Rectangle r1(5,10),r2(2,6);
 Rectangle rect;

 rect=r1+r2;

 cout<<"area is : "<<rect.area()<<endl;

return 0;
}