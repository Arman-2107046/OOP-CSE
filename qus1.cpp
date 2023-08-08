#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    string name;
    int roll;
    int marks[3];

public:
    void set_value(string name1, int roll1, int arr[])
    {
        name = name1;
        roll = roll1;
        for (int i = 0; i < 3; i++)
        {
            marks[i] = arr[i];
        }
    }

    void calcTotal()
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += marks[i];
        }
        cout << "sum is--" << sum << endl;
    }
    void calcAvg()
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += marks[i];
        }
    float avg=(float)sum/3;

    cout<<"average marks is--"<<avg<<endl;

    }


};

int main()
{
    Student s1;
    int arr[]={90,80,70};
    s1.set_value("arman",101,arr);

    s1.calcTotal();
    s1.calcAvg();
}