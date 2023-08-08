// #include <bits/stdc++.h>
// using namespace std;//unary operator overloading

// class Distance
// {
// private:
//     int feet;
//     int inches;

// public:
// Distance()
// {

// }

// Distance(int a,int b)
// {
//     feet=a;
//     inches=b;
// }

// void display()
// {
//     cout<<"feet : "<<feet<<"\ninches : "<<inches<<endl;
// }

// Distance operator -()
// {
//     feet=-feet;
//     inches=-inches;
// }
// };


// int main()
// {
//     Distance d1(10,8),d2(12,10);

//     -d1;
//     d1.display();

//     -d2;
//     d2.display();
// }


//using friend function
#include <bits/stdc++.h>
using namespace std;//unary operator overloading

class Distance
{
private:
    int feet;
    int inches;

public:
Distance()
{

}

Distance(int a,int b)
{
    feet=a;
    inches=b;
}

void display()
{
    cout<<"feet : "<<feet<<"\ninches : "<<inches<<endl;
}

friend Distance operator -(Distance & d);
// {
//     feet=-feet;
//     inches=-inches;
// }
};

Distance operator -(Distance & d)
{
    d.feet=-d.feet;
    d.inches=-d.inches;
    return d;
}


int main()
{
    Distance d1(10,8),d2(12,10);

    -d1;
    d1.display();

    -d2;
    d2.display();
}