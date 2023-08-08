#include <iostream>

class IntPair
{
public:
    int first;
    int second;


    // IntPair() : first(0), second(0) {}

    void set(int firstValue, int secondValue)
    {
        first = firstValue;
        second = secondValue;
    }

    void print()
    {
        std::cout << "First integer: " << first << std::endl;
        std::cout << "Second integer: " << second << std::endl;
    }
};

int main()
{
    IntPair p1;
    p1.set(1, 1); // set p1 values to (1, 1)

    IntPair p2 {2, 2}; // initialize p2 values to (2, 2)//
// use set value

    p1.print();
    p2.print();

    return 0;
}
