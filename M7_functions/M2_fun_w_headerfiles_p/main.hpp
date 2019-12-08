#include <iostream>

//function declaration: including declarations in .hpp is optional
void printProduct(int m1, int m2, int product);
//-----------------

//function definition:
void printProduct(int m1, int m2, int product)
{
    std::cout << m1 <<"*"<< m2 <<" = "<<product << " \n";
}
