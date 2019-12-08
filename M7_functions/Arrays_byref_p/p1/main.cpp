/*
    Even though it isn't possible to pass an array to a function.
    It is possible to pass an array by reference to a function.
    This can be done in 3 ways.

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
void arrayAsPointer(int *array, int size);

//As a sized array
void arraySized(int array[5], int size);

//As an unsized array
void arrayUnSized(int array[], int size);

int main()
{
    const int size = 6;
    int array[size] = {11,22,55,44,66,77};
        /*
            When passing pointers or references to arrays
            we often don't know the array's size therefore,
            pass size also.
        */
    arrayAsPointer(array, size);
    arraySized(array, size);
    arrayUnSized(array, size);
    return 0;
}

void arrayAsPointer(int *array, int size)
{
    std::cout<<std::setw(5);
    for(int i=0; i<size; i++)
        std::cout<<array[i]<<" ";
    std::cout<<"\n";
}

void arraySized(int array[6], int size)
{
    std::cout<<std::setw(5);
    for(int i=0; i<size; i++)
        std::cout<<array[i]<<" ";
    std::cout<<"\n";
}

void arrayUnSized(int array[], int size)
{
    std::cout<<std::setw(5);
    for(int i=0; i<size; i++)
        std::cout<<array[i]<<" ";
    std::cout<<"\n";
}
