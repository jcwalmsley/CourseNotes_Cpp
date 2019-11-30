/*
    Example 2 switch statements


*/
#include <iostream>

int main()
{
    char begin; // type declaration of variableName
    std::cout<<"\n\nWhere do you want to begin?\n";
    std::cout<<"B. At the beginning?\nM. At the middle?";
    std::cout<<"\nE. At the end?\n\n";

    begin = 'M'; // user provided input

    switch(begin)
    {
        case('B'): std::cout<<"Once upon a time there was a wolf.\n";
        case('M'): std::cout<<"The wolf hurt his leg.\n";
        case('E'): std::cout<<"The wolf lived happily everafter\n";
    }
    return 0;
}
    /* Output:

    Where do you want to begin?
        B. At the beginning?
        M. At the middle?
        E. At the end?

    The wolf hurt his leg.
    The wolf lived happily everafter
*/

/*
"Because transfer of control is not permitted to enter the\
    scope of a variable, if a declaration statement is encountered\
    inside the statement, it has to be scoped in its own compound
    statement:" from https://en.cppreference.com/w/cpp/language/switch
*/
// Example of potential problems with default statement formatting:
switch(1) {
    case 1: int x = 0; // initialization
        std::cout << x << '\n';
        break;
    default: // compilation error: jump to default: would enter\
        the scope of 'x'
        // without initializing it
        std::cout << "default\n";
        break;
}
//
switch(1) {
    case 1: {  int x = 0;
        std::cout << x << '\n';
        break;
        } // scope of 'x' ends here
    default: std::cout << "default\n"; // no error
        break;
}
/*
    Example of sequential switch statement starting after the
    first condition by input of i, including a break statement
    effectively ommitting the first and last condition checks

    "The code from the following url, shows several use cases
    of the switch statement":
    https://en.cppreference.com/w/cpp/language/switch
*/
//
#include <iostream>

int main()
{
    int i = 2;
    switch (i) {
        case 1: std::cout << "1";
        case 2: std::cout << "2";   //execution starts at this case label
        case 3: std::cout << "3";
        case 4:
        case 5: std::cout << "45";
                break;              //execution of subsequent statements is terminated
        case 6: std::cout << "6";
    }

    std::cout << '\n';

    switch (i) {
        case 4: std::cout << "a";
        default: std::cout << "d"; //there are no applicable constant_expressions
                                   //therefore default is executed
    }

    std::cout << '\n';

    switch (i) {
        case 4: std::cout << "a";  //nothing is executed
    }

    // when enumerations are used in a switch statement, many compilers
    // issue warnings if one of the enumerators is not handled
    enum color {RED, GREEN, BLUE};
    switch(RED) {
        case RED:   std::cout << "red\n"; break;
        case GREEN: std::cout << "green\n"; break;
        case BLUE:  std::cout << "blue\n"; break;
    }

    // the C++17 init-statement syntax can be helpful when there is
    // no implicit conversion to integral or enumeration type
    switch (Device dev = get_device(); dev.state())
    {
       case SLEEP: /*...*/ break;
       case READY: /*...*/ break;
       case BAD: /*...*/ break;
    }

    // pathological examples

    // the statement doesn't have to be a compound statement
    switch(0)
        std::cout << "this does nothing\n";

    // labels don't require a compound statement either
    switch(int n = 1)
        case 0:
        case 1: std::cout << n << '\n';

    // Duff's Device: http://en.wikipedia.org/wiki/Duff's_device
}
//
/* Output:
    2345
    d
    red
    1
*/
// switch statement program

// Example: from the Udacity C++ for programmers course
#include<iostream>

int main()
{
    char menuItem;
    std::cout<<"Choose your holiday package:\n";
    std::cout<<"L: luxury package\nS: standard package\n";
    std::cout<<"B: basic package ";

    std::cin>>menuItem;
    std::cout<<menuItem<<"\n";
        std::cout<<"The "<<menuItem<<" package includes:\n";

    switch(menuItem)
    {
        case 'L':
        {
            std::cout<<"\tSpa Day\n";
            std::cout<<"\tSailboat Tour\n";
        }
        case 'S':
        {
            std::cout<<"\tCity Tour\n";
            std::cout<<"\tComplimentary Happy Hour\n";
        }
        case 'B':
        {
            std::cout<<"\tAirport Transfers\n";
            std::cout<<"\tComplimentary Breakfast\n";
            break;
        }
        default:
            std::cout<<"Please select the L,S,B package.\n";
    }
    return 0;
}
//