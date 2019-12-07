/*
    Example of a potential program error. Although this program
    compiles and executes it fails to return the expected result.

    Try to identify the problem with the way this example program
    is written.
*/

#include<iostream>

void increment(int input);

int main()
{
    int a = 34;
    std::cout<<"Before the function call a = "<<a<<"\n";
    increment(a);
    std::cout<<"After the function call a = "<<a<<"\n";
    return 0;
}

void increment(int input)
{
    input++;
    std::cout<<"In the function call a = "<<input<<"\n";
}
// Output
/*
    Before the function call a = 34
    In the function call a = 35
    After the function call a = 34
*/
// Notice the function does't modify the value of input "a". The solution to this is provided in the next exercise in directory p2/.
