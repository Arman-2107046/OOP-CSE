#include <bits/stdc++.h>
using namespace std;//done;;

class Vector
{
    int a;
    int b;
    int c;

public:
    Vector(int p, int q, int r)
    {
        a = p;
        b = q;
        c = r;
    }
    friend void add(Vector &x, Vector &y);

    friend void dotProduct(Vector &x, Vector &y);
};

void add(Vector &x, Vector &y)
{
    Vector result(x.a + y.a, x.b + y.b, x.c + y.c);

    cout << result.a << "i + " << result.b << "j + " << result.c << endl;
}

void dotProduct(Vector &x, Vector &y)
{
    Vector result(x.a * y.a, x.b * y.b, x.c * y.c);
    cout << result.a << "i + " << result.b << "j + " << result.c << endl;
}

int main()
{
    Vector V1(3, 4, 6), V2(5, 6, 7);

    add(V1, V2);
    dotProduct(V1, V2);
    return 0;
}