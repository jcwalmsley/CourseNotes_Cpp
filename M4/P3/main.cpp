 /*
    Program demonstrating break statements between cases.
    1) Have user input two numbers (floats)
    2) Have user choose whether to:
        1 add
        2 subtract
        3 multiply
        4 dived
    the two numbers.
    Output to console the numbers selected by the
    user as well as the results of the chosen
    operation.

    For example:
            The user enters: 4 5 +
            The program will output: 4 + 5 = 9
*/

#include <iostream>

int main()
{
    float in1, in2;
    char operation;
    float answer;

    std::cout<<"Enter 2 numbers:\n";
    std::cin>>in1;
    std::cin>>in2;
    std::cout<<"Enter the operation '+','-','*','/':\n";
    std::cin>>operation;
    std::cout<<"You choose operation "<<operation<<"\n";

    switch(operation)
    {
        case('+'): {
            answer=in1 + in2;
            break;
        }
        case('-'): {
            answer=in1 - in2;
            break;
        }
        case('*'): {
            answer=in1 * in2;
            break;
        }
        case('/'): {
            answer=in1 / in2;
            break;
        }
        default:
            std::cout<<"Illegal operation";
        }
        std::cout<<in1<<operation<<in2<<" = "<<answer<<"\n";

        return 0;
}
