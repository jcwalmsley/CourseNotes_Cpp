// Arithmetic operations
//
/*
    When doing math operations you may need to include the cmath library, it contains a number of useful functions.
*/
#include<cmath>
//
// Example 1
//
// One that you may find useful is: std::pow(base, exponent).
// Format
    // std::pow(base, exponent);
//
// 3^5 is equal to std::pow(3, 5)
std::pow(3, 5);
//
//  M_PI is equivalent to pi.
#include<cmath>
//
//pi is equal to M_PI
M_PI = 3.14159265358979323846
//
/*
    Goal: practice arithmetic operations in C++ Write a program that calculatesthe volumes of:
        ** a cube, sphere, cone.
        ** Cube Volume = side^3
        ** Sphere Volume = (4/3) * pi * radius^3
        ** Cone Volume = pi * radius^2 * (height/3)
        ** Write the values to the console.
*/
// Example 2
#include<iostream>
#include<cmath>

int main()
{
    float volCube, volSphere, volCone = 0;

    //Dimension of the cube
    float cubeSide = 5.4;
    volCube = pow(cubeSide,3.0);
    std::cout << "The cube volume is " <<volCube<<"\n";

    //Dimension of sphere
    float sphereRadius = 2.33;
    volSphere = (4.0/3.0) *  M_PI * std::pow(sphereRadius,3.0);
    std::cout << "The sphere volume is " <<volSphere<<"\n";

    //Dimensions of cone
    float coneRadius = 7.65;
    float coneHeight = 14.0;
    volCone = M_PI * coneRadius * coneRadius * (coneHeight/3.0);
    std::cout << "The cone volume is " <<volCone<<"\n";

    return 0;
}
// Output
/*
    The cube volume is 157.464
    The sphere volume is 52.9854
    The cone volume is 857.985
*/
/*
    C++ is a language that requires variable types to be known at compile time.

    But, C++ does allow some implicit conversions, for example an integer can be assigned to a float or an integer can be treated as a char.
*/
/*Goal: understand C++ implicit variable assignments.
**Run the program to see implicit variable assignment at work.
 */
// Example 3
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
//
// Example 4
//
#include <iostream>

int main()
{
     float width = 4.5;
     float height = 5.5;

     int area = width * height;
     std::cout << "area = " << area;
     return 0;
}
// Output
/*
24
*/
// Example 5
//
#include <iostream>

int main(void)
{
    int numerator = 4;
    int denominator = 5;

    int answer = numerator / denominator;
    std::cout<<"answer = "<<answer;
    return 0;
}
//
// Output
/*
0
*/
// Example 6
/*Goal: fix the variable types problem.
**This program outputs the wrong answer
**even though it compiles and executes without errors.
**Fix it so that it outputs the correct value.
*/
/*Goal: fix the variable types problem.
**This program outputs the wrong answer
**even though it compiles and executes without errors.
**Fix it so that it outputs the correct value.
*/
/* The output produced by the following program is not correct,
    make changes it to return the correct answer
*/
#include <iostream>
int main(void)
{
    int numerator = 4;
    int denominator = 5;

    int answer = numerator / denominator;
    std::cout<<"answer = "<<answer;
    return 0;
}
// Output
// 0
//
// Solution
#include <iostream>
int main()
{
    float numerator = 4;
    float denominator = 5;

    float answer = numerator / denominator;
    std::cout<<"answer = "<<answer;
    return 0;
}
// Output
// 0.8
//
// Post and prefix increment and decrement operators
//
/*Goal: fix the variable types problem.
**This program outputs the wrong answer
**even though it compiles and executes without errors.
**Fix it so that it outputs the correct value.
*/
/*Goal: Practice PreFix and PostFix
**
*/
// Example 7
//
#include<iostream>

using namespace std;

int main()
{
    int a, b = 0;
    int post, pre = 0;
    cout<<"Inital values: \t\t\tpost = "<<post<<" pre= "<<pre<<"\n";
    post = a++;
    pre = ++b;
    cout<<"After one postfix and prefix: \tpost = "<<post<<" pre= "<<pre<<"\n";
    post = a++;
    pre = ++b;
    cout<<"After two postfix and prefix: \tpost = "<<post<<" pre= "<<pre<<"\n";
    return 0;
}
//
// Output
/*
Inital values: 			        post = 0 pre= 0
After one postfix and prefix: 	post = 0 pre= 1
After two postfix and prefix: 	post = 1 pre= 2
*/
//
