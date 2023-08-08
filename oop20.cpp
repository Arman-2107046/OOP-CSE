#include <bits/stdc++.h>
using namespace std;
class abc;

class xyz
{
    private:
    int x;
    public:
    xyz(int a)
    {
        x=a;
    }

    friend void max(xyz o1,abc o2);
};
class abc
{
private:
    int x;
public:
    abc(int a)
    {
        x=a;
    }

    friend void max(xyz o1,abc o2);
    
};

void max(xyz o1,abc o2)
{
    if(o1.x>o2.x)
    {
        cout<<o1.x<<"  is maximum"<<endl;
    }
    else
    {
        cout<<o2.x<<"  is maximum"<<endl;
    }

}

int main()
{
    abc r1(10);
    xyz r2(20);

max(r2,r1);
return 0;
}
