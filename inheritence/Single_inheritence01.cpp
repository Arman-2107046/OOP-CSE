#include <iostream>
using namespace std;//private
class B
{
    int a;

public:
    int b;
    void getab();
    int geta(void);
    void showa();
};
class D : private B
{
    int c;

public:
    void mul(void);
    void display(void);
};
void B::getab(void)
{
 cout<<"Enter values for a and b:";
 cin >> a >> b;
}
int B::geta()
{
 return a;
}
void B::showa()
{
 cout << "a=" << a << "\n";
}
void D::mul()
{
 getab();
 c = b * geta();
}
void D::display()
{
 showa();
 cout << "b=" << b << "\n";
 cout << "c=" << c << "\n\n";
}
int main()
{
 D d;
 // d.getab();won’t work
 d.mul();
 // d.showa();won’t work
 d.display();
 // d.b=20; won’t work, b has become private
 d.mul();
 d.display();
 return 0;
}
