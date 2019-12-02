// Example 10: User input Programming
//
"g++", "-o main.out", "main.cpp"
"./main.out", stdin=open("input.txt", "r")
//
/*
    "The first statement compiles the code and names the executable file main.out.
    Then main.out is executed using an input file called "input.txt".

    These are the commands you would run if you were compiling and executing the
    program in a terminal. In the Udacity classroom setting clicking the "Test Run"
    button executes these commands for you.""
*/
//
/*
    "This program accepts inputs from the input.txt file."
*/
//
#include <iostream>
#include <string>


int main()
{
    int year = 0;
    int age = 0;
    std::string name = " ";
    //print a message to the user
    std::cout<<"What year is your favorite? ";

    //get the user response and assign it to the variable year
    std::cin >> year;

    //output response to user
    std::cout<<"How interesting, your favorite year is "<<year<<"!\n";

    //print a message to the user
    std::cout<<"At what age did you learn to ride a bike? ";

    //get the user response and assign it to the variable age
    std::cin >> age;

    //output response to user
    std::cout<<"How interesting you learned to ride at "<<age<<"!\n";

    std::cout<<"What is your name? ";
    std::cin>>name;
    std::cout<<"Hello "<<name<<" !\n";
    return 0;
}
//
// Output
/*
What year is your favorite? How interesting, your favorite year is 1991!
At what age did you learn to ride a bike? How interesting you learned to ride at 5!
What is your name? Hello Bob !
*/
//
// String input
/* The; std::cin>> vs std::getline(std::cin, variableName);
    using std::cin>> it stops when it encounters a space
    whereas std::getline(std::cin, varialbeName); can get a
    whole string that has spaces between words
    "std::cin will not retrieve strings that have a space in
    them. It will see the space as the end of the input."
    "getline: it will retrieve characters from the std::cin
    source and stores them in the variable called variableName.
    It will retrieve all characters until the newline or “\n”
    is detected."
    "The programmer can also specify a different delimiter if
    the newline character is not desired. The details are in the
    provided link."
*/
//
