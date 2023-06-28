#include <iostream>
#include <vector>
using namespace std;

template <typename... Rest>
void print(const Rest... rest)
{
    // save
    auto param = {rest...};
    // print
    for (const auto p : param)
    {
        for (auto i : p)
            std::cout << i << std::endl;
    }
}

template <typename... T>
void add(const T &...x)
{

    auto params = {x...};
    for (auto i : params)
        cout << i << endl;
}

int main()
{

    vector<int> v1(2, 2);
    vector<int> v2(3, 3);
    print(v2, v1, v2, v1);

    add(1, 2, 3, 4);
}