/*
    By referencing a variables address in a function rather than referencing
    the value of the variable stored there we can modify the value that the
    address points to, rather than the actual variable saved in the location.
*/

#include<iostream>

void increment(int &input); //"&" gives the address of the input rather than the value

int main()
{
    int a = 31;
    std::cout<<"Prior to function call a = "<<a<<"\n";
    increment(a);
    std::cout<<"Following function call a = "<<a<<"\n";
    return 0;
}
void increment(int &input)//Note the addition of '&'
{
    input++; //**Note the LACK OF THE addition of '&'**
    std::cout<<"During function call a = "<<input<<"\n";
}
  
