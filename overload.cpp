#include <iostream>

using namespace std;

void print(string a)
{
    cout << "\tprint string" << a << endl;
}

void print(int a)
{
    cout << "\tprint integer" << a << endl;
}

// example of operator overload

class MagicString
{

public:
    string x;

public:
    MagicString(string x)
    {
        MagicString::x = x;
    }

    // overload func inside class
    // MagicString operator+(const MagicString &x)
    // {
    //     return MagicString("I dont care what plus means for two strings");
    // }
};

// oveload outside class
MagicString operator+(const MagicString &x, const MagicString &y)
{
    return MagicString("I dont care what plus means for two strings");
}

int main()
{
    int a = 10;
    print(a);

    string b = "whatever";
    print(b);

    print((MagicString("abc") + MagicString("def")).x);

    return 0;
}
