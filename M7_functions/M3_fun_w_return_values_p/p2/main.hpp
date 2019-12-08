#include <iostream>

//-----------------

// function declaration 1
void printEquation(int n1, int n2, int sum, char operation);

// function declaration 2
int sum(int n1, int n2);

//-----------------

// function definition 1
void printEquation(int n1, int n2, int sum, char operation)
{
    std::cout<<n1<<" "<<operation<<" "<<n2<<" = " <<sum;
}
// function definition 2
int sum(int n1, int n2)
{
    return n1 + n2;
}
