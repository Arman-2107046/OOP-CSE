#include <bits/stdc++.h>
using namespace std;

class comp
{
private:
    int real;
    int img;

public:
    void input(int p, int q)
    {
        real = p;
        img = q;
    }
    void show(comp k)
    {
    cout << k.real << " + " << k.img << "i" << endl;

    }

    friend comp sum(comp, comp);
};

// void comp::show(comp k);
// {
// }

comp sum(comp c1, comp c2)
{
    comp c3;

    c3.real = c1.real + c2.real;
    c3.img = c1.img + c2.img;
    return c3;
}

int main()
{
    comp p, q, r;
    p.input(3, 4);
    q.input(5, 6);

    r = sum(p, q);

    p.show(p);
    q.show(q);
    cout<<endl;
    r.show(r);
}