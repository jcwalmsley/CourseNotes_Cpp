/*
    Given a function printProduct().

    Write the function declaration and definition.

    The function has two parameters; n1 & n2.

    It prints the message:
    "n1 * n2 = product"

    And returns:
    3 * 8 = 24
*/
//
#include <iostream>

int printProduct(int n1, int n2, int product);

int main()
{
    int n1 = 3;
    int n2 = 8;
    int product;

    product = n1 * n2;

    printProduct(n1, n2, product);

    return 0;
}

int printProduct(int n1, int n2, int product)
{
    std::cout<<n1<< " * " <<n2<< " = " <<product<<;
}
  
