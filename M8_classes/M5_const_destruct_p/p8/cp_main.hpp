/*
    Besides constructors, C++ has destructors as well.

    Destructors are class functions called whenever an object
    goes out of scope.

    Constructors and destructors are called automatically.

    Destructors cannot:
        - return a value
        - accept parameters

    Destructors, identified with a tilda (~) symbol, use the same
    name as the class.

    Syntax for destructors is similar to constructors:

*/
//
//declaring a destructor
~ClassName() //destructor

//defining a destructor
ClassName::~ClassName() //destructor definition
{
     //tasks
}
/*
    Destructors release memory allocated by the class constructor
    and member functions.

    main.cpp
    main.hpp
*/
#include <iostream>
using namespace std;

class dog
{
private:
    int license;
public:
    Dog();
    Dog(int licenseIn);
    void setLicense(int licenseIn);
    int getLicense();
    ~Dog();
};
Dog::Dog()
{
    license = 0;
}
Dog::~Dog()
{
    cout<<"\nDeleting the Dog";
}
Dog::Dog(int licenseIn)
{
    license = licenseIn;
}
void Dog::setLicense(int licenseIn);
{
    license = licenseIn;
}
int Dog::getLicense()
{
    return license;
}

//-----------------
// #include <iostream>
// using namespace std;
//
// class Dog
// {
//     private:
//         int license;
//     public:
//         Dog();
//         Dog(int licenseIn);
//         void setLicense(int licenseIn);
//         int getLicense();
//         ~Dog();
// };
// Dog::Dog()
// {
//    license = 0;
// }
//
// Dog::~Dog()
// {
//     cout<<"\nDeleting the dog";
// }
// Dog::Dog(int licenseIn)
// {
//    license = licenseIn;
// }
// void Dog::setLicense(int licenseIn)
// {
//     license = licenseIn;
// }
//
// int Dog::getLicense()
// {
//     return license;
// }
