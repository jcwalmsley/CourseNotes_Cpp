/*
    Function declarations and definitions must declare the datatype
    of values returned by the function.
*/
//  Syntax:
/*
returnVariableType functionName(param1, param2, ..., paramN)
{
     variarble type returnVariable;
     statement(s);
     return variable;
}
*/
// Example 1:
/*
int calculateSum(int n1, int n2)
{
     int sum;
     sum = n1 + n2;
     return sum;
}
*/
// Example 2:
/*
int calculateSum(int n1, int n2)
{
     return n1 + n2;
}
*/
/*
    Exercise: familiarization with functions returning values.
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
    cout<<n1<<"-"<<n2<<" = "<<answer<<"\n";//"<<sub(n1,n2)<<"\n";
    answer = mult(n1, n2);
    cout<<n1<<"*"<<n2<<" = "<<answer<<"\n";//"<<mult(n1,n2)<<"\n";
    answer = div(n1, n2);
    cout<<n1<<"/"<<n2<<" = "<<answer<<"\n";//"<<div(n1,n2)<<"\n";
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

  
