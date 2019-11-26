/*
    if else & if else if statements
//-----------------
    if else statements
    Format:

if(boolean expression)
{
     //statements to execute if the boolean expression is true
}
else
{
     //statements to execute if the boolean expression is false
}
//-----------------
    if else if statements
    Format:

if(boolean expression)
{
     //statements to execute if the boolean expression is true
}
else if (boolean expression #2)
{
     //statements to execute if the 'else if' boolean expression  #2 is true
}

else
{
     //statements to execute if the boolean expressions
    //'if' and 'else if'  are false
}

*/
//
/*
    "Exercise: learn if-else statements in C++
        The user guess in in the input.txt file
        Change the value to test each of the possible
        code branches.
*/

#include<iostream>

int main()
{
    int TARGET = 33;
    int guess;
    std::cout<<"Guess a number between 0 - 100\n";
    std::cin>>guess;

    std::cout<<"You guessed: "<<guess<<"\n";

    if(guess < TARGET)
    {
        std::cout<<"Your guess is too low.\n";
    }
    else if(guess > TARGET)
    {
        std::cout<<"Your guess is too high.\n";
    }
    else
    {
        std::cout<<"Yay! You guessed correctly.\n";
    }

    return 0;
}
//
