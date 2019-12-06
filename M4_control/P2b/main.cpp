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
