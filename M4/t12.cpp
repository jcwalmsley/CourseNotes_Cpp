/*
    Standard while loop syntax:
*/
//
while (/* condition */) {
    /* code */
}
//
/*
    Do while loop syntax:
*/
//
do while (/* condition */) {
    /* code */
}
/*
    Example of standard while loop:
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
//
/* Output:
    incrementing entry = 0
    incrementing entry = 1
    incrementing entry = 2
    incrementing entry = 3
    incrementing entry = 4
    incrementing entry = 5
*/
/*
    Example of do while loop syntax:
*/
//
do {
    /* code */
} while(/* condition */);
//
/*
    Example of a do while loop:
    Note:
        in this type of do while loop the statements are executed
        on each iteration before the condition is checked
*/
//
int main()
{
    int count = 0;

    //This do..while loop will execute until count =5
    do
    {
        std::cout<<"Count = "<<count<<"\n";
        count++;
    }while(count < 5);


    int otherCount = 6;
    //This do..while loop will execute once. Even though
    //otherCount > 5
    do
    {
        std::cout<<"othercount = "<<otherCount<<"\n";
        otherCount++;
    }while(otherCount < 5);

    return 0;
}
// Output from this example:
/*
    Count = 0
    Count = 1
    Count = 2
    Count = 3
    Count = 4
    othercount = 6
*/
//
/*
    Exercise 1:
    Use a while loop to prompt a user to guess a target number.
    Respond to the user if the guess is too high or too low.
    If the user enters -1  or guesses the target number end
    the program.
*/
//  Exercise
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
//
// Quiz solution:
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
//
//  Alternatively:
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
// output
/*
    ** Guess a number between 0 and 100: 257
    ** Your guess 257 was above the accpetalbe range, try again,
    ** Guess a number between 0 and 100: -54
    ** Your guess-54 was below the accpetable range, try again.
    ** Guess a number between 0 and 100: 77
    ** Your guess 77 and was too high
    ** Guess a number between 0 and 100: 33
    ** Your guess was 33 and was too low
    ** Guess a number between 0 and 100: 55
    ** Your guess 55 was correct. Congratulations!
*/
//
/*
    This alternate solution uses a random number generator to
    determine a new random target each time the program is executed.
*/
//
#include <iostream>
#include <sstream>
#include <time.h> //added for the random number generator seed
#include <cstdlib>//added to use the rand function

int main()
{
    int target;
    std::string userString;
    int guess = -1;

    srand(time(NULL));  //set the seed for the random number generator
    target = rand() %100 + 1; //generate the 'random' number

    while(guess != target)
    {
        std::cout<<"Guess a number between 0 and 100: ";
        std::getline (std::cin,userString);
        //convert to an int
        std::stringstream(userString) >> guess;
        std::cout<<userString<<"\n";
        if(guess > target)
            std::cout<<"Your guess is too high\n";
        else if(guess < target)
            std::cout<<"Your guess is too low\n";
        else
            std::cout<<"You guessed the target!\n";

        //Note I had to use double quotes around "q"
        //because it is a string
        if(userString == "q")
        {
            std::cout<<"good bye!";
            std::cout<<"The number was "<<target<<"\n";
            break;
        }
    }
    return 0;
}
//
/*
    Output
    Guess a number between 0 and 100:
    50
    Your guess is too low
    Guess a number between 0 and 100:
    75
    Your guess is too low
    Guess a number between 0 and 100:
    87
    Your guess is too high
    Guess a number between 0 and 100:
    80
    You guessed the target!
    Exit code: 0 (normal program termination)
*/
//
