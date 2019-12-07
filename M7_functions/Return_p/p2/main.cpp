/*
    For this program, write two functions:

    void printEquation(int n1, int n2, int sum, char operation);
    int sum(int n1, int n2);
*/
//
void printEquation(int n1, int n2, int sum, char operation)
{
     print the equation 'n1 operation  n2 = result'
}
//
int sum(int n1, int n2)
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
    int n1 = 31;
    int n2 = 26;
    int total = sum(n1, n2);

    printEquation(n1, n2, total,'+');

    return 0;
}
  
