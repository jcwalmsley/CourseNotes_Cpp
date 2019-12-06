/*I have called a function named printProduct in the following program.

The function printProgram accepts m1, m2, product as inputs.

It prints the message:

"m1 * m2 = product"
using the variable values.

Write the declaration and definition of the function.

The output should look something like this:

4 * 5 = 20
*/
/*GOAL: Practice writing functions

/*Write a function called printProduct that prints the results of the multiplication
**of two integers.
*/
#include <iostream>

int printProduct(int m1, int m2, int product);

int main()
{
    int m1 = 4;
    int m2 = 5;
    int product;

    product = m1 * m2;

    printProduct(m1, m2, product);

    return 0;
}

int printProduct(int m1, int m2, int product)
{
    std::cout<<m1<< " * " <<m2<< " = " <<product<<"\n";
}
  
