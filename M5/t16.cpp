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
// If we were to print pointerToA, we'd obtain the address of 'a':
std::cout << "pointerToA stores " << pointerToA << '\n';

// If we want to know what is stored in this address, we can dereference pointerToA:
std::cout << "pointerToA points to " << * pointerToA << '\n';"
