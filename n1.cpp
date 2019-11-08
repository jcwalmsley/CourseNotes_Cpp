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
//--------############################----------------

/*

C++ programs have at two sections.


####
SECTION ONE is the preprocessing directive.

A (# hash symbol) is used to indicate the start of a preprocessing directive.

The # symbol is followed by the keyword (include) which works with the next keyword specifying where to search for the item to be included.

The second keyword on this line is wrapped in either <..> or “..” which directs the compiler to look in either the local directory or or standard library for the preprocessing directive.

Double quotation marks “...” tells the compiler to look for the specified library in the current directory first and if not found there, then look in the standard (std.) libraries.

Double angle brackets  <...> tells the compiler to look for the preprocessing directory in the location of the standard libraries.

Examples:

    #include “main.hpp”

or

    #include <iostream>  ]



####
SECTION TWO is the main part of the program:

    Begin the main section with a statement specifying what data type the program returns.

Example:
    #include “iostream”
    int main()  // this line specifies the data type of the output of the program
{
	...some code…;
	...some code…;
    return 0; //  note: the specified data type on line 2 above must match data type of the output defined here on the last line of code excluding the closing curly brace
}

NOTE: the return value 0, an integer, matches the “int main() data type int statement above it. If the data types of these two statements don’t match, the compiler returns an error statement indicating mismatching data types.

The declaration of the data type is followed by opening and closing curly braces, which indicate the actual start and end of the program. The actual program lies between these two curly braces.

Example 1:
	#include “iostream”
int main() { 	// the main section of the program starts here
	...some code…;
	...some code…;
	return 0;
}    // the main section of the program ends here

or
Example 2:
#include <iostream>
int main()
{    // the main section of the program starts here
...some code…;
	...some code…;
	return 0;
}   // the main section of the program ends here
Each line between the curly braces with a semicolon
Example:
#include <iostream>
int main()
{
	…. some code….; // a semicolon signals the end of each line of code
	…..some code….;
	return 0;
}
------------------------------------------------------------------------
Writing output to the console:

	Example 1:
#include <iostream>
int main()
{
	…. some code….;
	std::cout<<”Hello World”;   // use the command in bold type to print output
	return 0;
}

In come cases this format can be used to avoid typing std:: each time.

Example 2:
#include <iostream>
using namespace std;  //
int main()
{
	…. some code….;
cout<<”some text output”; // note std:: can be omitted in this case
	return 0;
}

Note: this method might lead to library conflicts on larger projects

Commenting:
A comment block:
the comment block goes between these special characters
/*....some text…….*/
/*
Highlighting the lines inside of a comment block can make it nore noticeable as a comment block and can be done using double or triple asterix at the beginning of each indented inner line

Example:
/* The slash aterix starts the first line of a block quote.
    ** or *** double or triple asterix can be used for comment blocks occupying more than one line the inner lines can

	 **  Note the ** or *** are completely optional

*/ // asterix slash terminates the block quote

/*
One line comments:
// one line comments are indicated by two backslashes at the beginning of the line

Assignment symbol:
    The =  the equal sign is used when assigning values to a variable

Example:
Assignment of strings to variables:
variable name = “some characters” note: wrap stings in double quotes

Assignment of numbers to variables:
variable name = 20196378  note: numbers aren't enclosed in quotes

Sending output to the console:
String output:
	#include <iostream>

############## revise next !!!!!!!!!!!!!!!
using namespace std; // note: using the call to namespace here
int main()
{
	…. some code….;
cout<<”a string produces character output”; // note std:: has been omitted
std::cout<<”Hello World”; // prints Hello World to the console
	return 0;
}

*/
