// Example 9: header file use:
//
/*
    "Using header files.
        Put in the header file every thing that is related to "how to do a task".
        Put the "what to do" in the main program."
*/

// #include <iostream>
// #include <string>

//using namespace std;

/*
    "#include "main.hpp" // this is the call to the header file named main.hpp
    A header file is mainly used to reference include statements, thus removing
    from one to many lines of code at the beginning of a C++ program main file
    or .cpp file. This results in better ogranization of the overall code and
    makes reading long programs much
        easier.
*/

int main()
{
    cout<<"Hello, I use header files!";
    return 0;
}
//
// Output
// Hello, I use header files!
//
