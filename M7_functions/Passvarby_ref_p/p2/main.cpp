/*Now write a program that uses passing variables by reference.

Write a program that uses two functions:

calculate(input1, input2, operation, result);
printEquation(input1, input2, operation, result);
Input, input2, and result are floats.
Operation is a char. The choices are '+', '-', '*', '/'
The result is modified by the function called calculate.

main.cpp
main.hpp
*/
//
/*Goal: Use 'pass by reference' to a function
**to write this program.
**There are two functions that you need to write
**for this program:
**calculate(input1, input2, operation, result);
**printEquation(input1, input2, operation, result);
**Pass by reference any value that is modified
**in the function.
**
**Put the declaration and the definitions of the
**functions in the header file.
*/

#include "main.hpp"

/*
int main()
{
    char operation = '+';'-';'*';'/';
    float input1 = 9.8;
    float input2 = 2.3;
    float result;


    calculate(input1, input2, operation, answer);
    printEquation(input1, input2, operation, result);

    return 0;
}
*/
int main()
{
    char operation = '/';
    float input1 = 4.1;
    float input2 = 7.2;
    float result;

    calculate(input1, input2, operation, result);
    printEquation(input1, input2, operation, result);
    return 0;
}
