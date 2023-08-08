// #include <iostream>
// using namespace std; // binary operator overloading
// class Box
// {
//     double length;  // Length of a box
//     double breadth; // Breadth of a box
//     double height;  // Height of a box
// public:
//     Box(double x, double y, double z)
//     {
//         length = x;
//         breadth = y;
//         height = z;
//     }
//     Box()
//     {
//         length = 0;
//         breadth = 0;
//         height = 0;
//     }
//     double getVolume(void)
//     {
//         return length * breadth * height;
//     }

//     Box operator+(Box b)
//     {
//         Box box;
//         box.length = this->length + b.length;
//         box.breadth = this->breadth + b.breadth;
//         box.height = this->height + b.height;

//         return box;
//     }
// };

// // Main function for the program
// int main()
// {

//     Box b1(1.0, 3.0, 5.0);
//     Box b2(2.0, 4.0, 6.0);
//     Box box3;
//     box3 = b1 + b2;

//     cout << "volume : " << box3.getVolume() << endl;
//     return 0;
// }

#include <iostream>
using namespace std; // binary operator overloading using friend function
class Box
{
    double length;  // Length of a box
    double breadth; // Breadth of a box
    double height;  // Height of a box
public:
    Box(double x, double y, double z)
    {
        length = x;
        breadth = y;
        height = z;
    }
    Box()
    {
        length = 0;
        breadth = 0;
        height = 0;
    }
    double getVolume(void)
    {
        return length * breadth * height;
    }

    friend Box operator+(Box &b1, Box &b2);
    // {
    //     Box box;
    //     box.length = this->length + b.length;
    //     box.breadth = this->breadth + b.breadth;
    //     box.height = this->height + b.height;

    //     return box;
    // }
};

Box operator+(Box &b1, Box &b2)
{
    Box box;
    box.length = b1.length + b2.length;
    box.breadth = b1.breadth + b2.breadth;
    box.height = b1.height + b2.height;

    return box;
}

// Main function for the program
int main()
{

    Box b1(1.0, 3.0, 5.0);
    Box b2(2.0, 4.0, 6.0);
    Box box3;
    box3 = b1 + b2;

    cout << "volume : " << box3.getVolume() << endl;
    return 0;
}
