#include <iostream>
using namespace std;
class ABC; // forward declaration
class XYZ
{
    int x;

public:
    XYZ(int a)
    {
        x = a;
    }
    friend void max(XYZ ob1, ABC ob2);
};
class ABC
{
    int x;

public:
    ABC(int a)
    {
        x = a;
    }
    friend void max(XYZ ob1, ABC ob2);
};
void max(XYZ ob1, ABC ob2)
{
    if (ob1.x >= ob2.x)
    {
        cout << ob1.x << " is maximum";
    }
    else
    {
        cout << ob2.x << " is maximum";
    }
}
int main()
{
    ABC ob1(10);
    XYZ ob2(20);
    max(ob2, ob1);
    return 0;
}