/*
    Create a generic function that accepts 2 inputs and returns their sum
    Put the function declaration and definition in the head file.

    main.cpp
    main.hpp

    Goal: Practice writing generic functions
*/
#include "main_ex.hpp"

int main()
{
    int a = 90;
    int b = 1;
    std::cout<<a <<" + "<<b<<" = "<< sumTwo(a,b);
    return 0;
}
