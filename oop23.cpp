#include <bits/stdc++.h>
using namespace std;

class rect
{
private:
    int x, y;

public:
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

inline void rect::set_values(int a, int b)
{
    x = a;
    y = b;
}

int main()
{
    rect r1, r2;
    r1.set_values(3, 4);
    r2.set_values(3, 5);
    cout << "x is--" << r1.getX() << "  y is--" << r1.getY() << endl;
    cout << "x is--" << r2.getX() << "  y is--" << r2.getY() << endl;
    cout << "1st area--" << r1.area() << "\n"
         << "2nd area--" << r2.area() << endl;
}