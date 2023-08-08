#include<bits/stdc++.h>

using namespace std;

class Complex
{
private:
int real;
int img;
public:

Complex(){}
Complex(int a,int b)
{
    real=a;
    img=b;
}

void display()
{

    cout<<real<<" + "<<img<<"i"<<endl;
}

friend Complex operator +(Complex &c1,Complex&c2);
friend Complex operator *(Complex &c1,Complex&c2);

};

Complex operator +(Complex &c1,Complex&c2)
{
    Complex C;
    C.real=c1.real+c2.real;
    C.img=c1.img+c2.img;
    return C;
}

Complex operator *(Complex &c1,Complex&c2)
{
    Complex C;
    C.real=c1.real*c2.real-c1.img*c2.img;
    C.img=c2.img*c1.real+c1.img*c2.real;
    return C;
}

int main()
{
Complex c1(5,6),c2(2,3);
Complex C;
C=c1+c2;
C.display();
Complex C1;
C1=c1*c2;
C1.display();
}