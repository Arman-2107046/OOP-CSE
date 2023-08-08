#include<bits/stdc++.h>
using namespace std;//array of class

class employee
{
private:
char name[30];
float age;

public:
void getData();
void putData();

};

void employee ::getData()
{
    cout<<"enter name--"<<endl;
    cin>>name;
    cout<<"enter age--"<<endl;
    cin>>age;
}

void employee:: putData()
{
    cout<<"name is--"<<name<<endl;
    cout<<"age is--"<<age<<endl;
    cout<<endl;
}

const int size=3;

int main()
{
employee manager[size];

for(int i=0;i<size;i++)
{
    cout<<"enter details of manager--"<<i+1<<endl;
    manager[i].getData();
}

cout<<endl;

for(int i=0;i<size;i++)
{
cout<<"Manager--"<<i+1<<endl;
manager[i].putData();

}

return 0;

}