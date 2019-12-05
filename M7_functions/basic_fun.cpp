/*
    "The most basic function is one that accepts no parameters and does not return a value.

The syntax for the declaration of this type of function is:

void functionName();
The syntax for the definition is:

void functionName()
{
     statement(s);
}
An example of the function declaration and definition:

The declaration:

void printMessage();
The definition:

void printMessage()
{
     std::cout<<"Call your mother!";
}

To call the function:

int main()
{
     ...
     printMessage();
     ...
    return 0;
}
*/

/*
    Goal: practice functions that do not return
    **a value and do not accept parameters
*/

#include<iostream>

void printMessage(); //note, this is placed BEFORE main()

int main()
{
    printMessage();
    return 0;
}

//note, the definition is conventionally placed after main
void printMessage()
{
    std::cout<<"HEY! I'm from a function!";
}
 
