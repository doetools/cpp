#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>

using namespace std;

class Box
{
protected:
   int length;  // Length of a box
   int breadth; // Breadth of a box
   int height;  // Height of a box

   mutable int volume = 0;

   // ds
public:
   Box(int length, int breadth, int height)
   {
      Box::
          length = length;
      Box::
          breadth = breadth;
      Box::
          height = height;

      calculateVolume();

   std:
      cout << length << " " << breadth << " " << height << std::endl;
   }

   int getVolume(void);
   void calculateVolume(void) const
   {
      volume = length * breadth * height;
   };
};

// void Box::calculateVolume(void) const
// {
//    volume = length * breadth * height;
// }

int Box::getVolume(void)
{
   return volume;
}

int main()
{

   Box box(1, 2, 3);

   int volume = box.getVolume();

   std::cout << volume << std::endl;

   return 0;
}