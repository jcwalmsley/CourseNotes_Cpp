/*
    Practice array manipulation in C++:

    Instruct user to input 40 integers.
    Create array with integer input.
    Print array in order entered.
    Print array in reverse order.
    Sort array.
    Print sorted array in ascending order.
    note: printed elements separated by a space.
    (ie., if array = [3,4,55]; output would be: 3 4 55)
*/

#include <iostream>
#include <stdio.h>

int main()
{
    // Assign varialbeName userInput to array of inputs
    int userInput[40];

    for(int i = 0; i <40; i++)
    {
        scanf("%d", &userInput[i]);
    }

    // print array of user inputs
    std::cout<<"\nArray\n";
    for(int i = 0; i < 40; i++)
    {
        std::cout<< userInput[i] <<" ";
    }


    // print array in reverse order
    std::cout<<"\n\nArray in reverse order\n";
    for(int i = 39; i >= 0; i--)
    {
        std::cout<< userInput[i] <<" ";
    }


    // sort array
    for(int i = 0; i < 40; i++)
    {
        for(int j = 0; j < 39 - i; j++)
        {
            if(userInput[j] > userInput[j + 1])
            {
                int temp;
                temp=userInput[j];
                userInput[j]=userInput[j + 1];
                userInput[j + 1]=temp;
            }
        }
    }

    // print sorted array
    std::cout<<"\n\nSorted array \n";

    for(int i = 0; i < 40; i++)
    {
        std::cout<< userInput[i] <<" ";
    }

    return 0;
}
