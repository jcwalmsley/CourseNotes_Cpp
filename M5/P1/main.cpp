/*
    Program exercise:
    For each variable print the value of the variable,
    then print the address where it is stored.
*/
/*
#include<iostream>
#include<string>

int main()
{
    int givenInt;
    float givenFloat;
    double givenDouble ;
    std::string givenString;
    char givenChar;

    return 0;
}
*/
// Solution to programming exercise:
//
#include<iostream>
#include<string>

int main()
{
    int givenInt;
    float givenFloat;
    double givenDouble ;
    std::string givenString;
    char givenChar;
    int *pointerGivenInt;
    int **pointerPointerGivenInt;

    pointerGivenInt = &givenInt;
    pointerPointerGivenInt = &pointerGivenInt;

    // return values of variables

    std::cout<<"interger = \n";
    std::cin>> givenInt;
    std::cout<<"float = \n";
    std::cin>>givenFloat;
    std::cout<<"double = \n";
    std::cin>>givenDouble;

    /*
        using cin.ignore so that the leftover characters in
        the buffer left over from givenDouble will be ignored.
    */

    std::cin.ignore();
    std::cout<<"character = \n";
    std::cin>>givenChar;

    std::cout<<"string = \n";
    std::cin.ignore();
    std::getline (std::cin,givenString);

    // values
    std::cout<<"integer = "<<givenInt<<"\n";
    std::cout<<"float = "<<givenFloat<<"\n";
    std::cout<<"double ="<<givenDouble<<"\n";
    std::cout<<"string = "<<givenString<<"\n";
    std::cout<<"character = "<<(char) givenChar<<"\n";

    // memory addresses
    std::cout<<"address integer ="<<&givenInt<<"\n";
    std::cout<<"address float = "<<&givenFloat<<"\n";
    std::cout<<"address double ="<<&givenDouble<<"\n";
    std::cout<<"address string = "<<&givenString<<"\n";
    std::cout<<"address character = "<< (void *) &givenChar<<"\n\n";

    // get values stored using indirection
    std::cout<<"pointer of givenInt = "<<*pointerGivenInt<<"\n";
    std::cout<<"pointer of pointer of givenInt = "<<**pointerPointerGivenInt<<"\n";

    return 0;
}
