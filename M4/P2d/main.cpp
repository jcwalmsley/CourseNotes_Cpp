/*
    Example of sequential switch statement starting after the
    first condition by input of i, including a break statement
    effectively omitting the first and last condition checks.

    "The code from the following url, shows several use cases
    of the switch statement":
    https://en.cppreference.com/w/cpp/language/switch

    from: Udacity C++ for programmers course Lesson 4 switch
    statements
*/
//

// Example: from the Udacity C++ for programmers course
#include<iostream>

int main()
{
    char menuItem;
    std::cout<<"Choose your holiday package:\n";
    std::cout<<"L: luxury package\nS: standard package\n";
    std::cout<<"B: basic package ";

    std::cin>>menuItem;
    std::cout<<menuItem<<"\n";
        std::cout<<"The "<<menuItem<<" package includes:\n";

    switch(menuItem)
    {
        case 'L':
        {
            std::cout<<"\tSpa Day\n";
            std::cout<<"\tSailboat Tour\n";
        }
        case 'S':
        {
            std::cout<<"\tCity Tour\n";
            std::cout<<"\tComplimentary Happy Hour\n";
        }
        case 'B':
        {
            std::cout<<"\tAirport Transfers\n";
            std::cout<<"\tComplimentary Breakfast\n";
            break;
        }
        default:
            std::cout<<"Please select the L,S,B package.\n";
    }
    return 0;
}
//
//-----------------
