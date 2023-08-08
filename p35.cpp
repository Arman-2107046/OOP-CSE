#include <iostream>
using namespace std;

class NumberPair
{
private:
    int number1;
    int number2;

public:
    // Parameterized constructor
    NumberPair(int num1, int num2)
    {
        number1 = num1;
        number2 = num2;
    }

    // Method to display the numbers
    void displayNumbers()
    {
        cout << "Number 1: " << number1 << endl;
        cout << "Number 2: " << number2 << endl;
    }
};

int main()
{
    // Create an object of NumberPair and pass two numbers as arguments
    NumberPair pair(10, 20);

    // Display the numbers using the displayNumbers() method
    pair.displayNumbers();

    return 0;
}
