/*
    The point of the last exercise was to show that; in C++ changes made to the value
    of a variable within a function will not effect the variable's value in the
    program's main function.

    To work around this either:
        return the altered variable, or
        pass the variable as a reference

    For this case we can choose to
    return 'a';
*/

#include<iostream>

int increment(int input);
int main()
{
    int a = 34;
    std::cout<<"Before the function call a = "<<a<<"\n";
    a = increment(a);
    std::cout<<"After the function call a = "<<a<<"\n";
    return 0;
}
int increment(int input)
{
    input++;
    std::cout<<"In the function call a = "<<input<<"\n";
    return input;
}
  
