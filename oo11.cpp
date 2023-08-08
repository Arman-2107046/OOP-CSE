#include <iostream>
#include <cmath>
using namespace std;

class Polar
{
private:
    float r;
    float theta;

public:
    Polar(float rVal, float thetaVal)
    {
        r = rVal;
        theta = thetaVal;
    }

    // Friend function declaration for operator overloading
    friend Polar operator+(const Polar &p1, const Polar &p2);

    void display() const
    {
        cout << "Polar Coordinate: (r=" << r << ", theta=" << theta << ")" << endl;
    }
};

// Friend function definition for operator overloading
Polar operator+(const Polar &p1, const Polar &p2)
{
    float x1 = p1.r * cos(p1.theta);
    float y1 = p1.r * sin(p1.theta);

    float x2 = p2.r * cos(p2.theta);
    float y2 = p2.r * sin(p2.theta);

    float xSum = x1 + x2;
    float ySum = y1 + y2;

    float rSum = sqrt(xSum * xSum + ySum * ySum);
    float thetaSum = atan2(ySum, xSum);
   

    return Polar(rSum, thetaSum);
}

int main()
{
    Polar polarPoint1(5.0, 0.785); // r=5, theta=45 degrees
    Polar polarPoint2(3.0, 1.047); // r=3, theta=60 degrees

    polarPoint1.display();
    polarPoint2.display();

    Polar sumPoint = polarPoint1 + polarPoint2;
    sumPoint.display();

    return 0;
}
