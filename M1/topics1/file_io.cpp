// Example 8: File IO (input output) steps, reading input and writing outputs
/*
    "Include the <fstream> library
        Create a stream (input, output, both)
            ifstream myfile; (for reading a file)
            ofstream myfile; (for writing to a file)
            fstream myfile; (for reading and writing a file)
    Open the file  myfile.open(“filename”);
    Write or read the file
    Close the file myfile.close();""
*/
//

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
// Exercise for Example 8: reading input and writing output

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
