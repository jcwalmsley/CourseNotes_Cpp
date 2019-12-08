/*
    Practice writing functions

    Write a program that includes a function called printProduct
    that takes 2 parameters as 2 integers n1, n2, and prints the
    message:

    "n1 * n2 = product"

    Name the function printProduct and write its function declaration
    and function definition.

    example of output:
    3 * 7 = 21
*/
//
#include <iostream>

void printProduct(int n1, int n2, int product);

int main()
{
    int n1 = 3;
    int n2 = 6;
    int product;

    product = n1 * n2;

    printProduct(n1, n2, product);

    return 0;
}
void printProduct(int n1, int n2, int product)
{
    std::cout<<n1<< " * " <<n2<< " = " <<product;
}
