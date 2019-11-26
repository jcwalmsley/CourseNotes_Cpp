/*
    Before discussing the control statements a short review of the
    boolean, relational operators, logical statements would be advisable.

    Relational Operators / booleans / logical Statements
        ==
        !=
        >
        <
        <=
        <=
*/
/*Goal: learn if-else statements in C++*/

#include<iostream>
#include<string>

int main()
{
    //instead of printing 0 and 1, create an array where
    //0 = False, 1 = True
    std::string TorF[] = {"False", "True"};

    int a = 100;
    int b = 33;
    int c = 33;

    //Print out the string values of each relational operation
    std::cout<<"\n a < b is "<<TorF[a<b];
    std::cout<<"\n a > b is "<<TorF[a>b];
    std::cout<<"\n a != b is "<<TorF[a!=b];
    std::cout<<"\n c >= b is "<<TorF[c>=b];
    std::cout<<"\n c <= b is "<<TorF[c<=b];
    return 0;
}
