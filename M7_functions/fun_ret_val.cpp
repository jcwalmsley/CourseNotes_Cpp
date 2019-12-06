/*
    Function declarations and definitions of functions that return a value
    must declare the datatype of the values being returned in the function
    declarations and definitions.
*/
//  Example syntax below:

returnVariableType functionName(param1, param2, ..., paramN)
{
     variarble type returnVariable;
     statement(s);
     return variable;
}
// See example 1 below:

int calculateSum(int n1, int n2)
{
     int sum;
     sum = n1 + n2;
     return sum;
}

// Alternatively example 2 below:

int calculateSum(int n1, int n2)
{
     return n1 + n2;
}

/*
    Exercise: familiarize with functions that return values.

    Note: to execute this program move it to a new file in a
    new directory so that it is separated from the code examples
    above.
*/
//
#include<iostream>
using namespace std;

float add(float n1, float n2);
float sub(float n1, float n2);
float mult(float n1, float n2);
float div(float n1, float n2);

int main()
{
    float n1 = 7.1;
    float n2 = 5.2;
    float answer;

    answer = add(n1, n2);
    cout<<n1<<"+"<<n2<<" = "<<answer<<"\n";
    answer = sub(n1, n2);
    cout<<n1<<"-"<<n2<<" = "<<sub(n1,n2)<<"\n";
    answer = mult(n1, n2);
    cout<<n1<<"*"<<n2<<" = "<<mult(n1,n2)<<"\n";
    answer = div(n1, n2);
    cout<<n1<<"/"<<n2<<" = "<<div(n1,n2)<<"\n";
    return 0;
}

float add(float n1, float n2)
{
    return n1 + n2;
}

float sub(float n1, float n2)
{
    return n1 - n2;
}

float mult(float n1, float n2)
{
    return n1 * n2;
}

float div(float n1, float n2)
{
    return n1 / n2;
}

  
