/* It's a good idea to become familiar with C++ style guides for code formatting
    a) modern C++ Coding Guidelines
    b) Google C++ Style Guidelines
*/

//-----------------
// Example 1: C++ Hello World program
/*
    "Write a C++ program that outputs the following statement:"

    "Hello world, I am ready for C++"
*/
//
#include <iostream>

int main()
{
    std::cout << "Hello world, I am ready for C++";
    return 0;
}
//

/*  #include "main.hpp" // use this to include a header file
    where you can place all the preprocessing directive statements
    g++  main.cpp -o main.out use the command above to compile your
    code and send output to the console
*/

// comments either by lines or by blocks

//-----------------
// Example 2: using namespace std;

/*Use the "namespace" keyword to simplify typing by "using
    namespace std;" its possible to use this just before the
    beginning of the main program to avoid having to repeatedly
    type "std::..."" over and over note: using this can
    potentialy result in library linking conflicts in larger
    programs

*/
//
#include <iostream>
using namespace std;
int main()
{
    cout << "Hey, writing std:: is pain, ";
    cout << "change the program so I don't have to write it.";
    return 0;
}
//
//-----------------
// Example: write to the console
//
int main()
{
    int integer = 4543:
    std::cout<<"The value of integer is "<<integer;
    return 0;
}
//
// ----------------
// Example: size of a datatype
/*
    GOAL: Practice writing to the console and learn
    **the variables types available in C++
    **Print the sizes of each variable to the console.
    **Print them in the following order:
    **int, short, long, char, float, double, bool
    **Use the command sizeof(variable type) ie: sizeof(int)
*/
//
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
//
//-----------------
/* Example 3: define constants
Goal: use constant variables */
//
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

//-----------------
/* Example 4: enumerated constants
    ** users can create a new variable type using the format below and assign a specific number of elements to the new variable type
*/
//
enum type_name {
  value1,
  value2,
  value3,
  .
  .
} object_names;
//
/* more specifically
enum MONTH {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};
*/
// in this case the values are numberically indexed where Jan = 0, Feb = 1, etc., etc.,
//
// Enum example:
//
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
//
//-----------------
// First Example: simple width formating of output
//
#include <iomamip>
std::cout<<"Ints",,std::setw(10)<<"Floats"<<setw(10)<<"Doubles"<<"\n";
//
// Second Example: regular formating of output
//
#include <iomamip>
std::cout<<"\n\nThe text without any formatiting\n";
std::cout<<"Ints"<<"Floats"<<"Doubles"<<"\n";
std::cout<<"The text with setw(15)\n";
std::cout<<"Ints"<<std::setw(15)<<"Floats"<<std::setw(15)\
    <<std::setw(15)<<"Doubles"<<"\n";
std::cout<<"\n\nThe text with tabs\n";
std::cout<<"Ints\t"<<"Floats\t"<<"Doubles"<<"\n";

// Showing output of formatting above
/*
The text without any formating
IntsFloatsDoubles

The text with setw(15)
Ints         Floats        Doubles


The text with tabs
Ints    Floats    Doubles
*/

// Third Example: more extensive formatting example
//
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
//
// Output
/*
print with set width = 10
Ints    Floats   Doubles
45      45.323   45.5468
54      54.323   54.5468
63      63.323   63.5468
*/
//
//
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
            std::cout<<"Illegal operation.\n";
        }

    }
    return 0;
}

// alternatively

#include <iostream>

int main()
{
    float in1, in2;
    char operation;
    float answer;

    std::cout<<"Enter two numbers:\n";
    std::cin>>in1;
    std::cin>>in2;
    std::cout<<"Enter the operation '+','-','*','/':\n";
    std::cin>>operation;

    switch(operation)
    {
        case('+'):  {
                    answer=in1 + in2;
                    break;
                    }
         case('-'):  {
                    answer=in1 - in2;
                    break;
                    }
        case('*'):  {
                    answer=in1 * in2;
                    break;
                    }
        case('/'):  {
                    answer=in1 / in2;
                    break;
                    }
        default:
                    std::cout<<"Illegal operation";
    }

    std::cout<<in1<<operation<<in2<<" = "<<answer<<"\n";

    return 0;
}
//
//-----------------
// Example header files:
//
/*Goal: practice using header files.
**.
**Put in the header file every thing that is related to
**"how to do a task".
**Put the "what to do" in the main program.
*/

// #include <iostream>
// #include <string>

//using namespace std;

#include "main.hpp" /* note the #include <iostream>
    ** & #include <string> are called be this #include "main.hpp"
    ** which contains the call to #include <isotream> and
    ** #include <string> standard libraries
    */

int main()
{
    cout<<"Hello, I use header files!";
    return 0;
}
//
// Output
// Hello, I use header files!
//
//-----------------
// User input Programming
//
"g++", "-o main.out", "main.cpp"
"./main.out", stdin=open("input.txt", "r")
//
/*
The first statement compiles the code and names the executable file main.out. Then main.out is executed using an input file called "input.txt".

These are the commands you would run if you were compiling and executing the program in a terminal. In the Udacity classroom setting clicking the "Test Run" button executes these commands for you.
*/
// Example header file use:
/*This program accepts inputs from the input.txt file*/
//
#include <iostream>
#include <string>


int main()
{
    int year = 0;
    int age = 0;
    std::string name = " ";
    //print a message to the user
    std::cout<<"What year is your favorite? ";

    //get the user response and assign it to the variable year
    std::cin >> year;

    //output response to user
    std::cout<<"How interesting, your favorite year is "<<year<<"!\n";

    //print a message to the user
    std::cout<<"At what age did you learn to ride a bike? ";

    //get the user response and assign it to the variable age
    std::cin >> age;

    //output response to user
    std::cout<<"How interesting you learned to ride at "<<age<<"!\n";

    std::cout<<"What is your name? ";
    std::cin>>name;
    std::cout<<"Hello "<<name<<" !\n";
    return 0;
}
//
// Output
/*
What year is your favorite? How interesting, your favorite year is 1991!
At what age did you learn to ride a bike? How interesting you learned to ride at 5!
What is your name? Hello Bob !
*/
//
// String input
/* The; std::cin>> vs std::getline(std::cin, variableName);
    using std::cin>> it stops when it encounters a space
    whereas std::getline(std::cin, varialbeName); can get a
    whole string that has spaces between words
    "std::cin will not retrieve strings that have a space in
    them. It will see the space as the end of the input."
    "getline: it will retrieve characters from the std::cin
    source and stores them in the variable called variableName.
    It will retrieve all characters until the newline or “\n”
    is detected."
    "The programmer can also specify a different delimiter if
    the newline character is not desired. The details are in the
    provided link."
*/
// Example getline string program:
//
#include<iostream>
#include<string>

int main()
{
    std::string userName;
    std::cout<<"Tell me your nickname?: ";
    std::getline(std::cin, userName);
    std::cout<<"Hello "<<userName<<"\n";
    return 0;
}
//
// Output:
/*
Tell me your nickname?: Hello JuneBug
*/
// Example 2 getline for reading strings as inputs
//
/*Goal: practice std::cin for strings
**Write a program that prompts two users for their
**name, address, and phone number.
**Print the information to the console in the following format:
**name
**\/t\/t address
**\/t\/tphone number
*/

#include <iostream>
#include <string>

int main()
{
    // set string data type
    std::string name1, address1, phoneNo1;
    std::string name2, address2, phoneNo2;

    // get inputs from user 1
    std::cout<<"User1 what is your name?\n";
    std::getline(std::cin, name1);
    std::cout<<"User1 what is your address?\n";
    std::getline(std::cin, address1);
    std::cout<<"User1 what is your phone number?\n";
    std::getline(std::cin, phoneNo1);

    // get inputs from user 2
    std::cout<<"User2 what is your name?\n";
    std::getline(std::cin, name2);
    std::cout<<"User2 what is your address?\n";
    std::getline(std::cin, address2);
    std::cout<<"User2 what is your phone number?\n";
    std::getline(std::cin, phoneNo2);

    // print output of user 1
    std::cout<<"\n\n"<<name1<<"\n";
    std::cout<<"\t\t"<<address1<<"\n";
    std::cout<<"\t\t"<<phoneNo1<<"\n";

    // print output of user 2
    std::cout<<"\n\n"<<name2<<"\n";
    std::cout<<"\t\t"<<address2<<"\n";
    std::cout<<"\t\t"<<phoneNo2<<"\n";
    return 0;
}
//
// Output
/*
User1 what is your name?
User1 what is your address?
User1 what is your phone number?
User2 what is your name?
User2 what is your address?
User2 what is your phone number?


Imogene Penelope Freely
		         2343 South View Road
		         (408)435-3221


Sandy Beaches
		         1123 Pebble Creek Road
		         (408)546-5432
*/
// Exercise; getline for reading strings as inputs
//
// "More on String Inputs, Steps for using Stringstream"
// Converting length of strings to numberical values for manipulation
//
// Start by including the Stringstream preprocessor from the standard
// library. ie., #include <sstream>
//
// Next use std::getline to get the string from the user.
// ie., std::getline(std::cin, stringVariable);
//
// Convert the string variable to a float variable.
// ie., std::stringstream(stringVariable) >> numericVariable;
//
// Example 3
//
#include <iostream>
 #include <string>
 #include <sstream>

 int main ()
 {
   std::string stringLength;
   float inches = 0;
   float yardage = 0;

   std::cout << "Enter number of inches: ";
   std::getline (std::cin,stringLength);
   std::stringstream(stringLength) >> inches;
   std::cout<<"You entered "<<inches<<"\n";
   yardage = inches/36;
   std::cout << "Yardage is " << yardage;
   return 0;
 }
 // Quiz on Stringstream
 //
 // input.text
 // 12, 13.5
 //
 /*Goal: practice getting string inputs and
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room.
 **Then prompt for the width of the room.
 **Print out the area of the room.
 */

 #include <iostream>
 #include <string>
 #include <sstream>

 int main ()
 {
   std::string stringLength;
   float feet = 0;
   float length = 0;
   float width = 0;
   float squareFeet = 0;

   std::cout << "Enter the room's length in feet: ";
   std::getline (std::cin, stringLength);
   std::stringstream(stringLength) >> feet;
   std::cout<<"You entered the room's length as: "<<feet<<" ft.\n";
   length = feet;

   std::cout << "Enter the room's width in feet: ";
   std::getline (std::cin, stringLength);
   std::stringstream(stringLength) >> feet;
   std::cout<<"You entered the room's width as: "<<feet<<" ft.\n";
   width = feet;
   squareFeet = (length * width);
   std::cout << "The area of this room is: "<<squareFeet<<" sq.ft.\n";
   return 0;
 }
 // Output
 /*
    Enter the room's length in feet:
        You entered the room's length as: 12 ft.
    Enter the room's width in feet:
        You entered the room's width as: 13.5 ft.
    The area of this room is: 162 sq.ft.
*/
//
// Debugging practice
//
// main.hpp // header file
/*The header file*/

#include<iostream>

using namespace std;
//
// input.txt // input file
32
//
// main.cpp // main program
#include "main.hpp"

int main ()
 {
   float FTemp = 0;
   float CTemp = 0;

   cout<< "Enter a Farenheit temperature: ";
   cin>> FTemp;

   CTemp = (FTemp - 32.0) / (9.0/5.0);
   cout<< "\n" <<FTemp<< " in Farenheit = "  <<CTemp<< " in Celsius\n";
   return 0;
 }
// Output
/*
Enter a Farenheit temperature:
32 in Farenheit = 0 in Celsius
*/
