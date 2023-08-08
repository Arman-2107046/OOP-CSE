#include <bits/stdc++.h>
using namespace std;

class rectangle

{
private:
    int height;
    int width;

public:
    // rectangle(int a, int b)
    // {
    //     height = a;
    //     width = b;
    // }
    void set_values(int, int);
    int area()
    {
        return height * width;
    }
    friend rectangle duplicate (rectangle);
};

void rectangle::set_values(int a,int b)
{
    height=a;
    width=b;
}

rectangle duplicate(rectangle xyz)
{
    rectangle sss;
    sss.width=xyz.width*2;
    sss.height=xyz.height*2;
    return sss;
}
int main()
{
rectangle rect1,rect2;
rect1.set_values(3,4);
rect2=duplicate(rect1);

cout<<"2nd area--"<<rect2.area()<<endl;
return 0;
}