/*
    "C++ is a language that requires variable types to be known at compile time.

    But, C++ does allow some implicit conversions, for example an integer can be
    assigned to a float or an integer can be treated as a char."
*/
/*
    Example 2 understand C++ implicit variable assignments.
    "Run the program to see implicit variable assignment at work."
*/
//
#include<iostream>

int main()
{

    int a = 65;
    char charA = 65;
    char charB = 'B';
    float answer = 0;
    char charC = 67;
    int integer = 80;
    float floatNumber = 0.0;

    std::cout<<"a = "<<a<<"\n";
    std::cout<<"charA = "<<charA<<"\n";
    std::cout<<"charB = "<<charB<<"\n";

    //we can assign an integer to a float
    floatNumber = integer;
    std::cout<<"integer = "<<integer<<"\n\n";
    std::cout<<"floatNumber = integer = "<<floatNumber<<"\n";

    //we can assign a char to a float
    floatNumber = charB;
    std::cout<<"floatNumber = charB = "<<floatNumber<<"\n";

    answer = floatNumber/4;
    std::cout<<"answer = floatNumber/4 = "<<answer<<"\n";

    //But assigning a float to a char doesn't quite work
    charC = answer;
    std::cout<<"charC = answer = "<<charC<<"\n";

    //assigning a float to an interger, results in the float being truncated
    integer = answer;
    std::cout<<"integer = floatNumber = "<<integer<<"\n";
    return 0;
}
//
// Output
/*
a = 65
charA = A
charB = B
integer = 80

floatNumber = integer = 80
floatNumber = charB = 66
answer = floatNumber/4 = 16.5
charC = answer = 
integer = floatNumber = 16
*/
