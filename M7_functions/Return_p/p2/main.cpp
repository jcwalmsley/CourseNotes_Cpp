//  Given 2 function declarations below:

/*
void printEquation(int n1, int n2, int sum, char operation);
//&
int sum(int n1, int n2);
//
//  and 2 function definitions below
void printEquation(int n1, int n2, int sum, char operation)
{
     print the equation 'n1 operation  n2 = result'
}
//
int sum(int n1, int n2)
{
     add two integers and return the sum
}
*/
//-----------------
/*  create main.hpp file, move function declarations and
    definitions above into it.

    Insert; #include "main.hpp", in main.cpp as shown below.

    main.cpp
    main.hpp

    main.hpp should have 5 items
        #include <iostream>
        2 function declarations
        2 function definitions

    NOTE: after completing this step comment out the 2 function
    declarations and definition in main.cpp, then compile and
    execute main.cpp using g++ main.cpp -o main followed by
    ./main
*/
//-----------------
//
#include "main.hpp"

int main()
{
    int n1 = 31;
    int n2 = 26;
    int total = sum(n1, n2);

    printEquation(n1, n2, total,'+');

    return 0;
}
  
