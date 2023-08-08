#include <bits/stdc++.h>
using namespace std;
class rectangle
{
private:
    int x, y;

public:

    rectangle(int,int);
    int area()
    {
        return x * y;
    }
};

rectangle::rectangle(int a,int b)
{
    x=a;
    y=b;
}

int main()
{

    rectangle rectA(3,9),rectB(5,6);

    cout<<"area--"<<rectA.area()<<endl;
    cout<<"area--"<<rectB.area()<<endl;
    return 0;
}
