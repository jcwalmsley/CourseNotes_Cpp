/* Style guides for code formatting
    a) modern C++ Coding Guidelines
    b) Google C++ Style Guidelines
*/

//-----------------
// Example: C++ Hello World program
/*write a C++ program that outputs the following statement:
*** "Hello world, I am ready for C++"
*/


#include <iostream>

int main()
{
    std::cout << "Hello world, I am ready for C++";
    return 0;
}


//  #include "main.hpp" // use this to include a header file where you can place all the preprocessing directive statements
//  g++  main.cpp -o main.out
//  use the command above to compile your code and send output to the console
// comments either by lines or by blocks

//-----------------
// Example: using namespace std;

/*Use the "namespace" keyword to simplify typing by "using namespace std;" its possible to use this just before the beginning of the main program to avoid having to repeatedly type "std::..."" over and over note: using this can potentialy result in library linking conflicts in larger programs*/

/*
#include <iostream>
using namespace std;
int main()
{
    cout << "Hey, writing std:: is pain, ";
    cout << "change the program so I don't have to write it.";
    return 0;
}
*/

//-----------------
// Example: write to the console
/*
int main()
{
    int integer = 4543:
    std::cout<<"The value of integer is "<<integer;
    return 0;
}
*/

// ----------------
// Example: size of a datatype
/*
    GOAL: Practice writing to the console and learn
    **the variables types available in C++
    **Print the sizes of each variable to the console.
    **Print them in the following order:
    **int, short, long, char, float, double, bool
    **
    **Use the command sizeof(variable type) ie: sizeof(int)
*/

/*
#include <iostream>
using namespace std;

int main() {
{
    using namespace std;
    cout<<"int size = "<<sizeof(int)<<"\n";
    cout<<"short size = "<<sizeof(short)<<"\n";
    cout<<"long size = "<<sizeof(long)<<"\n";
    cout<<"char size = "<<sizeof(char)<<"\n";
    cout<<"float size = "<<sizeof(float)<<"\n";
    cout<<"double size = "<<sizeof(double)<<"\n";
    cout<<"bool size = "<<sizeof(bool)<<"\n";
    return 0;
}
*/
//-----------------
/* Example: define constants
//Goal: use constant variables

/*
#include <iostream>
using namespace std;

int main()
{
    const int weightGoal = 100;
    cout<<"WeightGoal = "<<weightGoal<<"\n";
    weightGoal = 200;
    cout<<"WeightGoal = "<<weightGoal<<"\n";
    return 0;
}
*/
//-----------------
/* Example: enumerated constants
    ** users can create a new variable type using the format below and assign a specific number of elements to the new variable type*/

/*
enum type_name {
  value1,
  value2,
  value3,
  .
  .
} object_names;
*/
/* more specifically
enum MONTH {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};
*/
// in this case the values are numberically indexed where Jan = 0, Feb = 1, etc., etc.,

/*
Enum example

#include <iostream>

using namespace std;

int main()
{
    //define MONTHS as having 12 possible values
    enum MONTH {Jan, Feb, Mar, Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};

    //define bestMonth as a variable type MONTHS\
    MONTH bestMonth;

    //assign bestMonth one of the values of MONTH
    bestMonth = Jan;

    //now we can check the value of bestMonth just
    //like any other variable
    if(bestMonth == Jan)
    {
        cout<<"I'm not so sure January is the best month\n";
    }
    return 0;
}
*/
//-----------------
// First Example: simple formating of output
/*
#include <iomamip>
std::cout<<"Ints",,std::setw(10)<<"Floats"<<setw(10)<<"Doubles"<<"\n";
*/

// Second Example: regular formating of output
/*
#include <iomamip>
std::cout<<"\n\nThe text without any formatiting\n";
std::cout<<"Ints"<<"Floats"<<"Doubles"<<"\n";
std::cout<<"The text with setw(15)\n";
std::cout<<"Ints"<<std::setw(15)<<"Floats"<<std::setw(15)<<std::setw(15)<<"Doubles"<<"\n";
std::cout<<"\n\nThe text with tabs\n";
std::cout<<"Ints\t"<<"Floats\t"<<"Doubles"<<"\n";
*/
// Showing output if formatting above
/*
The text without any formating
IntsFloatsDoubles

The text with setw(15)
Ints         Floats        Doubles


The text with tabs
Ints    Floats    Doubles
*/

// Third Example: more extensive formatting example

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a = 45;
    float b = 45.323;
    double c = 45.5468;
    int aa = a + 9;
    float bb = b + 9;
    double cc = c + 9;
    int aaa = aa + 9;
    float bbb = bb + 9;
    double ccc = cc + 9;
    cout<<"print with set width = 10\n";
    cout<<"Ints"<<std::setw(10);
    cout<<"Floats"<<std::setw(10);
    cout<<"Doubles"<<std::setw(10)<<"\n";
    cout<< a;
    cout<< setw(12)<< b;
    cout<< setw(10)<< c << "\n";
    cout<< aa;
    cout<< setw(12)<< bb;
    cout<< setw(10)<< cc << "\n";
    cout<< aaa;
    cout<< setw(12)<< bbb;
    cout<< setw(10)<< ccc << "\n";
    return 0;
}
//-----------------
/*
Switch Statements = Transfers control to one of the several statements, depending on the value of a condition.

The format for a switch statement:
*/
switch(1) {
    case 1 : cout << '1'; // prints "1",
    case 2 : cout << '2'; // then prints "2"
}
//
switch(1) {
    case 1 : cout << '1'; // prints "1"
             break;       // and exits the switch
    case 2 : cout << '2';
             break;
}
//
switch(expression)
{
     case constant-expression : statements;
                               break; (this is optional);
     case constant-expression : statements;
                               break; (this is optional);
     ...

     default : //optional
        statements;
}
//
/*Goal: demonstrate use cases for the switch statement.*/

#include <iostream>

int main()
{
    int menuItem = 1;

    std::cout<<"What is your favorite winter sport?: \n";
    std::cout<<"1.Skiing\n2: Sledding\n3: Sitting by the fire";
    std::cout<<"\n4.Drinking hot chocolate\n";
    std::cout<<"\n\n";

    switch(menuItem)
    {
        case(1): std::cout<<"Skiing?! Sounds dangerous!\n";
                 break;
        case(2): std::cout<<"Sledding?! Sounds like work!\n";
                 break;
        case(3): std::cout<<"Sitting by the fire?! Sounds warm!\n";
                 break;
        case(4): std::cout<<"Hot chocolate?! Yum!\n";
                 break;
        default: std::cout<<"Enter a valid menu item";
    }
    //
    /*
    What is your favorite winter sport?:
    1. Skiing
    2: Sledding
    3: Sitting by the fire
    4. Drinking hot chocolate

    Skiing?! Sounds dangerous!
    */

    char begin;
    std::cout<<"\n\nWhere do you want to begin?\n";
    std::cout<<"B. At the beginning?\nM. At the middle?";
    std::cout<<"\nE. At the end?\n\n";

    begin = 'M';
    //
    switch(begin)
    {
        case('B'): std::cout<<"Once upon a time there was a wolf.\n";
        case('M'): std::cout<<"The wolf hurt his leg.\n";
        case('E'): std::cout<<"The wolf lived happily everafter\n";
    }
    return 0;
}
/*
Where do you want to begin?
B. At the beginning?
M. At the middle?
E. At the end?

The wolf hurt his leg.
The wolf lived happily everafter
*/
//
/*
Because transfer of control is not permitted to enter the scope of a variable, if a declaration statement is encountered inside the statement, it has to be scoped in its own compound statement:
*/
// Example:
switch(1) {
    case 1: int x = 0; // initialization
            std::cout << x << '\n';
            break;
    default: // compilation error: jump to default: would enter the scope of 'x'
             // without initializing it
             std::cout << "default\n";
             break;
}
//
switch(1) {
    case 1: {  int x = 0;
               std::cout << x << '\n';
               break;
            } // scope of 'x' ends here
    default: std::cout << "default\n"; // no error
             break;
}
//
#include <iostream>

int main()
{
    int i = 2;
    switch (i) {
        case 1: std::cout << "1";
        case 2: std::cout << "2";   //execution starts at this case label
        case 3: std::cout << "3";
        case 4:
        case 5: std::cout << "45";
                break;              //execution of subsequent statements is terminated
        case 6: std::cout << "6";
    }

    std::cout << '\n';

    switch (i) {
        case 4: std::cout << "a";
        default: std::cout << "d"; //there are no applicable constant_expressions
                                   //therefore default is executed
    }

    std::cout << '\n';

    switch (i) {
        case 4: std::cout << "a";  //nothing is executed
    }

    // when enumerations are used in a switch statement, many compilers
    // issue warnings if one of the enumerators is not handled
    enum color {RED, GREEN, BLUE};
    switch(RED) {
        case RED:   std::cout << "red\n"; break;
        case GREEN: std::cout << "green\n"; break;
        case BLUE:  std::cout << "blue\n"; break;
    }

    // the C++17 init-statement syntax can be helpful when there is
    // no implicit conversion to integral or enumeration type
    switch (Device dev = get_device(); dev.state())
    {
       case SLEEP: /*...*/ break;
       case READY: /*...*/ break;
       case BAD: /*...*/ break;
    }

    // pathological examples

    // the statement doesn't have to be a compound statement
    switch(0)
        std::cout << "this does nothing\n";

    // labels don't require a compound statement either
    switch(int n = 1)
        case 0:
        case 1: std::cout << n << '\n';

    // Duff's Device: http://en.wikipedia.org/wiki/Duff's_device
}
//
/* Output:
2345
d
red
1
*/
// switch statement program
#include<iostream>

int main()
{
    char menuItem;
    std::cout<<"Choose your holiday package:\n";
    std::cout<<"L: luxury package\nS: standard package\n";
    std::cout<<"B: basic package ";

    std::cin>>menuItem;
    std::cout<<menuItem<<"\n";
        std::cout<<"The "<<menuItem<<" package includes:\n";

    switch(menuItem)
    {
        case 'L':
        {
            std::cout<<"\tSpa Day\n";
            std::cout<<"\tSailboat Tour\n";
        }
        case 'S':
        {
            std::cout<<"\tCity Tour\n";
            std::cout<<"\tComplimentary Happy Hour\n";
        }
        case 'B':
        {
            std::cout<<"\tAirport Transfers\n";
            std::cout<<"\tComplimentary Breakfast\n";
            break;
        }
        default:
            std::cout<<"Please select the L,S,B package.\n";
    }
    return 0;
}



//-----------------







//-----------------
// File IO steps
/*
- Include the <fstream> library
- Create a stream (input, output, both)
     - ifstream myfile; (for reading a file)
     - ofstream myfile; (for writing to a file)
     - fstream myfile; (for reading and writing a file)
- Open the file  myfile.open(“filename”);
- Write or read the file
- Close the file myfile.close();
*/


#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ()
{
    string line;
    /* create an output stream to write to the file append the new lines to the end of the file */

    ofstream myfileI ("input.txt", ios::app);
    if (myfileI.is_open())
    {
        myfileI << "\nI am adding a line.\n";
        myfileI << "I am adding another line.\n";
        myfileI.close();
    }
    else cout << "Unable to open file for writing";

    //create an input stream to read the file ifstream
        myfileO ("input.txt");
    //During the creation of ifstream, the file is opened. So we do not have explicitly open the file.
    if (myfileO.is_open())
    {
        while ( getline (myfileO,line) )
        {
            cout << line << '\n';
        }
        myfileO.close();
    }

    else cout << "Unable to open file for reading";

    return 0;
}
// Exercise:

#include <iostream>

int main()
{
    float in1, in2;

    std::cout<<"Enter two numbers:\n";
    std::cin>>in1;
    std::cin>>in2;
    std::cout<<"You entered: "<<in1<<" for in1 and\n";
    std::cout<<"You entered: "<<in2<<" for in2\n";

    char menuItem;
    std::cout<<"Enter the operation '+','-','*','/'\n";
    std::cin>>menuItem;
    std::cout<<"You entered the "<<menuItem<<" for the operation\n";

    switch(menuItem)
    {
        case '+':
        {
            std::cout<<"The sum of in1 + in2 is: ";
            std::cout<<(in1 + in2);"\n";
                 break;
        }
        case '-':
        {
            std::cout<<"The difference of in1 minus in2 is: ";
            std::cout<<(in1 -in2);"\n";
                 break;
        }
        case '*':
        {
            std::cout<<"The product of in1 and in2 is: ";
            std::cout<<(in1*in2);"\n";
                 break;
        }
        case '/':
        {
            std::cout<<"The result of in1 divided by in2 is: ";
            std::cout<<(in1/in2);"\n";
                 break;
        }
        default:
        {
            std::cout<<"Please select menuItem A,B,C or D.\n";
        }

    }
    return 0;
}
*/
//-----------------






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
