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
    float a = 90.6;
    float b = 1.7;
    std::cout<<a<<" + "<<b<<" = "<<sumTwo(a,b);
    return 0;
}
