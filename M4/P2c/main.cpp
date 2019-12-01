/*
    Examples of potential problems with default statement formatting:

    "Because transfer of control is not permitted to enter the
    scope of a variable, if a declaration statement is encountered
    inside the statement, it has to be scoped in its own compound
    statement:"
    from https://en.cppreference.com/w/cpp/language/switch
*/

#include <iostream>

int main()
{
    switch(1)
    {
        case 1: int x = 0; // initialization
        std::cout << x << '\n';
        break;
        default: // compilation error: jump to default: would enter\
        the scope of 'x'
        // without initializing it
        std::cout << "default\n";
        break;
    }
    switch(1)
    {
        case 1: {  int x = 0;
        std::cout << x << '\n';
        break;
    } // scope of 'x' ends here
    default: std::cout << "default\n"; // no error
    break;
}
*/
