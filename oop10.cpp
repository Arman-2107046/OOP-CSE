#include <bits/stdc++.h>
using namespace std;
class class1
{
int m,n;
public:
class1()
{
    m=0;
    n=0;
}

class1(int a,int b)
{
    m=a;
    n=b;
}

void display()
{
    cout<<m<<" "<<n<<endl;
}

};
int main()
{
class1 obj1(10,20);
obj1.display();
// obj2=obj1;
class1 obj2(obj1);
obj2.display();



}