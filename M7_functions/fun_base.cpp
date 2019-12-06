/*
    "A function that doesn't have any parameters and doesn't
    return a value is the most basic form of C++ function.
*/

//  The syntax to declare this type of basic C++ function is:
void functionName();

//  The syntax to define this type of basic C++ function is:
void functionName()
{
     statement(s);
}

// Function declaration and definition example:

//  declaration:
void printMessage();

//  definition:
void printMessage()
{
     std::cout<<"It's time for more C++!";
}

// Calling the function:

int main()
{
     ...
     printMessage(); // this is where the function "printMessage" is called
     ...
    return 0;
}
*/

/*
    Example given below of the function declaration of the
    "printMessage" function followed by the call of the function
    "printMessage" within the main() function and the function
    definition of "printMessage" following the end of the main
    function.
*/

#include<iostream>

void printMessage(); //declaration located before the main() function

int main()
{
    printMessage(); //call to function within the main() function
    return 0;
}

void printMessage() //definition locate after the main() function

{
    std::cout<<"It's time for more C++!";
}
 
