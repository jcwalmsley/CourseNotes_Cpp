/*Header for a function that passes a variable by reference in main.cpp*/

#include <iostream>

using namespace std;

void calculate(float in1, float in2, char operation, float &ans);
void printEquation(float input1,float input2, char operation, float result);

void calculate(float in1, float in2, char operation, float &ans)
{
    switch(operation)
    {
        case '+': ans = in1 + in2;
                  break;
        case '-': ans = in1 - in2;
                  break;
        case '*': ans = in1 * in2;
                  break;
        case '/': ans = in1 / in2;
                  break;
        default:  std::cout<<"Illegal operation\n";
    }
}
//
void printEquation(float input1,float input2, char operation, float result)
{
 std::cout<<input1<<" "<<operation<<" "<<input2<<" = "<<result<<"\n";
}
