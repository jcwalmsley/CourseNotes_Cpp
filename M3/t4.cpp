// Example 5
/*
    "Exercise: fix the variable types problem.
    This program outputs the wrong answer
    even though it compiles and executes without errors.
    Fix it so that it outputs the correct value."
*/
/*
    "The output produced by the following program is not correct,
    make changes it to return the correct answer."
*/
#include <iostream>
int main(void)
{
    int numerator = 4;
    int denominator = 5;

    int answer = numerator / denominator;
    std::cout<<"answer = "<<answer;
    return 0;
}
/* Output
0
*/
//
// Solution:
//
#include <iostream>
int main()
{
    float numerator = 4;
    float denominator = 5;

    float answer = numerator / denominator;
    std::cout<<"answer = "<<answer;
    return 0;
}
/* Output
 0.8
*/
