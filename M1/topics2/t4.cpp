/*
    Program flow control using if statements
*/
//
// if statement format:
/*
if(boolean expression)
{
     //statements to execute if the boolean expression is true
}
*/
/*
    Exercise: if statement
*/

#include<iostream>

int main()
{
    int a = 10;

    std::cout<<"This program checks the value of a.\n";

    if(a == 6)
    {
        std::cout<<"a is equal to a half dozen.\n";
    }

    std::cout<<"There is not much to say about a\n";
    return 0;
}
//
/*
    Output
    This program checks the value of a.
    There is not much to say about a
*/
