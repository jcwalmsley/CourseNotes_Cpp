/*
    Use the Dogs class to create an animal shelter roster.

    Add a constructor to the Dogs class.
    The initial name for a Dog is "Unknown"

    Create an array called roster, populate it
    with multiple instances of Dog, it has a size of SIZE.

    Create a function called: printRoster(roster, SIZE)
    Declare and define the function:
    printRoster(roster,SIZE);
    //that will print all the information about all the dogs on the roster.

    main.cpp
    main.hpp
    Dog.cpp
*/

#include "main.hpp"


int main()
{
    //ToDo: assign the dogs to an array called roster
    //Then assign names to the Dog.
    const int SIZE=3;
    Dog roster[SIZE];

    roster[0].setName("Blue");
    roster[1].setName("King");
    roster[2].setName("Spot");
    //ToDo: declare and define this function
    //in the header file
    printRoster(roster,SIZE);
    return 0;
}
