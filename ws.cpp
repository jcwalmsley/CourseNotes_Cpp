
//-----------------
// Infinite loops:
/*
    ** Sometimes it is desired to create an infinite loop.
    ** For example, in embedded systems a infinite loop is
    ** often used for the main task.
*/
//
// To create an infinite loop using a for loops
for( ; ;)
{
     std::cout<<"This for loop will run forever\n";
}
//
// To create an infinite loop using a while loop:
while(1)
{
     std::cout<<"This while loop will run forever\n";
}
// Exiting loops
//
/*
    ** Exiting a loop before it completes its sequence is demonstrate
    ** using contol statements.
        * break // the break control statement
        * continue // the continue control statement
*/

/*Goal: understand the break and conitnue statements*/

#include<iostream>


int main()
{
    int a = 0;
    while(a < 5)
    {
        std::cout<<"a = "<<a<<"\n";
        a++;
        if(a == 3)
            break;
    }
    std::cout<<"The first statement after the first while loop\n\n";


    while(a < 15)
    {
        a++;
        if(a == 10)
        {
            std::cout<<"\tWhen a=10, go back to the top of the loop";
            std::cout<<"\n\tThis means a=10 is skipped.\n";
            continue;
        }
        std::cout<<"After continue a = "<<a<<"\n";
    }
    return 0;
}
// Output:
/*
a = 0
a = 1
a = 2
The first statement after the first while loop

After continue a = 4
After continue a = 5
After continue a = 6
After continue a = 7
After continue a = 8
After continue a = 9
When a=10, go back to the top of the loop
This means a=10 is skipped.
After continue a = 11
After continue a = 12
After continue a = 13
After continue a = 14
After continue a = 15
*/
// Example pointers - definition - "are addresses of variables"
//
in a = 54; // 'a' is a pointer to the value of 54
// where is 'a'?
int a = 54;
std::cout<< &a <<"\n";
/* this will print the memory location or (address) of 'a' in other words the '&' sign returns the address to the computers memory location where the variable data is held */
//
// this is an integer variable with value = 54
int a = 54;

// this is a pointer that holds the address of the variable 'a'.
// if 'a' was a float, rather than int, so should be its pointer.
int * pointerToA = &a;

// If we were to print pointerToA, we'd obtain the address of 'a':
std::cout << "pointerToA stores " << pointerToA << '\n';

// If we want to know what is stored in this address, we can dereference pointerToA:
std::cout << "pointerToA points to " << * pointerToA << '\n';
/* the "*" asterix in this situation is used to dereference the pointerToA location and returns the value stored at that computer memory location
*/
// Output:
/*
    pointerToA stores 0x7e309665ca1c
    pointerToA points to 54
*/

/*Goal: Examine pointers! from C++ for programmers */

#include <iostream>

int main()
{
    int a = 54;
    std::cout<<"a = "<<a<<"\n";
    std::cout<<"address of a is at &a = "<< &a<<"\n";
    return 0;
}
//
/*
    a = 54
    address of a is at &a = 0x779bf10ede7c
*/
//
// Example from the website C++ shell @ http://cpp.sh/
//
// my first pointer
#include <iostream>
using namespace std;

int main ()
{
  int firstvalue, secondvalue;
  int * mypointer;

  mypointer = &firstvalue;
  *mypointer = 10;
  mypointer = &secondvalue;
  *mypointer = 20;
  cout << "firstvalue is " << firstvalue << '\n';
  cout << "secondvalue is " << secondvalue << '\n';
  return 0;
}
// Programming quiz on pointers
/*For this program print for each variable
**print the value of the variable,
**then print the address where it is stored.
*/
#include<iostream>
#include<string>

int main()
{
    int givenInt;
    float givenFloat;
    double givenDouble ;
    std::string givenString;
    char givenChar;


    return 0;
}
// Input.txt for the programming quiz on pointers
/*
    32
    64.212
    4.76545
    *
    Hey look at me! I know pointers!
*/
//
// Programming quiz solution on pointers
/*
*For this program: print for each variable
**print the value of the variable,
**then print the address where it is stored.
*/

#include<iostream>
#include<string>

int main()
{
    std::string name;
    int givenInt;
    float givenFloat;
    double givenDouble;
    std::string givenString;
    char givenChar;
    int *pointerGivenInt;
    int **pointerPointerGivenInt;

    pointerGivenInt = &givenInt;
    pointerPointerGivenInt = &pointerGivenInt;

   //Get the values of each variable
    std::cout<<"integer = \n";
    std::cin>>givenInt;
    std::cout<<"float = \n";
    std::cin>>givenFloat;
    std::cout<<"double = \n";
    std::cin>>givenDouble;
    //We need to use cin.ignore so cin will ignore
   //the characters in the buffer leftover
   //from the givenDouble
    std::cin.ignore();
    std::cout<<"character = \n";
    std::cin>>givenChar;

    std::cout<<"string = \n";
    std::cin.ignore();
    std::getline (std::cin,givenString);


    //The value stored in the data
    std::cout<<"integer = "<<givenInt<<"\n";
    std::cout<<"float = "<<givenFloat<<"\n";
    std::cout<<"double = "<<givenDouble<<"\n";
    std::cout<<"string = "<<givenString<<"\n";
    std::cout<<"character = "<<(char)givenChar<<"\n\n";

    //The address of the data - use pointers
    std::cout<<"address integer = "<<&givenInt<<"\n";
    std::cout<<"address float = "<<&givenFloat<<"\n";
    std::cout<<"address double = "<<&givenDouble<<"\n";
    std::cout<<"address string = "<<&givenString<<"\n";
    std::cout<< "address character = " << (void *) &givenChar<<"\n\n";

   //Use indirection to the get the value stored at the address
    std::cout<< "pointer of givenInt = " << *pointerGivenInt<<"\n";
    std::cout<< "pointer of pointer of givenInt = " << **pointerPointerGivenInt<< "\n";

    return 0;
}
//
// Output:
/*
integer =
float =
double =
character =
string =
integer = 32
float = 64.212
double = 4.76545
string = Hey look at me! I know pointers!
character = *

address integer = 0x7fff9ce67cf8
address float = 0x7fff9ce67cfc
address double = 0x7fff9ce67d18
address string = 0x7fff9ce67d10
address character = 0x7fff9ce67cf7

pointer of givenInt = 32
pointer of pointer of givenInt = 32
*/
/* Pointers continued from Udacity C++ for programmers course*/

#include<iostream>
#include<string>

int main ()
{
  int * pointerI;
  int number;
  char character;
  char * pointerC;
  std::string sentence;
  std::string *pointerS;

  pointerI = &number;
  *pointerI = 45;

  pointerC = &character;
  *pointerC = 'f';

  pointerS = &sentence;
  *pointerS = "Hey look at me, I know pointers!";

  std::cout << "number = "<<number<<"\n";
  std::cout<<"character = "<<character<<"\n";
  std::cout<<"sentence = "<<sentence<<"\n";

  return 0;
}
// Output:
/*
number = 45
character = f
sentence = Hey look at me, I know pointers!
*/
//







//-----------------
// Truth Table Exercise pt.1
/*Goal: use logical and relational operators in a C++ program.
**Find all possible outputs for the given expression
**Hint: there are three inputs, so there are 8 possible input combinations (2^3)
**Which means there is an output for each combination of inputs.
**The expression: (A and B and C) or (A and( (not B) or (not C))) = Q
*/

#include<iostream>


int main()
{
    //(A and B and C) or (A and( (not B) or (not C))) = Q

    int A = 0;
    int B = 0;
    int C = 0;
    int Q;

    Q = (A && B && C) || (A && (!B || !C));

    //Use this output format
    Q = (A && B && C) || (A && (!B || !C));
    std::cout<<"A\tB\tC\t(A && B && C)\t\t(!B||!C)\t\t(A&&(!B||!C))\t\tQ\n";
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<"\n";


    C = 1;
    Q = (A && B && C) || (A && (!B || !C));
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<"\n";

    C = 0;
    B = 1;
    Q = (A && B && C) || (A && (!B || !C));
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<"\n";

    C = 1;
    B = 1;
    Q = (A && B && C) || (A && (!B || !C));
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<"\n";

    C = 0;
    B = 0;
    A = 1;
    Q = (A && B && C) || (A && (!B || !C));
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<"\n";


    C = 1;
    B = 0;
    A = 1;
    Q = (A && B && C) || (A && (!B || !C));
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<"\n";

    C = 0;
    B = 1;
    A = 1;
    Q = (A && B && C) || (A && (!B || !C));
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<"\n";

    C = 1;
    B = 1;
    A = 1;
    Q = (A && B && C) || (A && (!B || !C));
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<"\n";

    return 0;
}
-------
// Truth Table Exercise pt.2
/*The simplified code for the Truth Table programming quiz.
*/


#include<iostream>


int main()
{
    //(A and B and C) or (A and( (not B) or (not C))) = Q

    int A = 0;
    int B = 0;
    int C = 0;
    int Q;
    Q = A;

    //case 0:
    std::cout<<"A\tB\tC\t\tQ\n";
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<Q<<"\n";

    C = 1;
    Q = A;
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<Q<<"\n";

    C = 0;
    B = 1;
    Q = A;
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<Q<<"\n";

    C = 1;
    B = 1;
    Q = A;
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<Q<<"\n";

    C = 0;
    B = 0;
    A = 1;
    Q = A;
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<Q<<"\n";

    C = 1;
    B = 0;
    A = 1;
    Q = A;
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<Q<<"\n";

    C = 0;
    B = 1;
    A = 1;
    Q = A;
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<Q<<"\n";

    C = 1;
    B = 1;
    A = 1;
    Q = A;
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<Q<<"\n";

    return 0;
}
// Q=A
