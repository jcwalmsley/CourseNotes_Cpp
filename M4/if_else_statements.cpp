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
     //statements to execute if the boolean expression above is true
}
else if (boolean expression #2)
{
     //statements to execute if the 'else if' boolean expression #2 above is true
}

else
{
    //statements to execute if the boolean expressions
    //'if' and 'else if' above are false
}

*/
//
/*
    "Exercise: practice if-else statements
        Require user to guess an number as input or use
        an input.txt file to provide inputs. Use different
        values to test each possible code branch"
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
