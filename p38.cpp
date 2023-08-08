#include <bits/stdc++.h>
using namespace std; // dynamic construtor

class string
{
    char *name;
    int length;

public:
    string()
    {
        length = 0;
        name=new char[length+1];
    }

    string (char *s)
    {
        length=strlen(s);
    }
    
};
