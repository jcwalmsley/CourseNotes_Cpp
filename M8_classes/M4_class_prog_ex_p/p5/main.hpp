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
#include<iostream>

using namespace std;

class Dog
{
        string name;
        int licenseNumber;


    public:
        void setName(string nameIn);
        void setLicenseNumber(int licenseNumberIn);
        string getName();
        int getLicenseNumber();
        void printInfo();
};

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
//
//-----------------
/*

    A sample solution for the header file.

*/
/*

#include<iostream>

using namespace std;

class Dog
{
    string name;
    int licenseNumber;
public:
    void setName(string nameIn);
    void setLicenseNumber(int licenseNumberIn);
    string getName();
    int getLicenseNumber();
    void printInfo();
};

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
*/
