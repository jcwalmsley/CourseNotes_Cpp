// Understanding C++ programs:

/*  Additional reading:
    The C++ Programming Language: 4th Edition
    Bjarne Stroustrup
    ISBN: 9780133522853
*/

// insert a link to [The C++ Programming Language: 4th Edition]



/*
USING C++

Programs in C++ programs have two sections.


CHAPTER ONE GETTING STARTED

####
The preprocessing directive.

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
The main program:

    Begin the main section with a statement specifying what data type the program returns.

Example 1:*/

#include “iostream”
int main() { // here (int) specifies output data type
	...some code…;
	...some code…;
    return 0; /*  note: the specified data type just before the opening curly brace matchs the data type of the return output defined on this line of code (0, being and integer), otherwise the program will not compile and will return an error specifying non matching data types*/
} // The declaration of the return data type is followed by the closing curly brace.

/*
 Example 1:*/

#include “iostream”
int main() { 	// the main section of the program starts here
	...some code…;
	...some code…;
	return 0;
}  // the main section of the program ends here

/* or
Example 2:*/

#include <iostream>
int main()
{    // the main section of the program starts here
    ...some code…; // lines between curly braces end with a semicolon
	...some code…;
	return 0;
}   // the main section of the program ends here

------------------------------------------------------------------------
/*
Adding comments:

To add a comment block:

Example 1:
/*.... Start a comment block with a backslash followed by an asterix
    ...some text...
    ...some text...
    ...some text...
    ...some text...
*/ // End a comment block with a asterix followed by a backslash


/*
Example 2:
/*
    **  double
    *** or triple asterixs can be used
    *** to make inner comment block
    **  lines standout a bit more
	**  but are optional
*/ // asterix slash terminates the block quote

/*
Single line comments:

// single line comments begin with two backslashes
*/

------------------------------------------------------------------------
/*
Assignment symbol:
    =  assign values to a variable using an equals sign


Assigning values to strings variables:

Example: */
variable name = “some characters”  // note: wrap stings in double quotes


/*
Assigning numberical values to variables:
Example: */
variable name = 20196378  note: numbers aren't enclosed in quotes


/*
Sending output to the console:*/

	Example 1:
    #include <iostream>
    int main()
    {
	…. some code….;
	std::cout<<”Hello World”;   // use the command in bold type to print output
	return 0;
    }

// In come cases this format can be used to avoid typing std:: each time.

    Example 2:
    #include <iostream>
    using namespace std;  //
    int main()
    {
	   …. some code….;
       cout<<”some text output”; // note std:: can be omitted in this case
	    return 0;
    } // Note: this method might lead to library conflicts on larger projects
/*
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
