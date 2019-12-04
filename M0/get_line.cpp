// Example getline command for getting string input:
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

    // Tell me your nickname?:
    // Hello JuneBug
*/
//-----------------
// Example getline for reading strings as inputs
//
/*
    Exercise; using std::cin for reading string input;

    Write a program that prompts two users for their name,
    address, and phone number.

    Print the information to the console in the following format:
    name
    \/t\/t address
    \/t\/t phone number"
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
//
/*
    "Exercise: use the getline command for reading strings as inputs:

    Practice onverting the length of strings to numberical values for
    manipulation.

    Note: include the <sstream> stringstream preprocessor

    Note also: use the command std::getline to get the string input from
    the user with the following syntax:

    std::getline(std::cin, stringVariable);

    Next: convert the input string variable into a float data type
    variable using.

    std::stringstream(stringVariable) >> numericVariable;"

*/
// Example 11c: more on getting string input

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
 // Exercise: on Stringstream
 /*
    input.text
    12, 13.5
 */
 // Example 11d, converting strings to numeric varialbes
 /*
    Exercise:
    Convert string inputs to numeric variables using stringstream.

    Prompt the user to enter the length of a room as an integer.
    Then prompt the user for the width of the room as an integer.
    Then calculate adn print the area of the room.
 */

 #include <iostream>
 #include <string> // include the strings std library
 #include <sstream> // include the stringstream std library

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
