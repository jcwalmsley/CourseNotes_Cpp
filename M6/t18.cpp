/*
    Find the min and max and average of 15 numbers
    that a user will input. The numbers range from 0 to 100.
    HINT: you will need to use scanf for input text.
*/
#include <iostream>
#include <stdio.h>


int main() {
    int userInput = 0;
    int minNumber = 100;
    int maxNumber = 0;
    int sumTotal  = 0;
    float average = 0;

    // read input from user
    for (int i = 0; i < 15; i++) {
        std::cout<<"Enter a number: ";
        std::cin>>userInput;
        std::cout<< userInput <<"\n";
        if (userInput > maxNumber) {
            maxNumber = userInput;
        }
        if (userInput < minNumber) {
            minNumber = userInput;
        }
        sumTotal = sumTotal + userInput;
    }
    std::cout<< "Maximum number = " << maxNumber << "\n";
    std::cout<< "Minimum number = " << minNumber << "\n";
    std::cout<< "sumTotal = " << sumTotal << "\n";
    average = (sumTotal / 15.0);
    std::cout<< "Average = " << average << "\n";

    return 0;
}
