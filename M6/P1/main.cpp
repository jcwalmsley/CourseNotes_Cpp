/*
    "For this programming exercise:
    Find the min and max and average of 15 numbers
    that a user will input.
    T
    he numbers range from 0 to 100.

    HINT: you will need to use scanf for input text."
*/
#include <iostream>
#include <stdio.h>
#include "input.txt"

int main() {
    int userInput = 0;
    int minNumber = 0;
    int maxNumber = 0;
    int sumTotal  = 0;
    float average = 0;

    // read input from user
    for (int i = 0; i < 15; i++) {
        std::cout<<"Enter a number: ";
        std::cin>>userInput;
        std::cout<< userInput <<"\n";
    }
    if (userInput > maxNumber) {
        maxNumber = userInput;
    }
    if (userInput < minNumber) {
        minNumber = userInput;
    }
    sumTotal = sumTotal + userInput;
    std::cout<< "Maximum number = " << maxNumber << "\n";
    std::cout<< "Minimum number = " << minNumber << "\n";
    average = sumTotal / 15.0;
    std::cout<< "Average = " << average << "\n";
    return 0;
}
// Output
/*
Enter a number: 11
11
Enter a number: 59
59
Enter a number: 58
58
Enter a number: 37
37
Enter a number: 16
16
Enter a number: 9
9
Enter a number: 3
3
Enter a number: 60
60
Enter a number: 31
31
Enter a number: 23
23
Enter a number: 72
72
Enter a number: 49
49
Enter a number: 52
52
Enter a number: 12
12
Enter a number: 67
67
Maximum number = 67
Minimum number = 0
Average = 4.46667
*/
