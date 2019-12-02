/*
    Before discussing the control statements we should briefly review
    relational operators.

    Relational Operators
        ==
        !=
        >
        <
        <=
        <=

    A review of relational operators follows:
*/

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
/*
    Output
        a < b is False
        a > b is True
        a != b is True
        c >= b is True
        c <= b is True
*/
