//
// #include <iostream>
// #include <stdio.h>
#include "main.hpp"

int main()
{
    int userInput = 0;
    int maxNumber = 0;
    int minNumber = 100;
    int sumTotal = 0;
    float average = 0;

    //get the numbers from the user
    for(int i = 0; i < 3; i++)  {
        cout << "Enter a number: ";
        scanf("%d", &userInput);
        cout << userInput << "\n";

        if(userInput > maxNumber)   { //the biggest number entered so far is the max number
            maxNumber = userInput;
        }
        if(userInput < minNumber)   { //the lowest number entered so far is the min number
            minNumber = userInput;
        }
        sumTotal = sumTotal + userInput;
    }
    cout << "Maximum number = " << maxNumber << "\n";
    cout << "Minimum number = " << minNumber << "\n";
    average = sumTotal / 3;
    cout << "Average = " << average << "\n";
    return 0;
}
