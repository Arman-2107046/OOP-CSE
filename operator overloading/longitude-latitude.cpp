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
    friend loc operator+(loc &l1, loc &l2);
    friend loc operator-(loc &l1, loc &l2);
    // friend loc& operator=(loc &l1, loc &l2);
    friend loc operator++(loc &l1);
};
// Overload + for loc.
loc operator+(loc &l1, loc &l2)
{
    loc temp;
    temp.longitude = l1.longitude + l2.longitude;
    temp.latitude = l1.latitude + l2.latitude;
    return temp;
}
// Overload - for loc.
loc operator-(loc &l1, loc &l2)
{
    loc temp;
    // notice order of operands
    temp.longitude = l1.longitude - l2.longitude;
    temp.latitude = l1.latitude - l2.latitude;
    return temp;
}
// Overload asignment for loc.
// loc& operator=(loc &l1, loc &l2)
// {
//     l1.longitude = l2.longitude;
//     l1.latitude = l2.latitude;
//     return l1; // i.e., return object that generated call
// }
// Overload prefix ++ for loc.
loc operator++(loc &l1)
{
    loc temp;
    temp.longitude = l1.longitude++;
    temp.latitude = l1.latitude++;
    return temp;
}
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
    // ob1 = ob2 = ob3; // multiple assignment
    ob1.show();      // displays 90 90
    ob2.show();      // displays 90 90
    return 0;
}

// without using friend functions

// #include <iostream>
// using namespace std;
// class loc
// {
//     int longitude, latitude;

// public:
//     loc() {} // needed to construct temporaries
//     loc(int lg, int lt)
//     {
//         longitude = lg;
//         latitude = lt;
//     }
//     void show()
//     {
//         cout << longitude << " ";
//         cout << latitude << "\n";
//     }
//     loc operator+(loc op2);
//     loc operator-(loc op2);
//     loc operator=(loc op2);
//     loc operator++();
// };
// // Overload + for loc.
// loc loc::operator+(loc op2)
// {
//     // loc temp;
//     longitude = op2.longitude + longitude;
//     latitude = op2.latitude + latitude;
//     return *this;
// }
// // Overload - for loc.
// loc loc::operator-(loc op2)
// {
//     loc temp;
//     // notice order of operands
//     temp.longitude = longitude - op2.longitude;
//     temp.latitude = latitude - op2.latitude;
//     return temp;
// }
// // Overload asignment for loc
// loc loc::operator=(loc op2)
// {
//     longitude = op2.longitude;
//     latitude = op2.latitude;
//     return *this; // i.e., return object that generated call
// }
// // Overload prefix ++ for loc.
// loc loc::operator++()
// {
//     longitude++;
//     latitude++;
//     return *this;
// }
// int main()
// {
//     loc ob1(10, 20), ob2(5, 30), ob3(90, 90);
//     ob1.show();
//     ob2.show();
//     ++ob1;
//     ob1.show(); // displays 11 21
//     ob2 = ++ob1;
//     ob1.show();      // displays 12 22
//     ob2.show();      // displays 12 22
//     ob1 = ob2 = ob3; // multiple assignment
//     ob1.show();      // displays 90 90
//     ob2.show();      // displays 90 90
//     return 0;
// }