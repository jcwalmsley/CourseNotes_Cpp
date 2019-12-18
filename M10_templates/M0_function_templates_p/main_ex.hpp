
#include<iostream>

using namespace std;

//to create a generic template function
//inform the compiler we're using a template of type T
template <typename T> //template function declaration

template <typename T>
T sumTwo(T a, T b)
{
    T sum;
    sum = a + b;
    return sum;
}
