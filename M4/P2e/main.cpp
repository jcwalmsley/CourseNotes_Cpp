/*
    Additional examples with explanations:
*/
#include <iostream>

int main()
{
    int i = 2;
    switch (i)
    {
        case 1: std::cout << "1";
        case 2: std::cout << "2";   //execution starts at this case label
        case 3: std::cout << "3";
        case 4:
        case 5: std::cout << "45";
                break;              //execution of subsequent statements is terminated
        case 6: std::cout << "6";
    }

    std::cout << '\n';

    switch (i)
    {
        case 4: std::cout << "a";
        default: std::cout << "d"; //there are no applicable constant_expressions
                                   //therefore default is executed
    }

    std::cout << '\n';

    switch (i)
    {
        case 4: std::cout << "a";  //nothing is executed
    }

    /*
        when enumerations are used in a switch statement, many compilers
        issue warnings if one of the enumerators is not handled
    */

    enum color {RED, GREEN, BLUE};
    switch(RED)
    {
        case RED:   std::cout << "red\n"; break;
        case GREEN: std::cout << "green\n"; break;
        case BLUE:  std::cout << "blue\n"; break;
    }
    //
    /*
        the C++17 init-statement syntax can be helpful when there is
        no implicit conversion to integral or enumeration type
    */
    /
    switch (Device dev = get_device(); dev.state()) // Error: Device & dev not declared
    {
        case SLEEP: /.../ break;
        case READY: /.../ break;
        case BAD: /.../ break;
    }
    /
    /*
        pathological examples, the statement doesn't have to
        be a compound statement
    */
    /*
    switch(0)
    {
        std::cout << "this does nothing\n";
    }
    */
    // labels don't require a compound statement either
    switch(int n = 1)
    {
        case 0:
        case 1: std::cout << n << '\n';
    }
    // Duff's Device: http://en.wikipedia.org/wiki/Duff's_device
}

/* Output:
    2345
    d
    red
    1
*/
