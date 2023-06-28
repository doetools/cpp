#include <iostream>

using namespace std;

using std::cout;
using std::endl;

//  note that this returns a reference,like Python

template <typename T>

T &max_whatever(T const &x, T const &y)
{
   T max_value = (x > y) ? x : y;
   T &reference = max_value;
   return reference;
}

int main()
{
   cout << max_whatever<int>(3, 7) << endl;
   cout << max_whatever<string>("who knows what", "I know something") << endl;
   return 0;
}