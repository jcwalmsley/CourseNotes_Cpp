/*
    C++ uses two methods of commenting:
        block comments
        single line comments
*/

// Bloc comments begin and end as shown below:
    /*  The start of a comment block
    */  //the end of a comment block
// The compiler ignores what is written between the to slashes and asterix

// Single line comments are used as shown below:

    // indicate a single line comment with two back slashes the compiler will ingnore the rest of this line


// Example: note this is not a program it's just an exmaple of using the two types of comments

int main()
{
    /*
        This is an example of using a block comment
        for longer multiline comments like this one.
    */

    int year = 0;
    int age = 0;
    std::string name = " ";
    //print a message to the user <- this is an exmaple of a single line comment
    std::cout<<"What year is your favorite? ";
    //get the user response and assign it to the year<- this is another example of a single line comment
    std::cin >> year;
    ...
