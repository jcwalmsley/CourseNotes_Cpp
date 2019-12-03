/*
    To obtain the address-of a variable, we precede the variableName
    with the ampersand sign; for example: &variableName

    Given:
    int a = 82; // here, the value 82, is assigned to "a".

    If we want to know the memory location of "a", then we can use
    the following syntax to return the address of "a" to the console.

    std::cout<< &a<<"\n"; // this returns the memory location or "address" of 'a'

    //-------------

    Assigning a variableName to the addresses of another variable creates
    a pointer.

    If we assign a variableName such as:
    bar = &a; // where "&a" is the address where the varialbe named "a" is stored;

    then the variableName bar, becomes the pointer to the computer's physical
    memory location or address of the integer 82 which has previously been assigned
    the variableName of "a".

    A sample program using pointers follows:
*/
//

#include <iostream>

int main()
{
    int a = 82;
    std::cout<<"a = "<<a<<"\n";
    std::cout<<"The address location of a is &a and is = "<< &a<<"\n";
    return 0;
}
// Output
/*
a = 82
address of a is at &a = 0x7ffee58076e8
*/
