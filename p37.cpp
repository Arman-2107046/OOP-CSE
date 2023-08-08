#include <bits/stdc++.h>
using namespace std;

class code
{
    int id;

public:
    code()
    {
    }
    code(int a)
    {
        id = a;
    }
    code(code &x)
    {
        id = x.id;
    }

    void display()
    {
        cout << id <<" "<< endl;
    }
};


int main()
{

    code a(100);
    code b(a);
    code c=a;

    code d;
    d=a;

    a.display();
    b.display();
    c.display();
    d.display();
}


