/*
    Write a program using Multiple Inheritance using the following information.

    In main.hpp you will find two classes: Patient and Dog.

    TODO:
    Create a class 'Pet' that inherits from both Patient and Dog
        Pet has 1 private member: name
        Pet has 2 public  members: 'getName, setName' functions.
*/

#include "main.hpp"


int main()
{
    Pet p1;
    p1.setName("Kali");
    p1.setIdNumber(44444);
    p1.setBreed("Aussie");

    cout<<p1.getName()<<" "<<p1.getIdNumber()<<" "<<p1.getBreed();
    return 0;
}
