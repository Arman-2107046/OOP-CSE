#include <bits/stdc++.h>
using namespace std;
class rectangle
{
private:
    int x, y;

public:
    void set_values(int, int);
    int area()
    {
        return x * y;
    }
};

void rectangle::set_values(int a, int b)
{
    x = a;
    y = b;
}

int main()
{

    rectangle rectA, rectB;
    rectA.set_values(3, 4);
    rectB.set_values(5, 4);

    cout << "area--" << rectA.area() << endl;
    cout << "area--" << rectB.area() << endl;
    return 0;
}
