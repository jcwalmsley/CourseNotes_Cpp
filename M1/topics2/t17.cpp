/*
    "
    EXITING CONTROL LOOPS:

    In order to exit a loop before it completes its sequence,
    its possible to use one of the following statements:

        break;
        continue;


    Explanations:
    The break statement:

    The break statement will end the loop and begin executing
    the first statement that comes AFTER the end of the loop.

    The continue statement: The continue statement will force
    the next iteration to be executed."

*/
//
//  Examples of break & continue statements:

#include<iostream>


int main()
{
    int a = 0;
    while(a < 5)
    {
        std::cout<<"a = "<<a<<"\n";
        a++;
        if(a == 3)
            break;
    }
    std::cout<<"The first statement after the first while loop\n\n";


    while(a < 15)
    {
        a++;
        if(a == 10)
        {
            std::cout<<"\tWhen a=10, go back to the top of the loop";
            std::cout<<"\n\tThis means a=10 is skipped.\n";
            continue;
        }
        std::cout<<"After continue a = "<<a<<"\n";
    }
    return 0;
}
