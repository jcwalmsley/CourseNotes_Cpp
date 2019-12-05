/*
    For this program, write two functions:

    void printEquation(int m1, int m2, int sum, char operation);
    int sum(int m1, int m2);
*/
//
void printEquation(int m1, int m2, int sum, char operation)
{
     print the equation 'm1 operation  m2 = result'
}
//
int sum(int m1, int m2)
{
     add two integers and return the sum
}
//
/*
    Put the declarations and definitions of the functions in the header
    file. Don't forget to add the include files to the main.hpp file.

    main.cpp
    main.hpp
*/
//
/*
    Goal: practice writing functions with parameters and return values.
*/
//
#include "main.hpp"

int main()
{
    int m1 = 27;
    int m2 = 84;
    int total = sum(m1, m2);

    printEquation(m1, m2, total,'+');

    return 0;
}
  
