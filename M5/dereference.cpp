/*
    Dereferencing:
    Given a pointer, if we want to access the value stored
    in memory referenced by the pointer we simply add * before
    the pointer's name.
*/
// Example:
/*
    Given an integer of 26 with a variableName of "a"
    int a = 26;

    A pointer to this address must aslo be a datatype integer
    If 'a' was a float, then its pointer would also need to be a float.
        int *pointerToA = &a;
        float *pointerToA = &a;
*/
#include <iostream>

int main()
{
    int a = 26;
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
    pointerToA points to 26
*/
