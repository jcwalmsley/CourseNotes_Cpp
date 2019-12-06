/*
    Functions are a component of C++ programs
    The most common function in C++ is the main() function which is the only
    function that doesn't require a function declaration therefore it is a special
    function in C++.

    A function delcaration describes how to call a given function.

    A function definition describes what the function will do when called.

    C++ functions are able to, but not required to include:
        accept parameters
        return values
        modify parameters 'when given the method of how to'
*/

//  Syntax of functions:

retVariableType  functionName(parameter1, parameter2, ...,parameterN)
{
     statement(s);
}
//
//  For example:
/*
    The followoign function accepts no parameters and returns no value.
    When it is called in a program, it will execute the statement
*/
//
void printValues()
{
    std::cout<<"Hello World!";
}
// Output:

std::cout<<"Hello World!";

//-----------------
//  Syntax of declarations: note declaration ends with semi-colons.

//  Example:
returnVariableType  functionName(parameter1, parameter2, ...,parameterN);

//-----------------
/*
    Calling functions:

    Call functions with the function name, including any parameters specified in the
    declaration and function definition in parenthesis separated by commas.
*/
//  For example:
//
int main()
{
     ...
     functionName(parameter1, parameter2, ..., parameterN);
     ...
}
