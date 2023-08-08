#include <bits/stdc++.h>
using namespace std; // swapping private data of classes using friend function

class class_2;

class class_1
{
    int value1;

public:
    void inData(int a)
    {
        value1 = a;
    }
    void display()
    {
        cout << value1 << endl;
    }

    friend void exchange(class_1 &, class_2 &);
};

class class_2
{
    int value2;

public:
    void inData(int a)
    {
        value2 = a;
    }
    void display()
    {
        cout << value2 << endl;
    }
    friend void exchange(class_1 &, class_2 &);
};

void exchange(class_1 &x, class_2 &y)
{
    swap(x.value1, y.value2);
}

int main()
{

    class_1 p;
    p.inData(20);

    class_2 q;
    q.inData(30);
    cout << "before swapping--" << endl;
    cout << "value1 is--";
    p.display();
    cout << "value2 is--";
    q.display();

cout<<endl;
    exchange(p, q);

    cout << "after swapping--" << endl;
    cout << "value1 is--";
    p.display();
    cout << "value2 is--";
    q.display();

    return 0;
}
