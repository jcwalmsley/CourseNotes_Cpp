/*
    Dereferencing:
    If we have a pointer and want to access the valiue stored
    in the address referenced by the pointer then we add the
    operator * before the variable's name
*/
// Example:
/*
    "this is an integer variable with value = 54.
    int a = 54;

    This is a pointer that holds the address of the variable 'a'.
    If 'a' was a float, rather than int, so should be its pointer.
    int * pointerToA = &a;
    float * pointerToA = &a;
*/
#include <iostream>

int main()
{
    int a = 54;
    std::cout<<"a = "<<a<<"\n";
    std::cout<<"address of a is at &a = "<< &a<<"\n";
    int * pointerToA = &a;

    // If we were to print pointerToA, we'd obtain the address of 'a':
    std::cout << "pointerToA stores " << pointerToA << '\n';

    // If we want to know what is stored in this address, we can dereference pointerToA:
    std::cout << "pointerToA points to " << * pointerToA << '\n';
    return 0;
}
//
/*
    Output
    address of a is at &a = 0x7ffeeb4e66e8
    pointerToA stores 0x7ffeeb4e66e8
    pointerToA points to 54
*/
