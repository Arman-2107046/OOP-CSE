#include <iostream>
using namespace std;

class loc
{
    int longitude, latitude;

public:
    loc() {} // needed to construct temporaries
    loc(int lg, int lt)
    {
        longitude = lg;
        latitude = lt;
    }
    void show()
    {
        cout << longitude << " ";
        cout << latitude << "\n";
    }

    // Friend function declarations
    friend loc operator+(loc &op1, loc &op2);
    friend loc operator-(loc &op1, loc &op2);
    friend loc operator++(loc &op);
    // friend loc operator=(loc &op1, loc &op2);
};

// Friend function definitions
loc operator+(loc &op1, loc &op2)
{
    loc temp;
    temp.longitude = op1.longitude + op2.longitude;
    temp.latitude = op1.latitude + op2.latitude;
    return temp;
}

loc operator-(loc &op1, loc &op2)
{
    loc temp;
    temp.longitude = op1.longitude - op2.longitude;
    temp.latitude = op1.latitude - op2.latitude;
    return temp;
}

loc operator++(loc &op)
{
    op.longitude++;
    op.latitude++;
    return op;
}

// loc operator=(loc &op1, loc &op2)
// {
//     op1.longitude = op2.longitude;
//     op1.latitude = op2.latitude;
//     return op1;
// }

int main()
{
    loc ob1(10, 20), ob2(5, 30), ob3(90, 90);
    ob1.show();
    ob2.show();
    ++ob1;
    ob1.show(); // displays 11 21
    ob2 = ++ob1;
    ob1.show();      // displays 12 22
    ob2.show();      // displays 12 22
    // // ob1 = ob2 = ob3; // multiple assignment
    // ob1.show();      // displays 90 90
    // ob2.show();      // displays 90 90
    return 0;
}
