#include<bits/stdc++.h>
using namespace std;

class square
{
    private:
    int side;

    public:
    square(int s)
    {
        side=s;
    }

    friend int area(square ss);
};
int area(square ss)
{
    return ss.side*ss.side;
}


int main()
{
    square p1(5);
    cout<<area(p1)<<endl; 
}