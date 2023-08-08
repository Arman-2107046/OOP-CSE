#include <bits/stdc++.h>
using namespace std;//static variable

class Dummy

{
private:
    /* data */
public:

static int n;

    Dummy()
    {
        n++;
        cout<<"cons is called"<<endl;
    }
    ~Dummy()
    {
        n--;
        cout<<"des is called"<<endl;
    }
};

int Dummy::n=0;

int main()
{
Dummy a;
Dummy b[5];

Dummy *c=new Dummy;
cout<<a.n<<endl;
delete c;
cout<<Dummy::n<<endl;
delete b;
cout<<Dummy::n<<endl;
return 0;
}
