#include<bits/stdc++.h>
using namespace std;//friend function

class sample
{
private:
int a;
int b;

public:
void set_value()
{
    a=25;
    b=40;
}

friend float mean(sample s);

};

float mean(sample s)
{
    return (s.a+s.b)/2.0;
}

int main()
{
sample xyz;
xyz.set_value();

cout<<"average is--"<<mean(xyz)<<endl;


}