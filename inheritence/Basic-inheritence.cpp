#include <bits/stdc++.h>
using namespace std;

class Human
{
    // private:
public:
    int height;
    int weight;
    int age;

    // public
    // int getAge()
    // {
    //     return this->age;
    // }
    // int getHeight()
    // {
    //     return this->height;
    // }
    // int getWeight()
    // {
    //     return this->weight;
    // }
    int setWeight(int w)
    {
        this->weight = w;
    }
    int setHeight(int w)
    {
        this->height = w;
    }
    int setAge(int w)
    {
        this->age = w;
    }
};

class Male : public Human
{
public:
    void sleep()
    {
        cout << "male is sleeping" << endl;
    }
};

int main()
{

    Male object1;
    // object1.setAge(100);
    // object1.setHeight(18);
    // object1.setWeight(80);

    // cout<<"age : "<<object1.getAge()<<endl;
    // cout<<"height : "<<object1.getHeight()<<endl;
    // cout<<"weight : "<<object1.getWeight()<<endl;

    cout << object1.age << endl;

    object1.sleep();
}