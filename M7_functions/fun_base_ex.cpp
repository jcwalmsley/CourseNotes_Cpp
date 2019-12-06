/*
    Practice writing a program using the format of a basic C++
    function without any parameters or return values and that only
    prints string output to the console.
*/

#include<iostream>

void printMessage();

int main()
{
    printMessage();

    return 0;
}

void printMessage()
{
    std::cout<<"This is a basic function with no parameters or return values.";
}


//    Output:
//    This is a basic function with no parameters or return values.
