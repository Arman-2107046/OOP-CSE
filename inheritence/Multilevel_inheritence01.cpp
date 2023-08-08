// home task
#include <bits/stdc++.h>
using namespace std;

class building
{
protected:
    int no_of_floor;
    int no_of_rooms;
    float total_sqfoot;

public:
    void setBuilding(int a,int b,float c)
    {
        no_of_floor=a;
        no_of_rooms=b;
        total_sqfoot=c;
    }
    void showBuilding()
    {
        cout<<"floor no : "<<no_of_floor<<"\nroom no : "<<no_of_rooms<<"\ntotal area : "<<total_sqfoot<<endl;
    }
};

class house : public building
{
protected:
int no_of_bedroom;
int no_of_washroom;

public:
 void setHouse(int a,int b)
 {
    no_of_bedroom=a;
    no_of_washroom=b;
 }

void showHouse()
{
    cout<<"no of bedroom : "<<no_of_bedroom<<"\nno of washroom : "<<no_of_washroom<<endl;
}
};

class office: public house
{
 protected:
 int no_of_fireExt;
 int no_of_telephone;
 public:

 void setOffice(int a,int b)
 {
    no_of_fireExt=a;
    no_of_telephone=b;
 }


 void display()
 {
    cout<<"no of fire extinguisher : "<<no_of_fireExt<<"\nno of telephone : "<<no_of_telephone<<endl;
 }

};

int main()
{
office f1;

f1.setBuilding(80,20,1500);
f1.setHouse(4,2);
f1.setOffice(20,15);

f1.showBuilding();
f1.showHouse();
f1.display();

return 0;
}