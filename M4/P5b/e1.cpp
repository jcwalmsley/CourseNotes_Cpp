/*
    Example of standard while loop:
*/
#include <iostream>

int main()
{
    int entry = 0;

    //when the condition is true the statement(s) are executed

    while(entry <=5)
    {
        std::cout<<"incrementing entry = "<<entry<<"\n";
        entry++;
    }

    //with this while loop the condition is false
    //so the statements are not executed

    while(entry < 5)
    {
        std::cout<<"decrementing entry = "<<entry<<"\n";
        entry--;
    }

    return 0;
}
//
/* Output:
    incrementing entry = 0
    incrementing entry = 1
    incrementing entry = 2
    incrementing entry = 3
    incrementing entry = 4
    incrementing entry = 5
*/
//
