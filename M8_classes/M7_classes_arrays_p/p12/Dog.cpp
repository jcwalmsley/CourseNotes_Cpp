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

    You may use this file as a header file for the Dog class.
    Make sure to include it in main.hpp file

*/
//
class Dog
{
    string name;
    int licenseNumber;
public:
    Dog();
    void setName(string nameIn);
    void setLicenseNumber(int licenseNumberIn);
    string getName();
    int getLicenseNumber();
    void printInfo();
};

Dog::Dog()
{
    name="Unkonw";
}

void Dog::setName(string nameIn)
{
    name = nameIn;
}

void Dog::setLicenseNumber(int licenseNumberIn)
{
    licenseNumber = licenseNumberIn;
}

string Dog::getName()
{
    return name;
}

int Dog::getLicenseNumber()
{
    return licenseNumber;
}

void Dog::printInfo()
{
    cout<<name<<" "<<licenseNumber;
}


  
