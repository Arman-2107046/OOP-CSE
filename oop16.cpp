#include <bits/stdc++.h>
using namespace std; // using constructor

class rect
{
private:
    int x, y;

public:
    rect();

    rect(int, int);

    rect(rect &item);

    void set_values(int, int);
    int area()
    {
        return x * y;
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
rect::rect()
{
    x = 2;
    y = 4;
}

rect::rect(int a, int b)
{
    x = a;
    y = b;
}

rect::rect(rect &item)
{
    x = item.x;
    y = item.y;
}

int main()
{
    rect r3;
    rect r4;
    rect r1(3, 4), r2(3, 6);
    cout << "x is--" << r1.getX() << "  y is--" << r1.getY() << endl;
    cout << "x is--" << r2.getX() << "  y is--" << r2.getY() << endl;
    cout << "1st area--" << r1.area() << "\n"
         << "2nd area--" << r2.area() << endl;

    cout << "default--" << r3.area() << endl;

    rect rCopy(r1);//assigning real to copy
    cout<<rCopy.getX()<<"  "<<rCopy.getY()<<"  area--"<<rCopy.area()<<endl;

    return 0;
}