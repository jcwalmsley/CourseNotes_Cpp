/*
    "for loops in C++ have the following forms:"

    for ( declaration : range ) statement;

    for (initialization; condition; increase) statement;
*/
// Example of the second format of a for loop
#include <iostream>

int main()
{
    for(int i=0; i< 10; i++)
    {
        std::cout<<"i = "<<i<<"\n";
    }
    return 0;
}
//
/*
    Output
    i = 0
    i = 1
    i = 2
    i = 3
    i = 4
    i = 5
    i = 6
    i = 7
    i = 8
    i = 9
*/
