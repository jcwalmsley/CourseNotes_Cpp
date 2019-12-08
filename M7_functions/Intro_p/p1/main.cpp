/*
    "A function that doesn't have any parameters and doesn't
    return a value is the most basic form of C++ function.

    A basic function doesn't return any values and doesn't
    require any parameters.
*/
//-----------------
/*
    A function declaration with this syntax is used for the
    most basic type of function
*/
// Syntax declaration:
/*
void functionName();
*/
//
/*
    A function definition with this syntax is used for the
    most basic type of function
*/
// Syntax definition:
/*
void functionName()
{
     statement(s);
}
*/
//-----------------
//
//  Example declaration:
/*
void printMessage();
*/
//  Example definition:
/*
void printMessage()
{
     std::cout<<"It's time for more C++!";
}
*/
// Example call to function:
/*
int main()
{
     ...
     printMessage(); // the "printMessage" function is called here
     ...
    return 0;
}
*/

/*
    The following program example shows correct location for the printMessage
    function declaration which is above the main() program function and the
    printMessage function definition which is after the end of the
    program main() function when included they are included in the same file
    with the main() function.

    Alternatievely the printMessage declaration and definition could be
    placed in an .h extension file such as a main.hpp file used mainly for
    preprocessing directives.
*/

#include<iostream>

void printMessage(); //declaration above the main() function

int main()
{
    printMessage(); //function call within the main() function
    return 0;
}

void printMessage() //definition below the main() function

{
    std::cout<<"Let's learn C++!";
}
