/*
    Putting function definitions and declarations in a header file often
    makes sense because; the main function looks better organized, and
    is easier to understand by giving the overall code a cleaner appearance.

    Header files will have a .h or .hpp extension in most cases.

    main.cpp // main program file
    main.hpp // header file to the main program file

    When using a .h or .hpp header file, include the following statement
    in the main.cpp file:

    #include "main.hpp" /* when the program compiles the linker will link
                        main.cpp with the printProduct() function declaration
                        and definition located in the main.hpp file so that
                        the program will execute. */
*/
/*
    The example below is a non executing program referencing a hypothetical header
    file containing the printProduct() function declaration and printProduct()
    function definition.

    This is what the main.cpp program would look like if it had an existing main.hpp
    file in the same directory that included the function declaration and definition
    for the printProduct() function.

*/
#include "main.hpp"

int main() //
{
    int m1 = 4;
    int m2 = 5;
    int product;

    product = m1 * m2;

    printProduct(m1, m2, product);
    return 0;
}
  
