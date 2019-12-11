/*
    In addition to constructors, C++ also has destructors.

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
//destructor declaration:
~ClassName() //declaration

//destructor definition
ClassName::~ClassName() //definition
{
    //tasks
}
/*
    One of the more important tasks of a destructor is releasing memory
    that was allocated by the class constructor and member functions.

    We will discuss this in detail during the memory allocation lesson.

    main.cpp
    main.hpp
*/
#include "main.hpp"
using namespace std;

int main()
{
    Dog d2(666666);
    cout<<d2.getLicense();
    return 0;
}

//-----------------
// #include "main.hpp"
//
// int main()
// {
//     Dog d2(666666);
//     cout<<d2.getLicense();
//     return 0;
// }
//
