/*
    Example of a standard syntax while loop:
*/
#include <iostream>

int main()
{
    int entry = 0;

    //with this while loop the condition is true
    //so the statements are executed

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
//
// An alternate solution:
//
#include <iostream>
#include<sstream>

int main()
{
    //use 55 as the number to be guessed
    int target = 55;
    int guess = -1;

    while(guess != target )
        {
            std::cout<<"Guess a number between 0 and 100: ";
            std::cin>>guess;
            if (guess < -1)
                std::cout<<"Your guess"<<guess<<" was below the accpetable range, try again.\n";
            else if (guess > 100)
                std::cout<<"Your guess "<<guess<<" was above the accpetalbe range, try again,\n";
            else if(guess > target && guess < 101)
                std::cout<<"Your guess "<<guess<<" and was too high, try again.\n";
            else if(guess < target && guess > -1)
                std::cout<<"Your guess was "<<guess<<" and was too low, try again\n";
            else
                std::cout<<"Your guess "<<guess<<" was correct. Congratulations!\n";
            if(guess == -1)
            {
                std::cout<<"You've decided to exit the program. Good bye!";
                break;
            }
        }
        return 0;
    }
*/
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
