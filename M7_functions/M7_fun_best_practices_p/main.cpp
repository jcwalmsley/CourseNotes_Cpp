/*
    HELPFUL TIP:
    When difining variable definitions involving numerical values
    prevent them from being changed by the function by entering them
    as const int type variables. This helps to keep others from redefining
    your varialbes also.
*/

//delcaration:
int doubleInput(const int input)

//definition:
int doubleInput(const int input)
{
    int j = input * 5;
    return j;
}

/*
    This code will not compile: I have modified the variable input.
    In the declaration and definition I said this value would not be modified.

    Attempting to execute this code if it were in a program would return an error
    because, the variable was defined as a const which cannot be changed inside
    the function.
*/

int doubleInput(const int input)
{
    input++;
    int j = input * 5;
    return j;
}
