/*
    So far we have looked at functions where all the input parameters and return variables are the same type. Now we will look at when the types are different.

    We will still use the same form, we will just need to tell the compiler that different variable types are allowed.

    template <typename T, typename U, typename V>
    T functionName (U  parameter1, V  parameter2,...)
    {
        function statements;
    }
    For example:

    T getBigger(T input1, U input2)
    {
        if(input1 > input2)
            return input1;
        return input2;
    }
    In this instance the function accepts two inputs of different types; 'T' and 'U'. The return type is 'T'. For the user this translates as: "Enter two different variable types in the function. Whichever variable type is listed first, is the variable type that is returned.

    More information can be found at: C++ Templates
*/

/*Goal: learn to use templates with multiple variable types.
*/

#include<iostream>
using namespace std;

template <typename T, typename U>
T getBigger(T input1, U input2);


int main()
{
    int a = 5;
    float b = 6.334;
    int bigger;
    cout<<"Between "<<a<<" and "<<b<<" "<<getBigger(a,b)<<" is bigger.\n";

    cout<<"Between "<<a<<" and "<<b<<" "<<getBigger(b,a)<<" is bigger.\n";
    return 0;
}

template <typename T, typename U>
T getBigger(T input1, U input2)
{
    if(input1 > input2)
        return input1;
    return input2;
}
