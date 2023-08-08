#include <bits/stdc++.h>
using namespace std;

class complex
{
private:
    int a, b;

public:
    complex(int, int);
    
    void printNumber()
    {
        cout << a << " " << b << " "
             << "i" << endl;
    }
};

complex::complex(int n1, int n2)
{
    a = n1;
    b = n2;
}

int main()
{

complex r1(3,4);
    // cout<<r1.a<<" "<<r1.b<<" "<<"i"<<endl;
    r1.printNumber();
}