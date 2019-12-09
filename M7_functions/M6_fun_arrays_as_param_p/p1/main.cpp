/*
    Even though it's not possible to pass arrays to functions,
    arrays can be passed by reference to a function.

    3 methods of passing arrays to functions:
    void functionName(variableType *arrayName)
    void functionName(variableType arrayName[length of array])
    void functionName(variableType arrayName[])
*/
//
/*
    Examples of the 3 ways to pass an array to a funtion by reference.
*/

#include<iostream>
#include<iomanip>

//As a pointer
void arrayAsPointer(int *arrayName, int size);

//As a sized array
void arraySized(int arrayName[5], int size);

//As an unsized array
void arrayUnSized(int arrayName[], int size);

int main()
{
    const int size = 6;
    int arrayName[size] = {11,22,55,44,66,77};
        /*
            When passing pointers or references to arrays
            we often don't know the array's size therefore,
            pass size also.
        */
    arrayAsPointer(arrayName, size);
    arraySized(arrayName, size);
    arrayUnSized(arrayName, size);
    return 0;
}

void arrayAsPointer(int *arrayName, int size)
{
    std::cout<<std::setw(5);
    for(int i=0; i<size; i++)
        std::cout<<arrayName[i]<<" ";
    std::cout<<"\n";
}

void arraySized(int arrayName[6], int size)
{
    std::cout<<std::setw(5);
    for(int i=0; i<size; i++)
        std::cout<<arrayName[i]<<" ";
    std::cout<<"\n";
}

void arrayUnSized(int arrayName[], int size)
{
    std::cout<<std::setw(5);
    for(int i=0; i<size; i++)
        std::cout<<arrayName[i]<<" ";
    std::cout<<"\n";
}
