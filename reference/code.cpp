
#include <iostream>

using namespace std;

int fn(int a)
{
    return a;
}

int &fn_reference(int &a)
{
    return a;
}

int main()
{

    int a = 10;
    int &b = a;

    cout << &a << " " << &b << endl;

    int c = fn(a);
    cout << &c << endl;

    int &d = fn_reference(a);
    cout << &d << endl;

    return 0;
}