/*
    Now, it is your turn to try overloading an operator.

    In the program below, overload the '+' operator to perform the following function:

    Add the lengths of the two shapes together
    Add the widths of the two shapes together
    Calculate and return the area of the new shape
    For example: If there are two shapes s1 = 3x4 and s2 = 2x3

    s1 + s2 = s3 where s3 has dimensions (3+2 = 5) *(4 + 3 = 7) = 5 x 7 = 35

    main.cpp
    main.hpp
*/

#include "main.hpp"

int main(void)
{
   Shape sh1(4, 4);    // Declare shape1
   Shape sh2(2, 6);    // Declare shape2
   Shape sh3;          //Declare shape3

   int total = sh1 + sh2;
   cout << "\nsh1.Area() = " << sh1.Area();
   cout << "\nsh2.Area() = " << sh2.Area();
   cout << "\nTotal = "<<total;
   return 0;
}
