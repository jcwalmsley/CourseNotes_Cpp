/*
    We can overload operators in C++. This is useful when using user defined objects.

    In the example below we will use operators to overload the '+' sign.

    Let's look at the example in detail.
    You can see in the code below, the function must specify a return type. Then it must use the keyword 'operator' followed by the '+' sign.

          //The function that overloads the '+' sign
          int operator + (Shape shapeIn)
          {
              return Area() + shapeIn.Area();
          }
    To use the overloaded '+' sign, we just have to use it with our user defined objects.

    For example:

     int total = sh1 + sh2;
    In this case the '+' will add the areas of the two shapes.
*/
#include <iostream>

using namespace std;

class Shape
{
    private:
      int length;     // Length of a box
      int width;

    public:
      // Constructor definition
      Shape(int l = 2, int w = 2)
      {
         length = l;
         width = w;
      }

      double Area()
      {
         return length * width;
      }

      int operator + (Shape shapeIn)
      {
          return Area() + shapeIn.Area();
      }
};

int main(void)
{
   Shape sh1(4, 4);    // Declare shape1
   Shape sh2(2, 6);    // Declare shape2

   int total = sh1 + sh2;
   cout << "\nsh1.Area() = " << sh1.Area();
   cout << "\nsh2.Area() = " << sh2.Area();
   cout << "\nTotal = "<<total;
   return 0;
}
