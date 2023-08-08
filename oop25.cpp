#include <iostream>
using namespace std;//calling privatre member function

class Rectangle {
private:
    int length;
    int width;

    int calculateArea() {
        return length * width;
    }

public:
    void setDimensions(int len, int wid) {
        length = len;
        width = wid;
    }

    void displayProperties() {
        cout << "Length: " << length << " units" << endl;
        cout << "Width: " << width << " units" << endl;
        cout << "Area: " << calculateArea() << " square units" << endl;
    }
};

int main() {
    Rectangle rect;
    rect.setDimensions(5, 8);
    rect.displayProperties();
    return 0;
}
