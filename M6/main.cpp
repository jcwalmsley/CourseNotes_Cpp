/*
    Practice array manipulation in C++:

    Ask the user will input 40 integers.
    Create an array using the input.
    Print the array in the order the numbers were entered.
    Then print in reverse order.
    Then sort the array in ascending order and print it.
    Each element in the printed output should be separated by a space.
    For example: array = [3,4,55] output would be: 3 4 55
*/

#include <iostream>
#include <stdio.h>

int main()
{
    int userInput[40];
    for(int i = 0; i <40; i++)
    {
        scanf("%d", &userInput[i]);
    }
    // print out the array
    std::cout<<"\nThe array\n";
    for(int i = 0; i < 40; i++)
    {
        std::cout<< userInput[i] <<" ";
    }
    // print this array in reverse order
    std::cout<<"\n\nThe array in reverse order\n";
    for(int i = 39; i >= 0; i--)
    {
        std::cout<< userInput[i] <<" ";
    }
    // sorting the array
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
std::cout<<"\n\nThe array sorted\n";
    for(int i = 0; i < 40; i++)
    {
        std::cout<< userInput[i] <<" ";
    }
    return 0;
}
