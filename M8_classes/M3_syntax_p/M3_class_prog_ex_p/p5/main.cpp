/*
    Create a class.

    Complete function definitions and write the program for:
    main.cpp
    main.hpp
    //
    Create class dog.
    Create instances dog1 & dog2
    assign name Rusty to dog1
    assign name Silver to dog2
    assign license #8765 to dog1
    assign license #2851 to dog2
*/


#include"main.hpp"

int main()
{

    return 0;
}
A sample solution of the main.cpp program.

/*Goal: practice creating and using a class*/

#include"main.hpp"

int main()
{
    Dog dog1, dog2;
    dog1.setName("Trixie");
    dog2.setName("Kali");
    dog1.setLicenseNumber(1234);
    dog2.setLicenseNumber(5678);

    dog1.printInfo();
    cout<<"\n";
    dog2.printInfo();
    return 0;
}
