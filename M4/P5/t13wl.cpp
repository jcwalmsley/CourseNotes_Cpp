
/*
    Exercise 1:
    Write a program using the standard while loop syntax.
    Prompt a user to guess a target number between 0 & 100.
    Respond to the user if the guess is too high or too low.
    If the user enters -1  or guesses the target number end
    the program.
*/

/*
#include <iostream>
#include<sstream>

int main()
{
    //use 55 as the number to be guessed
    int target = 55;
    int guess = -1;
    std::cout<<"Guess a number between 0 and 100: ";
    std::cin>>guess;
    std::cout<<guess<<"\n";


    return 0;
}
*/
//
// Exercise 1 solution:
#include <iostream>
#include <sstream>
#include "input.txt"

int main()
{
    //use 55 as the number to be guessed
    int target = 55;
    int guess = -1;

while(guess != target )
    {
        std::cout<<"Guess a number between 0 and 100: ";
        std::cin>>guess;
        std::cout<<guess<<"\n";
        if(guess > target)
            std::cout<<"Your guess was too high\n";
        else if(guess < target)
            std::cout<<"Your guess was too low\n";
        else
            std::cout<<"You guessed the target!\n";
        if(guess == -1)
        {
            std::cout<<"good bye!";
            break;
        }
    }
    return 0;
}
/*
    Output
    Guess a number between 0 and 100: 257
    Your guess 257 was above the accpetalbe range, try again,
    Guess a number between 0 and 100: -54
    Your guess-54 was below the accpetable range, try again.
    Guess a number between 0 and 100: 77
    Your guess 77 and was too high
    Guess a number between 0 and 100: 33
    Your guess was 33 and was too low
    Guess a number between 0 and 100: 55
    Your guess 55 was correct. Congratulations!
*/
