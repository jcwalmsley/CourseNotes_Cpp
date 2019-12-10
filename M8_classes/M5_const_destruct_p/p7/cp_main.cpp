/*
    A constructor is special function that is executed whenever we create
    a new instance of the class.

    It is used to set initial values of data members of the class.

    For example, in our Cats class we may want to have an initial value for
    the age of a cat and it's breed.

    If we set initial values, we do not need to require the program or user
    set every value.

    Constructors do not return a value, including void.
*/
//
//The declaration for a constructor is:
ClassName::ClassName();
//
//The definition of a constructor is:
ClassName::ClassName()
{
    dataMemberName1 = value;
    dataMemberName2 = value;
    ...
}
//
/*
    Note: Destructors will be discussed later.
*/
//
//-----------------
//
#include<iostream>
using namespace std;
//
//The Cats class used earlier.
class Cats
{
    string name;
    string breed;
    int age;
public:
    Cats(); //declaring the Constructor
    void setName(string nameIn);
    void setBreed(string breedIn);
    void setAge(int ageIn);
    string getName();
    string getBreed();
    int getAge();
    void printInfo();
};
//constructor definition
Cats::Cats()
{
    cout<<"Assigning initial values in the contructor\n";
    name = "Unknown";
    breed = "Unknown"; //the initial value
    age = 99; // initial value
}
void Cats::setName(string nameIn)
{
    name = nameIn;
}
void Cats::setBreed(string breedIn)
{
    breed = breedIn;
}
void Cats::setAge(int ageIn)
{
    age = ageIn;
}
string Cats::getName()
{
    return name;
}
string Cats::getBreed()
{
    return breed;
}
int Cats::getAge()
{
    return age;
}
void Cats::printInfo()
{
    cout<<name<<" "<<breed<<" "<<age;
}
//-----------------
int main()
{
    Cats cat1:
    cout<<"Cat1 information: ";
    cat1.printInfo();
    return 0;
}
