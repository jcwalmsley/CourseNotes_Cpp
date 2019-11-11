// Style guides for code formatting a) modern C++ Coding Guidelines or b) Google C++ Style Guidelines


//-----------------
// Example: C++ Hello World program
/*write a C++ program that outputs the following statement:
*** "Hello world, I am ready for C++"
*/

/*
#include <iostream>
 int main()
{
    std::cout << "Hello world, I am ready for C++";
    return 0;
}
*/

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
// Simple Example of formating output
/*
#include <iomamip>
std::cout<<"Ints",,std::setw(10)<<"Floats"<<setw(10)<<"Doubles"<<"\n";
*/

// Second example format output
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


// Example three: more extensive formatting example

/*
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
*/









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
