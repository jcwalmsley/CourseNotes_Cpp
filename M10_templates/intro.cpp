/*
    We saw how overloading can be used to create a function that is fairly generic. Unfortunately, we still have to write a function for each variable type. Wouldn't it be nice to just write a function once and use it over and over for different variable types?

    Well, actually, we can do that.

    C++ allows us to create generic functions using templates.

    Let's look at an example of a function built using a template. Then we'll discuss the details of what is a template and how to use them to create generic functions.

    Recall our findSmaller function for two integers:

    int findSmallerInt(int input1, int input2)
    {
        if(input1<input2)
            return input1;
        return input2;
    }
    Let's see what that function looks like when we use a template to make it generic.
*/
#include<iostream>

using namespace std;

//Our generic function
template <typename T>  //tell the compiler we are using a template
T findSmaller(T input1,T  input2);

int main()
{
    int a = 54;
    int b = 89;
    float f1 = 7.8;
    float f2 = 9.1;
    char c1 = 'f';
    char c2 = 'h';
    string s1 = "Hello";
    string s2 = "Bots are fun";

    //Wow! We can use one function for different variable types
    cout<<"\nIntegers compared: "<<findSmaller(a,b);
    cout<<"\nFloats compared: "<<findSmaller(f1,f2);
    cout<<"\nChars compared: "<<findSmaller(c1,c2);
    cout<<"\nStrings compared: "<<findSmaller(s1,s2);
    return 0;
}

template <typename T>
T findSmaller(T  input1,T  input2)
{
    if(input1 < input2)
        return input1;
    else
        return input2;
}
