/*
    C++ allows class constructors to accept parameters.
    These parameters will set the values of class members when the object is created.

    Let's look at an example of a Constructor with Parameters.

    main.cpp
    main.hpp
*/
//
#include<iostream>
#include<string>
using namespace std;

class Patient //creation of the 'Patient' class
{
    private:
        //declaration of the patient's name as a private class member data type here
        string name;
    public:
        //declaration using the public access method that accepts a string parameter as name input
        Patient(string input);
        /*
            declaration of the public access setter function 'setName' that assigns
            string 'patient's name' to the private data member 'name'
        */
        void setName(string input);
        /*
            declaration of the public access getter function 'getName' that returns the
            string 'name' when assigned to the private data member "name" which is the
            'actual patient's name' as an output
        */
        string getName();
};

Patient::Patient(string input) //creating an object of the class
{
    //when an object is created
    //the name must be added as a parameter
    name = input;
}

void Patient::setName(string input)
{
    name = input;
}

string Patient::getName()
{
    return name;
}
