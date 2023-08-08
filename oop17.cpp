#include <bits/stdc++.h>
using namespace std; // destructor

class Line
{
private:
    double length;

public:
    Line(/* args */);
    ~Line();
    void set_length(double len)
{
    length=len;
}
double get_length()
{
    return length;
}
};

Line::Line(/* args */)
{
    cout<<"object is being created"<<endl;
}

Line::~Line()
{
    cout<<"object is being deleted"<<endl;
}

int main()
{
Line l1;
l1.set_length(6.0);
cout<<"length of line--"<<l1.get_length()<<endl;



}