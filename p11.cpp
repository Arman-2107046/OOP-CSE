#include <bits/stdc++.h>
using namespace std;
int count;
class class1
{
int m,*n;
public:
class1()
{
    m=0;
    n=new int;
    *n=0;
int count;

    count=count+1;
}

class1(int a,int b)
{
    m=a;
    // n=b;
n=new int;
*n=b;
}

~class1()
{
int count;
    cout<<"obj has been destructed"<<count<<endl;
}
void update()
{
    m=m+1;
    *n=*n+1;
}

class1 (class1 & obj)
{
    m=obj.m;
    n=new int;
    *n=*(obj.n);
}
void display()
{
    cout<<m<<" "<<n<<endl;
}

};
int main()
{
// class1 obj1(10,20);
// obj1.display();

// class1 obj2(obj1);
// obj2.display();

// obj1.update();
// obj1.display();

// obj2.display();

class1 o1,o2,o3;


}