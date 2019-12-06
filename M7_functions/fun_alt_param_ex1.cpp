/*
So, now we know that C++ respects variable scope. Changes to a variable that are made in a function will not effect the variable in the main part of the program.

There are two methods to rectify this situation:
Return the altered variable
Pass the variable as a reference
We know how to return a variable. So we can modify the program to return 'a'.
*/
//
/*The program is changed to return
**the modified variable 'a'
**
**P.S. This is a totally silly program. Why write a function,
**with all the function overhead, to increment a variable?
**Silly!
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
  
