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
    //ToDo: finish this function
}

void Dog::setLicenseNumber(string licenseNumberIn)
{
    //ToDo: finish this function
}

string getName()
{
    //ToDo: finish this function
}

string getLicenseNumber()
{
    //ToDo: finish this function
}

void printInfo()
{
    //ToDo: finish this function
}
//
//-----------------
/*

    A sample solution for the header file.

*/
/*The header file for main.cpp*/

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
