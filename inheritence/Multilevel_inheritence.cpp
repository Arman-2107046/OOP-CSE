#include <iostream>
using namespace std;

class student
{
    protected:
    int roll;

    public:
    void setRoll(int a)
    {
        roll=a;
    }
    void showRoll()
    {
        cout<<"roll is : "<<roll<<endl;
    }

};

class test : public student
{
protected:
float sub1;
float sub2;
public:

void getMark(float a,float b)
{
    sub1=a;
    sub2=b;
}
void showMark()
{
    cout<<"mark of sub1 : "<<sub1<<"\nmark of sub2 : "<<sub2<<endl;
}
};

class result: public test
{
    private:
    float total;

    public:
    void display()
    {
        total=sub1+sub2;
        showRoll();
        showMark();
        cout<<"total mark is : "<<total<<endl;
    }
};


int main()
{
    result st1;
    st1.setRoll(12);
    st1.getMark(80,90);

    st1.display();
}