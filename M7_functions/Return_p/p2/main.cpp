//  Given the 2 function declarations below:

void printEquation(int n1, int n2, int sum, char operation);
//&
int sum(int n1, int n2);
//
//  and the following 2 function definitions
void printEquation(int n1, int n2, int sum, char operation)
{
     print the equation 'n1 operation  n2 = result'
}
//
int sum(int n1, int n2)
{
     add two integers and return the sum
}
/*  create a main.hpp file and move the 2 function declarations
    and definitions into this new main.hpp file.

    Insert; #include "main.hpp", in main.cpp as shown below.

    main.cpp
    main.hpp
*/
//
#include "main.hpp"

int main()
{
    int n1 = 31;
    int n2 = 26;
    int total = sum(n1, n2);

    printEquation(n1, n2, total,'+');

    return 0;
}
  
