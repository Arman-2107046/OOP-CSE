#include <bits/stdc++.h>
using namespace std;

class largeNo

{
private:
    /* data */
    int m,n;

public:
  void input();
  void display();
  int largest();
};

void largeNo::input()
{
    cout<<"enter m n--"<<endl;
    cin>>m>>n;
}
int largeNo:: largest()
{
    return max(m,n);
}

void largeNo::display()
{
cout<<"largest value--"<<largest()<<endl;
}

int main()
{
    largeNo a;
    a.input();
    a.display();
    return 0;
}