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
/*
    Output:
Enter a number: 2
2
Enter a number: 4
4
Enter a number: 6
6
Enter a number: 8
8
Enter a number: 2
2
Enter a number: 5
5
Enter a number: 4
4
Enter a number: 9
9
Enter a number: 5
5
Enter a number: 3
3
Enter a number: 7
7
Enter a number: 5
5
Enter a number: 2
2
Enter a number: 8
8
Enter a number: 4
4
Maximum number = 9
Minimum number = 2
sumTotal = 74
Average = 4.93333
*/
