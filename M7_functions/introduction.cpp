/*
    Functions are a component of C++ programs
    The most common function in C++ is the main() function which is the only
    function that doesn't require a function declaration therefore it is a special
    function in C++.

    A function delcaration describes how to call a given function.

    A function definition describes what the function will do when called.

    C++ functions are able to, but not required to:
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
/*
    For example:
    This function has no parameters or return values.
    When called, it outputs the string statement "Hello World!"
    to the console.
*/
//
void printValues()
{
    std::cout<<"Hello World!";
}
// Output:
"Hello World!"

//-----------------
//  Syntax, declarations: note declarations end with semi-colons.

//  Example:
returnVariableType  functionName(parameter1, parameter2, ...,parameterN);

//-----------------
/*
    Calling functions:

    Call a functions with the function name, including any parameters specified in the
    declaration and definition in parenthesis separated by commas.
*/
//  Example:
//
int main()
{
     ...
     functionName(parameter1, parameter2, ..., parameterN);
     ...
}
