#include <iostream>
#include <cstring> // For string functions
using namespace std;

class String
{
private:
    char str[100]; // Assuming a fixed maximum length for simplicity

public:
    String(const char *s)
    {
        strcpy(str, s);
    }

    // Friend function declaration for operator overloading
    friend bool operator==(const String &s1, const String &s2);

    void display() const
    {
        cout << str << endl;
    }
};

bool operator==(const String &s1, const String &s2)
{
    return (strcmp(s1.str, s2.str) == 0);
}

int main()
{
    String str1("Hello");
    String str2("Hello");
    String str3("World");

    cout << "String 1: ";
    str1.display();
    cout << "String 2: ";
    str2.display();
    cout << "String 3: ";
    str3.display();

    if (str1 == str2)
    {
        cout << "String 1 and String 2 are equal." << endl;
    }
    else
    {
        cout << "String 1 and String 2 are not equal." << endl;
    }

    if (str1 == str3)
    {
        cout << "String 1 and String 3 are equal." << endl;
    }
    else
    {
        cout << "String 1 and String 3 are not equal." << endl;
    }

    return 0;
}
