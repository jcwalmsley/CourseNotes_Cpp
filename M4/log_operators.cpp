/*
There are three logic operators in C++:

    • and represented by &&     where if both inputs are non-zero the result is true
    • or  represented by ||     where if at least one input is non-zero the result is true
    • not represented by !      where the negative of the logical condition results in true

There are two Boolean values:

    • True = 1
    • False = 0

*/
//
// Examples:
/*
    Given:
    • A = 1
    • B = 1
    • C = 0
    • D = 0
*/
//          A && B = 1
//          A && C = 0
//          A || B = 1
//          A || C = 1
//          C || D = 0
//          !(A&&B) = 0
//          !(C||D) = 1

//-----------------
/*Goal: understand the logical operators supported by C++
*/

#include<iostream>
#include<string>

int main()
{
    int A = 5;
    int B = 4;
    int C = 5;
    int D = 0;

    std::string TorF[] = {"False", "True"};

    //The && operator
    std::cout<<"A == C is "<<TorF[A == C];
    std::cout<<"\n(B == D) is "<<TorF[B == D];
    std::cout<<"\n(B > D) is "<<TorF[B > D];
    //A true && false = false
    std::cout<<"\n\n(A ==C) && (B == D) is "<<TorF[(A == C) && (B == D)];
    //A true and true = true
    std::cout<<"\n(A ==C) && (B > D) is "<<TorF[(A == C) && (B > D)];

    //The || operator
    //A true || false = true
    std::cout<<"\n\n(A == C) || (B == D) is "<<TorF[(A == C) || (B == D)];
    //A true || true = true
    std::cout<<"\n(A == C) || (B > D) is "<<TorF[(A == C) || (B > D)];

    //The 'Not' operator
    std::cout<<"\n\nA < B is "<<TorF[A < B];
    std::cout<<"\n!(A < B) is "<<TorF[!(A < B)];

    std::cout<<"\n\nA == C is "<<TorF[A == C];
    std::cout<<"\n!(A == C) is "<<TorF[!(A == C)];

    return 0;
}
// Output
/*
A == C is True
(B == D) is False
(B > D) is True

(A ==C) && (B == D) is False
(A ==C) && (B > D) is True

(A ==C) || (B == D) is True
(A ==C) || (B > D) is True

A < B is False
!(A < B) is True

A == C is True
!(A == C) is False
*/
