/*
    To obtain the address-of a variable, we precede the variableName
    with the ampersand sign; for example: &variableName

    Given:
    int a = 54; // here, the value 54, is assigned to "a".

    If we want to know the memory location of "a", then we can use
    the following syntax to return the address of "a" to the console.

    std::cout<< &a<<"\n"; // this returns the memory location or "address" of 'a'

    //-------------

    When assigning a variableName to the addresses of another variable we create
    what is called a pointer.

    If we assign a variableName such as:
    bar = &a; // where "&a" is the address where the varialbe named "a" is stored;

    then the variableName bar, becomes the pointer to the computer's physical
    memory location or address of the integer 54 which has previously been assigned
    the variableName of "a".

    The following, is a sample program using pointers.
*/
//

#include <iostream>

int main()
{
    int a = 54;
    std::cout<<"a = "<<a<<"\n";
    std::cout<<"The address location of a is &a and is = "<< &a<<"\n";
    return 0;
}
// Output
/*
a = 54
address of a is at &a = 0x7ffee58076e8
*/
