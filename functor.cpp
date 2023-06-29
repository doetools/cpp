#include <iostream>
using namespace std;

template <class T>
class Predicate
{

public:
    int a = 1;

    int operator()(T a, T b)
    {
        return a > b;
    }
};

int main()
{
    Predicate<float> p;
    cout << p(1, 2) << endl;
}