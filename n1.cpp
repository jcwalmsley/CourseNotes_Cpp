// Understanding C++ programs:
/*  Additional reading:
    The C++ Programming Language: 4th Edition
    Bjarne Stroustrup
    ISBN: 9780133522853
*/
// insert a link to [The C++ Programming Language: 4th Edition]

// C++ programs have at least two sections.
// Section one is the preprocessing directive.
// A (# hash symbol) is used to indicate the start of a preprocessing directive.
/* This is followed by a keyword wrapped in either <..> or “..” which tells the compiler which standard library contains contains the specified preprocessing directives to be used for the following code.

The wrappers are either “...” double quotation marks or <...> double angle brackets

Double quotation marks “...” tells the compiler to look for the specified library first in the current directory, if not found there, then look in the standard libraries (std.)

Double angle brackets  <...> tells the compiler to look in the specified directives in the standard libraries.

Examples:

#include // use preprocessing directives of library indicated by the following keyword

#include “iostream” // search the current directory first if not found search the standard libraries for the preprocessing directive found in the iostream library

or

#include <iostream> // search the standard libraries for the preprocessing directive found in the iostream library
*/
// end of page one 
//--------
