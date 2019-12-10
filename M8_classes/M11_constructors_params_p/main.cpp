/*
    C++ allows class constructors to accept parameters.
    These parameters will set the values of class members when the object is created.

    Let's look at an example of a Constructor with Parameters.

    main.cpp
    main.hpp
*/
//
#include "main.hpp"

int main()
{
    //an instance of Patient is
    //instanciated with a name
    Patient p1("Tammy Smith");
    cout<<p1.getName();
    return 0;
}
  
