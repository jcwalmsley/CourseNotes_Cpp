/*
    In this program create a class called Cats.

    It has three private members: name, breed, age.

    Create set and get and printInfo functions:
        private members:
            name, breed, age
        public members:
            setName, setBreed,setAge
            getName, getBreed, getAge,
            printInfo.

    main.cpp
    main.hpp
*/
//-----------------
#include <iostream>
using namespace std;

class Cat
{
    string name;
    string breed;
    int age;

public:
    void setName(string nameIn);
    void setBreed(string breedIn);
    void setAge(int ageIn);
    string getName();
    string getBreed();
    int getAge();
    void printInfo();
};

void Cat::setName(string nameIn)
{
    name = nameIn;
}
void Cat::setBreed(string breedIn)
{
    breed = breedIn;
}
void Cat::setAge(int ageIn)
{
    age = ageIn;
}
string Cat::getName()
{
    return name;
}
string Cat::getBreed()
{
    return breed;
}
in Cat::getAge()
{
    return age;
}
void Cat::printInfo()
{
    cout<<name<<" "<<breed<<" "<<age;
}

//-----------------
/*
A sample main.hpp program

#include<iostream>
using namespace std;

class Cat
{
        string name;
        string breed;
        int age;
    public:
        void setName(string nameIn);
        void setBreed(string breedIn);
        void setAge(int ageIn);
        string getName();
        string getBreed();
        int getAge();
        void printInfo();
    };
void Cat::setName(string nameIn)
{
    name = nameIn;
}
void Cat::setBreed(string breedIn)
{
    breed = breedIn;
}
void Cat::setAge(int ageIn)
{
    age = ageIn;
}
string Cat::getName()
{
    return name;
}
string Cat::getBreed()
{
    return breed;
}
int Cat::getAge()
{
    return age;
}
void Cat::printInfo()
{
    cout<<name<<" "<<breed<<" "<<age;
}
*/
