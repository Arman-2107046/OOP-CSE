#include <bits/stdc++.h>
using namespace std; // dynamic initialization of constructors//

class Fixed_deposit
{
private:
    long int p_amount;
    int years;
    float rate;
    float r_value;

public:
    Fixed_deposit() {}

    // Fixed_deposit(long int p, int y, float R);

    Fixed_deposit(long int p, int y, int r);

    void display();
};

// Fixed_deposit::Fixed_deposit(long int p, int y, float R)
// {
//     p_amount = p;
//     years = y;
//     rate = R;
//     r_value = (float)p_amount;

//     // for (int i = 1; i <= years; i++)
//     // {
//     //     r_value *= (1.0 + R);
//     // }

//     r_value=p_amount*pow(1.0+R,y);
// }

Fixed_deposit::Fixed_deposit(long int p, int y, int r)
{
    p_amount = p;
    years = y;
    r_value = p_amount;

    for (int i = 1; i <=years; i++)
    {
        r_value *= (1.0 + (float)r/ 100.0);
    }
}
void Fixed_deposit::display()
{
    cout << "principal amount--" << p_amount << "\nreturn value--" << r_value << endl;
}

int main()
{
    Fixed_deposit fd1, fd2, fd3;
    long int p;
    int y;
    int r;
    int R;

    cout<<"enter everything--(r in percent--)"<<endl;
    cin>>p>>y>>r;
    fd1=Fixed_deposit(p,y,r);

    // cout<<"enter everything--(R in float--)"<<endl;
    // cin>>p>>y>>R;
    // fd2=Fixed_deposit(p,y,R);
    
    // cout<<"enter everything--"<<endl;
    // cin>>p>>y;
    // fd3=Fixed_deposit(p,y);

    fd1.display();
    // fd2.display();
    // fd3.display();
}
