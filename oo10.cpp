#include <iostream>
#include <cmath>
using namespace std;

class Polar; // Forward declaration

class Rectangle
{
private:
    float x;
    float y;

public:
    Rectangle(float xVal, float yVal)
    {
        x = xVal;
        y = yVal;
    }

    void display() const
    {
        cout << "Rectangle Coordinate: (" << x << ", " << y << ")" << endl;
    }

    // Friend function declaration for conversion
    friend Rectangle polarToRectangle(Polar &p);
        friend Polar rectangleToPolar(Rectangle &r);

};

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

    void display()
    {
        cout << "Polar Coordinate: (r=" << r << ", theta=" << theta << ")" << endl;
    }

    // Friend function declaration for conversion
    friend Polar rectangleToPolar(Rectangle &r);
        friend Rectangle polarToRectangle(Polar &p);

};

// Conversion function from Polar to Rectangle
Rectangle polarToRectangle(Polar &p)
{
    float x1 = p.r * cos(p.theta);
    float y1 = p.r * sin(p.theta);
    return Rectangle(x1,y1);
}

// Conversion function from Rectangle to Polar
Polar rectangleToPolar(Rectangle &r)
{

    float r1 = sqrt(r.x * r.x + r.y * r.y);
    float theta1= atan2(r.y, r.x);
    return Polar(r1,theta1);
}

int main()
{
    Polar polarPoint(5.0, 0.785); // r=5, theta=45 degrees
    polarPoint.display();

    Rectangle rectPoint = polarToRectangle(polarPoint);
    rectPoint.display();

    Polar newPolarPoint = rectangleToPolar(rectPoint);
    newPolarPoint.display();

    return 0;
}
