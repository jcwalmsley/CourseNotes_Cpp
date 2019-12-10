/*
    Create a class.

    Create a dog class; completing function definitions provided:
        main.cpp
        main.hpp
    //
    create 2 instances; dog1 & dog2
    assign name "Rusty"  to dog1
    assign name "Silver" to dog2
    assign license #8765 to dog1
    assign license #2851 to dog2
*/
//
#include "main.hpp"

int main()
{
Dog dog1, dog2;
    dog1.setName("Rusty");
    dog2.setName("Silver");
    dog1.setLicenseNumber(8765);
    dog2.setLicenseNumber(2851);

    dog1.printInfo();
    cout<<"\n";
    dog2.printInfo();

    return 0;
}
//
/*
    A sample solution of the main.cpp program.
*/
//
/*
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
*/
