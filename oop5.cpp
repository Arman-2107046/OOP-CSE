#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:
    // Constructor
    Complex(int r, int i)
    {
        real = r;
        imaginary = i;
    }

    // Member function to print the complex number
    void printNumber()
    {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main()
{
    // Create a complex number using the constructor
    Complex num(3, 4);

    // Print the complex number
    num.printNumber();

    return 0;
}