/*
    SEARCHING ARRAYS in C++:

    note: array lengths can vary.

    Given an array of 10 integers.

    Ask the user to make a guess and provide an integer as input.
    Program searches given array for input provided by user (ie., "userInput").

    If the value input by the user is in the array, the program will return
    it's index (ie., location).

    If the value is'nt in the array, user will be notified "value is'nt in array".

    In order to exit the program, the user enters "-1".
*/

#include <iostream>
#include <stdio.h>

int main()
{
    int searchKey = 0;
    int searchArray[10] = {324,4567,6789,5421345,7,65,8965,12,342,485};
    int location = 0;

    while(1)
    {
        std::cout<<"Enter an integer ('-1' to quit): ";
        scanf("%d", &searchKey);
        std::cout<< searchKey<<"\n";
        if(searchKey == -1)
        {
            break;
        }
        for(int i = 0; i < 10; i++)
        {
            if(searchKey == searchArray[i])
            {
                location = i;
                break;
            }
            location = -1;
        }
        if(location != -1)
        {
            std::cout<<searchKey<<" is at location "<<location<<" in the array.\n";
        }
        else
        {
            std::cout<<searchKey<<" is not in the array.\n";
        }
   }
    return 0;
}
