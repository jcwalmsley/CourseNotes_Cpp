
#include<iostream>

//to create a generic template function
//inform the compiler we're using a template of type T

//---
//the follwoing works
template<typename T > //function declaration
T sumTwo(T  a,T  b) //function definition
{
    T  sum;
    sum = a + b;
    return sum;
}
//---
//the follwoing works
// template<typename T > //function declaration
// T sumTwo(T  a,T  b);
//
// template<typename T > //function definition
// T sumTwo(T  a,T  b) //function definition
// {
//     T  sum;
//     sum = a + b;
//     return sum;
// }
//---
//the follwoing works
// template<class T > //function declaration
// T sumTwo(T  a,T  b) //function definition
// {
//     T  sum;
//     sum = a + b;
//     return sum;
// }
